#ifndef SYMBOLSTABLE_H_
#define SYMBOLSTABLE_H_

#include <stdio.h>
#include "ut/uthash.h" 

//////////////////////////////
// -- Data definition
//////////////////////////////

int verboseLevel;

/*******************
   Symbol types
********************/
enum symbolType{
    Variable,   
    Function,   
    Procedure, 
    In, 
    Out, 
    InOut, 
    ArrayType,
    Type,
    Field,      // To especify field of a record type.
    Literal,
    Auxiliar
};
typedef enum symbolType symbolType;

/*******************
   Variable types
********************/
enum variableType{
    Integer,   
    Character,   
    Real, 
    Bool,  // Boolean type 
    ArrayVariable,
    String,
    Record,
    CustomType,
    Void   // For procedures, take it out when you make custom register creation
};
typedef enum variableType variableType;

/***************************
   Register for hash table
***************************/
struct compoundId{
	char id[50];
	int scope;
};
typedef struct compoundId compoundId;

struct registerStruct{
    compoundId key;     // We'll use this field as the key  
    
    symbolType typeSymbol;

    variableType typeVariable;      // When the symbol is a variable, this will store it's type
 
    int defined; // Used for procedures and types:
                   //  - If 0 it's just specified.
                   //  - If 1 it's already defined.

    unsigned int address; // For static
    unsigned int stackAddress; //For locals
    int size;

    int label; // Label for calling the subprogram

    // If the symbol is a **function** or **procedure**:
    //   - nRegisters counts the number of parameters.
    // If the symbol is a **type**:
    //   - nRegisters counts the number of fields.
    int nRegisters;
    int sizeParams;
    struct registerStruct *registerList;

    int nLocals;
    int sizeLocals;
    struct registerStruct *registerListLocals;

    //int scope;        // Where from is the symbol accesible 
    int parentScope;

    /* Maybe is better to use links instead of numbers for scopes
      struct registerStruct *firstRegistrScope;
      struct registerStruct *lastRegistrScope;
    */
    UT_hash_handle hh; // Makes this structure hashable 
};
typedef struct registerStruct registerStruct;


/**************************
  Symbols table
**************************/
struct symbolsTable{
	registerStruct *table;
	registerStruct *lastRegister;

	int currentScope;

	/* Alternative to scopes
	   struct symbolsTable *rootScope;
       struct symbolsTable *currentScope;
       struct symbolsTable *parentScope;
	*/
};
typedef struct symbolsTable symbolsTable;

///////////////////////////////////////
// -- Method definition
///////////////////////////////////////

/***************************
   Initialization methods
***************************/
void symbolsTableInit( symbolsTable *sT );

void setAnonymousRegister( registerStruct *r, char *id, int scope, symbolType typeSymbol, variableType typeVariable );

/***********************
   Additive methods
***********************/
registerStruct *createRegister( char *id, int scope, symbolType typeSymbol, variableType typeVariable );

int addRegisterToList( registerStruct **list, registerStruct *r );

int addRegister( symbolsTable *sT, registerStruct *r );

int addParametersToSubprogram( symbolsTable *sT, registerStruct *parametersList, registerStruct **r );

int addParametersToSymbolsTable( symbolsTable *sT, registerStruct *r );

/***********************
   Destructive methods
***********************/
void destroyRegister( registerStruct *r );

void deleteRegisterList( registerStruct **registerList );

void destroyRegisterList( registerStruct **registerList );

void destroySymbolsTable( symbolsTable *sT );

/***********************
   Management methods
***********************/
void enterScope( symbolsTable *sT ); 
void exitScope( symbolsTable *sT, registerStruct *r ); 

void markSubprogramAsDefined( registerStruct *r );

int checkParametersSubprogram( registerStruct *defParamList, registerStruct *r );

int checkParametersSubprogramCall( registerStruct *callParamList, registerStruct *r );

int checkAssignmentType( registerStruct *r1, registerStruct *r2 );

int checkIfNumeric( char *errorString, registerStruct *r, int operationType );

int checkIfOthers( char *errorString, registerStruct *r1, registerStruct *r2 );

int checkIfDiscreteChoice( char *errorString, registerStruct *r );

int checkPutGet( char *errorString, registerStruct *r );

variableType getFactorVariableType( registerStruct *r1, registerStruct *r2 );

int forceCasting( variableType vT1, variableType vT2 );

/********************
   Display methods
********************/
void getSymbolTypeName( char *name, symbolType sType );
void getVariableTypeName( char *name, variableType vType );

void printRegister(registerStruct r);
void printRegisterList(registerStruct *r);
void printSymbolsTable( symbolsTable sT );

/**********************
   Lookup methods
**********************/
int findSymbol(); // Not implemented yet

int searchProcedure( symbolsTable *sT, char *id, int scope );

registerStruct *getProcedure( symbolsTable *sT, char *id, int scope );

registerStruct *getSymbol(  symbolsTable *sT, char *id, int scope );


#endif
// SYMBOLSTABLE_H_