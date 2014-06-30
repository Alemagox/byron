#include "codeGenerationQ.h"
#include "Q-v3.7.3/Qlib.h"
#include "Q-v3.7.3/Q.h"
#include <string.h>

/**************************
   Initialization methods
**************************/
void qMachineInit( qMachine *Q ){
  int i;

  // Set bases for static and heap areas.
  Q->Ztop = Z;
  Q->Htop = H;

  // Set as free integer registers from R0 to R5
  for(i=0;i<6;i++){
    Q->R[i] = 0;
  }
  // Registers R6 and R7 are reserved for the machine
  Q->R[6] = 1;
  Q->R[7] = 1;

  // Set as free double registers from RR0 to RR3
  for(i=0;i<4;i++){
    Q->RR[i] = 0;
  }

  // next label to use is 1
  Q->nextLabel  = 1;
  Q->nextCodeNumber = 0;

  // Format strings
  strcpy(Q->formatPutString, "%s");
  strcpy(Q->formatPutInt,    "%d");
  strcpy(Q->formatPutChar,   "%c");
  strcpy(Q->formatGetInt,    "%d");
  strcpy(Q->formatGetChar,   "%c");
  strcpy(Q->formatNewLine,   "\\n");
  
  Q->Ztop = Q->Ztop - strlen(Q->formatPutString)-1;
  Q->formatPutStringAddress  = Q->Ztop;
  Q->Ztop = Q->Ztop - strlen(Q->formatPutInt)-1;
  Q->formatPutIntAddress     = Q->Ztop; 
  Q->Ztop = Q->Ztop - strlen(Q->formatPutChar)-1;
  Q->formatPutCharAddress    = Q->Ztop; 
  Q->Ztop = Q->Ztop - strlen(Q->formatGetInt)-1;
  Q->formatGetIntAddress     = Q->Ztop; 
  Q->Ztop = Q->Ztop - strlen(Q->formatGetChar)-1;
  Q->formatGetCharAddress     = Q->Ztop; 
  Q->Ztop = Q->Ztop - strlen(Q->formatNewLine)-1;
  Q->formatNewLineAddress     = Q->Ztop; 

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  Q->stat=0;
}

/**************************
  Code generation methods 
**************************/

void generateCodeStart( FILE* yyout, qMachine *Q ){
  //IQ.o  IQ-v3.7.2-32bits.o
  fprintf(yyout,"#include \"Q.h\"\n\n");
  fprintf(yyout,"BEGIN\t\t\t\t//Start\n");

  // Reserve static space for format strings
  fprintf(yyout,"STAT(0)\t\t\t\n");
  fprintf(yyout,"\tSTR(0x%x,\"%s\");\t//Format Put string \n", 
          Q->formatPutStringAddress, Q->formatPutString);
  fprintf(yyout,"\tSTR(0x%x,\"%s\");\t//Format Put integer\n",
          Q->formatPutIntAddress, Q->formatPutInt);
  fprintf(yyout,"\tSTR(0x%x,\"%s\");\t//Format Put char\n",
          Q->formatPutCharAddress, Q->formatPutChar);
  fprintf(yyout,"\tSTR(0x%x,\"%s\");\t//Format Get integer\n",
          Q->formatGetIntAddress, Q->formatGetInt);
  fprintf(yyout,"\tSTR(0x%x,\"%s\");\t//Format Get char\n",
          Q->formatGetCharAddress, Q->formatGetChar);
  fprintf(yyout,"\tSTR(0x%x,\"%s\");\t//Format New_Line\n",
          Q->formatNewLineAddress, Q->formatNewLine);

  // Start code
  //fprintf(yyout,"CODE(0)\t\t\t\n");

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  Q->stat=0;
}

void generateCodeEnd( FILE* yyout ){
  fprintf(yyout,"\tR0=0;\t\t\t//Succesful state\n");
  fprintf(yyout,"\tGT(-2);\t\t\t//Finish\n");
  fprintf(yyout,"END\n"); 
}

int generateCodeVarStatic( FILE* yyout, qMachine *Q, registerStruct *r, char value[] ){
  
  if(r->typeSymbol != Variable && r->typeSymbol != Literal ) return -1;


  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat!=0 ){
    fprintf(yyout,"STAT(%d)\t\t\t\n", Q->nextCodeNumber);

    Q->stat=0;
  }

  if(r->typeSymbol == Variable){
    
    fprintf( yyout,"\tDAT(0x%x,%c,%s);\t//Var '%s', scope %d \n", 
                r->address, getVarMemLabel(r->typeVariable),
                value, r->key.id, r->key.scope
           );
  }else{
    fprintf( yyout,"\tDAT(0x%x,%c,%s);\t//Literal '%s', scope %d \n", 
                r->address, getVarMemLabel(r->typeVariable),
                value, value, r->key.scope
           );
  }

  return 0;
}

//int generateCodeVarSaveValue( FILE* yyout, qMachine *Q, registerStruct *r1, 
//                          char value[] );

