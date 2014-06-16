#include "symbolsTable.h"

int verboseLevel=1;

typedef enum {false=0, true=1} bool;

// Specification of printing functions
void getSymbolTypeName( char *name, symbolType sType );
void getVariableTypeName( char *name, variableType vType );

/**************************
   Initialization methods
**************************/
void addTypesMethods( symbolsTable *sT ){
  registerStruct *auxRegister;

  auxRegister = createRegister( "main", sT->currentScope,  Procedure, Void );
  markSubprogramAsDefined( auxRegister );
  addRegister( sT, auxRegister ); 


  auxRegister = createRegister( "Put", sT->currentScope,  Procedure, Void );
  markSubprogramAsDefined( auxRegister );
  addRegister( sT, auxRegister ); 

  auxRegister = createRegister( "Get", sT->currentScope,  Procedure, Void ); 
  markSubprogramAsDefined( auxRegister );
  addRegister( sT, auxRegister ); 

  auxRegister = createRegister( "New_Line", sT->currentScope,  Procedure, Void ); 
  markSubprogramAsDefined( auxRegister );
  addRegister( sT, auxRegister ); 

}

void symbolsTableInit( symbolsTable *sT ){
  sT->table = NULL;

  sT->currentScope = 0;

  addTypesMethods( sT );

}

void setAnonymousRegister( registerStruct *r, char *id, int scope, symbolType typeSymbol, variableType typeVariable ){

  strcpy(r->key.id, id);
  r->key.scope = scope;

  r->typeSymbol   = typeSymbol;
  r->typeVariable = typeVariable;

}
/***********************
   Additive methods
***********************/
registerStruct *createRegister( char *id, int scope, symbolType typeSymbol, variableType typeVariable ){
	registerStruct *r =(registerStruct *)calloc(1, sizeof(registerStruct));
	
	strcpy(r->key.id, id);
  r->key.scope = scope;

  r->typeSymbol   = typeSymbol;
  r->typeVariable = typeVariable;

  r->defined = 0;
	
	return r;
}

int addRegisterToList( registerStruct **list, registerStruct *r ) {
  registerStruct *auxR = NULL;

  HASH_FIND(hh, *list, &(r->key), sizeof(compoundId), auxR);  

  if (auxR!=NULL) { // If isn't null the ID is already in the hash
    printf("!! - Error adding register to symbols table in scope %d: ID '%s' already in symbols table\n", r->key.scope, r->key.id);
    return -1;
  }
  
  // Since no register was found with the same ID we can proceed 
  // inserting the new register to the symbols table.
  HASH_ADD(hh, *list, key, sizeof(compoundId), r);      

  if(verboseLevel>1)  printf("@@ - Register '%s' added successfully to symbols table\n", r->key.id);
  return 0; // Register added succesfully
}


int addRegister( symbolsTable *sT, registerStruct *r ) {

  int errorCode = addRegisterToList( &(sT->table), r );
  
  // Everything went fine
  if(errorCode == 0 ) sT->lastRegister=r;

  return errorCode;
}

void printRegister(registerStruct r);

int addParametersToSubprogram( symbolsTable *sT, registerStruct *parametersList, registerStruct *r ){
  
  r->nRegisters   = HASH_COUNT( parametersList );
  r->registerList = parametersList;

  return 0;
}

int addParametersToSymbolsTable( symbolsTable *sT, registerStruct *r ){
  registerStruct *currentRegister, *tmp, *toInsert;
  int errorCode;

  HASH_ITER( hh, r->registerList, currentRegister, tmp ) {

    toInsert = createRegister( currentRegister->key.id, sT->currentScope,
                               currentRegister->typeSymbol,
                               currentRegister->typeVariable );

    errorCode = addRegister( sT, toInsert );
    if(errorCode != 0) return errorCode;
    
  }

  return 0;
}

/***********************
   Destructive methods
***********************/
void destroyRegister(registerStruct *r){
  free( r );
}

void deleteRegisterList( registerStruct **registerList ) {
  registerStruct *currentRegister, *tmp;

  HASH_ITER( hh, *registerList, currentRegister, tmp ) {
    HASH_DEL( *registerList, currentRegister );  /* delete; registers advances to next */
  }

  registerList = NULL;
  //registerList->table = NULL;
  //registerList->currentScope = -1;
}