void generateCodePutStringLiteral( FILE* yyout, qMachine *Q, char string[] ){
  int stringLength = strlen(string);
  int i;

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t/////////////////////////\n");
  fprintf(yyout,"\t// Print string literal\n");
  fprintf(yyout,"\tR0=%d;\t\t\t//Return label\n", Q->nextLabel);
  fprintf(yyout,"\tR1=%i;\t\t\t//String length\n", stringLength );
  fprintf(yyout,"\tGT(new_);\t\t//Assign heap space for string literal\n" );

  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

  fprintf(yyout,"\tR3=R0;\t\t\t//Save the address in the heap of the string literal\n");
  
  // Assigning string to heap
  fprintf(yyout,"\t//Start assigning string to heap\n"); 
  
  for(i=0; i<stringLength-1; i++){
    fprintf(yyout,"\tU(R3)=0x%x;\t\t//'%c'\n", string[i], string[i]);
    fprintf(yyout,"\tR3=R3+1;\t\t\n");
  }
  fprintf(yyout,"\tU(R3)=0x0;\t\t//'\\0'\n");

  fprintf(yyout,"\t//Finished assigning string to heap\n");

  // Print string!!!
  fprintf(yyout,"\tR2=R0;\t\t\t//String literal address\n", Q->nextLabel);
  fprintf(yyout,"\tR0=%d;\t\t\t//Return label\n", Q->nextLabel);
  fprintf(yyout,"\tR1=0x%x;\t\t//Format string address\n", Q->formatPutStringAddress );
  fprintf(yyout,"\tGT(putfs_);\t\t//Print string literal\n" );

  // Free heap
  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

  fprintf(yyout,"\tR0=%d;\t\t\t//Return label\n", Q->nextLabel);
  fprintf(yyout,"\tR1=-%i;\t\t\t//String length\n", stringLength-1 );
  fprintf(yyout,"\tGT(free_);\t\t//Free heap space for string literal\n" );
  
  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

}

void generateCodePutVariable( FILE* yyout, qMachine *Q, registerStruct *r ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Print variable '%s', scope %d\n",
          r->key.id, r->key.scope
         );

  // Print variable!!!
  fprintf(yyout,"\tR0=%d;\t\t\t//Return label\n", Q->nextLabel);
  if( r->typeVariable == Character ){
    fprintf(yyout,"\tR1=0x%x;\t\t//Format char address\n", Q->formatPutCharAddress );
  }else{
    fprintf(yyout,"\tR1=0x%x;\t\t//Format int address\n", Q->formatPutIntAddress );
  }
  fprintf(yyout,"\tR2=%c(0x%x);\t\t//Variable value\n", 
                getVarMemLabel( r->typeVariable ), r->address);
  fprintf(yyout,"\tGT(putfi_);\t\t//Print variable\n" );


  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);
}

void generateCodeNewLine( FILE* yyout, qMachine *Q ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Print New_Line\n" );

  // Print variable!!!
  fprintf(yyout,"\tR0=%d;\t\t\t//Return label\n", Q->nextLabel);
  fprintf(yyout,"\tR1=0x%x;\t\t//Format New_Line address\n", Q->formatNewLineAddress );
  fprintf(yyout,"\tGT(putnl_);\t\t//Print variable\n" );


  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);
}

void generateCodeGetVariable( FILE* yyout, qMachine *Q, registerStruct *r ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Get variable '%s', scope %d\n",
          r->key.id, r->key.scope
         );

  // Print variable!!!
  fprintf(yyout,"\tR0=%d;\t\t\t//Return label\n", Q->nextLabel);
  fprintf(yyout,"\tR2=0x%x;\t\t//Variable address\n", r->address);
  if( r->typeVariable == Character ){
    fprintf(yyout,"\tR1=0x%x;\t\t//Format char address\n", Q->formatPutCharAddress );
    fprintf(yyout,"\tGT(getfc_);\t\t//Get variable\n" );
  }else{
    fprintf(yyout,"\tR1=0x%x;\t\t//Format int address\n", Q->formatPutIntAddress );
    fprintf(yyout,"\tGT(getfi_);\t\t//Get variable\n" );
  }

  
  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);
}

void generateCodeAssignment( FILE* yyout, qMachine *Q, registerStruct *r1,
                             registerStruct *r2 ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Assignment to variable '%s', scope %d\n",
          r1->key.id, r1->key.scope
         );

  if( r2->typeSymbol == Auxiliar ){ // When it's auxiliar, expression value is already in R0
    fprintf(yyout,"\tR1=R0;\t\t//Load value right side\n" );
  }else{
    fprintf(yyout,"\tR1=%c(0x%x);\t\t//Load value right side\n", 
                getVarMemLabel( r2->typeVariable ), r2->address);
  }
  
  fprintf(yyout,"\t%c(0x%x)=R1;\t\t//Save value right side into variable\n", 
                getVarMemLabel( r1->typeVariable ), r1->address);

}

void generateCodeMultiply( FILE* yyout, qMachine *Q, registerStruct *r1,
                             registerStruct *r2, char op ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Multiply factors\n");

  if( r1->typeSymbol == Auxiliar ){ // When it's auxiliar, expression value is already in R0
    fprintf(yyout,"\tR1=R0;\t\t//Load value left factor\n" );
  }else{
    fprintf(yyout,"\tR1=%c(0x%x);\t\t//Load value left factor\n", 
                getVarMemLabel( r1->typeVariable ), r1->address);
  }

   fprintf(yyout,"\tR0=%c(0x%x);\t\t//Load value right factor\n", 
                getVarMemLabel( r2->typeVariable ), r2->address);

   fprintf(yyout,"\tR0=R1%cR0;\t\t//Multiply factors\n", op);
}

void generateCodeAddition( FILE* yyout, qMachine *Q, registerStruct *r1,
                             registerStruct *r2, char op ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Add terms\n");

  if( r1->typeSymbol == Auxiliar ){ // When it's auxiliar, expression value is already in R0
    fprintf(yyout,"\tR1=R0;\t\t//Load value left term\n" );
  }else{
    fprintf(yyout,"\tR1=%c(0x%x);\t\t//Load value left term\n", 
                getVarMemLabel( r1->typeVariable ), r1->address);
  }

   fprintf(yyout,"\tR0=%c(0x%x);\t\t//Load value right term\n", 
                getVarMemLabel( r2->typeVariable ), r2->address);

   fprintf(yyout,"\tR0=R1%cR0;\t\t//Add terms\n", op);
}

void generateCodeRelation( FILE* yyout, qMachine *Q, registerStruct *r1, 
                           registerStruct *r2, char op[] )
{
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Relation evaluation\n");

  // Save R1
  fprintf(yyout,"\tR3=R1;\t\t\t//Save R1 (should use heap)\n"); 

  fprintf(yyout,"\tR1=%c(0x%x);\t\t//Load value left side\n", 
                getVarMemLabel( r1->typeVariable ), r1->address); 
  fprintf(yyout,"\tR2=%c(0x%x);\t\t//Load value right side\n", 
                getVarMemLabel( r2->typeVariable ), r2->address);  

  fprintf(yyout,"\tR0=1;\t\t\t//True\n");
  //IF (R0 < 10) GT(1);
  fprintf(yyout,"\tIF(R1 %s R2) GT(%d);\t//Jump if true\n", op, Q->nextLabel);
  fprintf(yyout,"\tR0=0;\t\t\t//False\n");

  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

  fprintf(yyout,"\tR1=R3;\t\t\t//Recover R1 (should use heap)\n");
}

void generateCodeLogical( FILE* yyout, qMachine *Q, char op){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\tR0=R0 %c R1;\t", op );
  if(op=='*'){
    fprintf(yyout,"// and generated\n" );
  }else{
    fprintf(yyout,"// or generated\n" );
  }

  //Free R1  
}

int generateCodeOpenWhile( FILE* yyout, qMachine *Q ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Open while loop -> L:%d\n", Q->nextLabel);
  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

  // Reserving exit label and returning it
  return Q->nextLabel++;
}

void generateCodeEvaluateWhile( FILE* yyout, qMachine *Q, int outLabel ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Evaluate while loop -> L:%d\n", outLabel-1 );
  
  // R0 contains the result of the expression
  fprintf(yyout,"\tIF(R0 == 0) GT(%d);\t//Jump if 0\n", outLabel);
}

void generateCodeCloseWhile( FILE* yyout, qMachine *Q, int outLabel ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }
  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Close while loop -> L:%d\n", outLabel-1 );
  fprintf(yyout,"\tGT(%d);\t\t\t//Evaluate loop again\n", outLabel-1);
  fprintf(yyout,"L %d:\t\t\t\t//Exit while loop\n", outLabel);
}

void generateCodeEvaluateIf( FILE* yyout, qMachine *Q, int outLabel ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Evaluate if block \n" );
  
  // R0 contains the result of the expression
  fprintf(yyout,"\tIF(R0 == 0) GT(%d);\t//Jump if 0\n", outLabel);
}

void generateCodeNextIf( FILE* yyout, qMachine *Q, int outLabel ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Close if block \n");
  fprintf(yyout,"L %d:\t\t\t\t\n", outLabel);
}

/******************************
  Q machine management methods 
******************************/

char getVarMemLabel( variableType vT ){
  switch(vT){
    case Integer:
    case Bool:
      return 'I';
      break;
    case Character:
      return 'U';
      break;
    case Real:
      return 'D';
      break;
    default:
      return -2;
  }
}

int getVarStaticAddress( qMachine *Q, registerStruct *r ){

  if(r->typeSymbol != Variable && r->typeSymbol != Literal ) return -1;

  switch( r->typeVariable ){
    case Integer:
    case Bool:
      r->size = 4;
      break;
    case Character:
      r->size = 1;
      break;
    case Real:
      r->size = 8;
      break;
    default:
      return -2;
  }
  Q->Ztop = Q->Ztop - r->size;
  r->address = Q->Ztop;

  return 0;
}