void destroyRegisterList( registerStruct **registerList ) {
  registerStruct *currentRegister, *tmp;

  HASH_ITER( hh, *registerList, currentRegister, tmp ) {
    HASH_DEL( *registerList, currentRegister );  /* delete; registers advances to next */
    destroyRegister( currentRegister );
  }

  registerList = NULL;
}

void destroySymbolsTable( symbolsTable *sT ) {
  registerStruct *currentRegister, *tmp;

  HASH_ITER( hh, sT->table, currentRegister, tmp ) {
    HASH_DEL( sT->table, currentRegister );  /* delete; registers advances to next */
    
    if( currentRegister->typeSymbol == Function  ||  
        currentRegister->typeSymbol == Procedure ||
        currentRegister->typeSymbol == Type )
    {
      destroyRegisterList( &(currentRegister->registerList) );
    }

    destroyRegister( currentRegister );      /* optional- if you want to free  */
  }

  sT->table = NULL;
  sT->currentScope =  0;
}

/***********************
   Management methods
***********************/
void enterScope( symbolsTable *sT ){
  sT->currentScope++;
};

void exitScope( symbolsTable *sT ){
  registerStruct *iterator = sT->lastRegister;
  registerStruct *delete;

  //printf("Exiting scope!!!!\n");
  //printSymbolsTable (*sT);

  // Take out all the symbols in currentScope
  while(iterator != NULL && iterator->key.scope == sT->currentScope){
    delete = iterator;

    iterator = iterator->hh.prev;

    HASH_DEL( sT->table, delete );
    destroyRegister( delete );
  }
  

  // Decrease currentScope
  sT->currentScope--;
};

void markSubprogramAsDefined( registerStruct *r ){
  r->defined = 1;
}

int checkParametersSubprogram( registerStruct *defParamList, registerStruct *r ){
  char nameSpec[15], nameDef[15];

  registerStruct *iteratorDefList   = defParamList;
  registerStruct *iteratorSpecList  = r->registerList;

  int countDefined    = HASH_COUNT(iteratorDefList);
  int countSpecified  = HASH_COUNT(iteratorSpecList);
  // Parameters in specification are different number than parameters in definition
  if( countDefined != countSpecified ){
    if(verboseLevel>0)
      printf("!! - Register '%s': expected %i parameters but %i were found\n", 
             r->key.id, countDefined, countSpecified);

    return -1;
  }

  int posParameter;
  while(countDefined>0){
    posParameter = countSpecified - countDefined+1; 
    bool error = false;

    // Comparing parameters

    if(iteratorDefList->typeSymbol != iteratorSpecList->typeSymbol ){
      error = true;

      if(verboseLevel>0){

        getSymbolTypeName(nameSpec, iteratorSpecList->typeSymbol);
        getSymbolTypeName(nameDef,  iteratorDefList->typeSymbol);

        printf("!! - Register '%s' symbolType error in pos %i: Type is %s, expected type was %s\n", 
                r->key.id, posParameter, nameDef, nameSpec);
      }
    } 
    if(iteratorDefList->typeVariable != iteratorSpecList->typeVariable ){
      error = true;

      if(verboseLevel>0){

        getVariableTypeName(nameSpec, iteratorSpecList->typeVariable);
        getVariableTypeName(nameDef,  iteratorDefList->typeVariable);

        printf("!! - Register '%s' variableType error in pos %i: Type is %s, expected type was %s\n", 
                r->key.id, posParameter, nameDef, nameSpec);
      }
    } 
 
    if(error) return -2;

    iteratorDefList   = iteratorDefList->hh.next;
    iteratorSpecList  = iteratorSpecList->hh.next;
    countDefined--;
  }

  return 0;
}

int checkAssignmentType( registerStruct *r1, registerStruct *r2 ){
  char name1[15], name2[15];

  if (r1->typeSymbol != Variable &&
      r1->typeSymbol != Out &&
      r1->typeSymbol != In  &&
      r1->typeSymbol != InOut
      ){
    return -1;
  }
  if(r2->typeSymbol == Procedure  ||
     r2->typeSymbol == Field      ||
     r2->typeSymbol == ArrayType
    ){
    return -2;
  }
  if(r2->typeVariable == String ){
    return -3;
  }
  /*
  if(r1->typeVariable != r2->typeVariable){
    return -3;
  }
  */

  return 0;
}

int checkIfNumeric( char *errorString, registerStruct *r, int operationType ){
  char string1[15];

  const char *s1[] =  
      { "Factor cannot be multiplied",    // operationType == 0
        "Term cannot be added",           // operationType == 1
        "Expression cannot be compared",  // operationType == 2
        "Condition can't be evaluated"    // operationType == 3
      };

  
  // Check if symbol is a multiplyable type
  if( r->typeSymbol == Procedure  ||  r->typeSymbol == ArrayType  ||
      r->typeSymbol == Type       ||  r->typeSymbol == Field      
    )
  {
    getSymbolTypeName(string1, r->typeSymbol);
    sprintf(  errorString,"%s -> typeSymbol is %s", 
              s1[operationType], string1
           ); 
    return -1;
  }
  if( r->typeVariable == String   ||  r->typeVariable == ArrayVariable  || 
      r->typeVariable == Record   ||  r->typeVariable == CustomType     ||
      r->typeVariable == Void
    )
  {
    getVariableTypeName(string1, r->typeSymbol);
    sprintf(  errorString,"%s -> typeVariable is %s", 
              s1[operationType], string1
           ); 
    return -2;
  }

  return 0;
}

variableType getFactorVariableType( registerStruct *r1, registerStruct *r2 ){

  if( r1->typeVariable == Real || r2->typeVariable == Real ){
    return Real;
  }
  if( r1->typeVariable == Integer || r2->typeVariable == Integer ){
    return Integer;
  }
  if( r1->typeVariable == r2->typeVariable  ){
    return r1->typeVariable;
  }else{ // If one is Bool and the other is Character, we return Integer
    return Integer;
  }
}

int forceCasting( variableType vT1, variableType vT2 ){

}


/********************
   Display methods
********************/
void getSymbolTypeName( char *name, symbolType sType ){
  switch( sType ){
  case Variable:
    strcpy(name, "Variable");
    break;
  case Function:
    strcpy(name, "Function");
    break;
  case Procedure:
    strcpy(name, "Procedure");
    break;
  case In:
    strcpy(name, "In");
    break;
  case Out:
    strcpy(name, "Out");
    break;
  case InOut:
    strcpy(name, "InOut");
    break;
  case ArrayType:
    strcpy(name, "ArrayType");
    break;
  case Type:
    strcpy(name, "Type");
    break;
  case Field :
    strcpy(name, "Field ");
    break;
  case Literal :
    strcpy(name, "Literal ");
    break;
  case Auxiliar :
    strcpy(name, "Auxiliar ");
    break;
  default:
    strcpy(name, "Error Type");
    break;
  }

}

void getVariableTypeName( char *name, variableType vType ){
  switch( vType ){
  case Integer:
    strcpy(name, "Integer");
    break;
  case Character:
    strcpy(name, "Character");
    break;
  case Real:
    strcpy(name, "Real");
    break;
  case Bool:
    strcpy(name, "Bool");
    break;
  case ArrayVariable:
    strcpy(name, "ArrayVariable");
    break;
  case String:
    strcpy(name, "String");
    break;
  case Record :
    strcpy(name, "Record ");
    break;
  case CustomType :
    strcpy(name, "CustomType ");
    break;
  case Void :
    strcpy(name, "Void ");
    break;
  default:
    strcpy(name, "Error Var");
    break;
  }
}

void printRegister(registerStruct r){
  char name[15], nameVar[15];

  getSymbolTypeName( name, r.typeSymbol );
  getVariableTypeName( nameVar, r.typeVariable );

  printf(" Register: id -> %s; scope -> %i; symbolType -> %s; variableType -> %s\n", 
          r.key.id, r.key.scope, name, nameVar);
}

void printSubprogramRegisterList( registerStruct *subprogram ){

  registerStruct *iterator;
  char name[15], nameVar[15];
  unsigned counter = 1;
  bool print = true;

  if ( subprogram->nRegisters == 0){ 
    printf("  - Procedure has 0 parameters. \n");
    print = false;

    if (subprogram->registerList != NULL){
      printf("    !! Procedure list should be null!!\n");
    }
  }
  else{
    if (subprogram->nRegisters == 1)
      printf("  - Procedure has 1 parameter: \n");
    else
      printf("  - Procedure has %d parameters: \n", subprogram->nRegisters);

    if (subprogram->registerList == NULL){
      printf("    !! Procedure list should NOT be null!!\n");
      print = false;
    } 
  }
  
  for ( iterator=subprogram->registerList; iterator != NULL; 
        iterator=iterator->hh.next )
  {
    getSymbolTypeName( name, iterator->typeSymbol );
    getVariableTypeName( nameVar, iterator->typeSymbol );

    printf("    + Param(%u): id -> %s; symbolType -> %s; variableType -> %s\n", 
            counter, iterator->key.id, name, nameVar);

    counter++;
  }

}

void printTabs(int scope){

  bool c = false;

  if(scope>0)c=true;

  for(; scope>0; scope--){
    printf("  ");
  }

  if(c)
    printf("+");
  
};

void printSymbolsTable( symbolsTable sT ) {
  //////////////
  // Variables
  //////////////
  registerStruct *iterator;

  char name[15];
  ///////////////

  unsigned int nRegisters = HASH_COUNT( sT.table );
  
  if (nRegisters != 1){
    printf("There are %u registers in the symbols table\n", nRegisters);
  }else{
    printf("There is 1 register in the symbols table\n");
  }
  
  nRegisters = 1;
  for(iterator=sT.table; iterator != NULL; iterator=iterator->hh.next) {

    printTabs(iterator->key.scope);

    getSymbolTypeName( name, iterator->typeSymbol );
    printf("+ Register(%u): id -> %s; scope -> %i; symbolType -> %s\n", 
            nRegisters, iterator->key.id, iterator->key.scope, name);

    if( iterator->typeSymbol == Function  ||  
        iterator->typeSymbol == Procedure 
      ){
    
      printf("  - Defined -> %d\n", iterator->defined );

      if (iterator->defined){
        printSubprogramRegisterList(iterator);
      }
 
    }else if( iterator->typeSymbol == Type){
      printf("  - Defined -> %d\n", iterator->defined );
      
    }

    nRegisters++;
  }
}

/**********************
   Lookup methods
**********************/
int findSymbol(); // Not implemented yet

int searchProcedure( symbolsTable *sT, char *id, int scope ){
  char name[15];
  registerStruct *r, *auxR = NULL;
      
  r = createRegister( id, scope, Procedure, Void );

  HASH_FIND(hh, sT->table, &(r->key), sizeof(compoundId), auxR);  
    
  destroyRegister(r);

  if (auxR==NULL && scope == 0) { // If is null the ID isn't already in the hash
    if(verboseLevel>0 ){
      printf("!! - Error calling procedure in scope %d: ID '%s' inexistent in symbols table\n", scope, id);    
      printSymbolsTable ( *sT );
    }
    return -1;
  }else
    if (auxR != NULL)
      if (auxR->typeSymbol != Procedure && scope == 0) { // If symbolType ins't Procedure type, the ID means another thing
        getSymbolTypeName( name, auxR->typeSymbol );
        if(verboseLevel>0) printf("!! - Error calling procedure in scope %d: ID '%s' of type %s\n", scope, id, name);    
        return -2;
      }

  if ( scope > 0) searchProcedure( sT, id, scope-1 );

  return 0; // Procedure exists in the symbol table
}

registerStruct *getProcedure( symbolsTable *sT, char *id, int scope ){
  char name[15];
  registerStruct *r, *auxR = NULL;
      
  r = createRegister( id, scope, Procedure, Void );

  HASH_FIND(hh, sT->table, &(r->key), sizeof(compoundId), auxR);

  destroyRegister(r);

  // Find on previous scopes
  if (auxR==NULL && scope > 0) {
    auxR = getProcedure( sT, id, scope-1 );
  }

  return auxR;
}

registerStruct *getSymbol(  symbolsTable *sT, char *id, int scope ){
  char name[15];
  registerStruct *r, *auxR = NULL;
      
  r = createRegister( id, scope, Variable, Void );

  HASH_FIND(hh, sT->table, &(r->key), sizeof(compoundId), auxR);

  destroyRegister(r);

  // Search on previous scopes
  if (auxR==NULL && scope > 0) {
    auxR = getProcedure( sT, id, scope-1 );
  }

  return auxR;
}