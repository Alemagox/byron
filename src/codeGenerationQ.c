#include "codeGenerationQ.h"
#include "Q-v3.7.3/Qlib.h"
#include "Q-v3.7.3/Q.h"
#include <string.h>

char addressString[50];

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

  Q->usedR = 0;
  Q->lastRstack = 0;

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
  if( Q->stat==1 ){
    fprintf(yyout,"STAT(%d)\t\t\t\n", Q->nextCodeNumber);
  }
  Q->Ztop = Q->Ztop - (strlen(string)+1-2);
  fprintf(yyout,"\tSTR(0x%x, %s);\t\t\t\n", Q->Ztop, string);
  fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);
  Q->stat=1;

  fprintf(yyout,"\t/////////////////////////\n");
  fprintf(yyout,"\t// Print string literal\n");
  
  // Save R0, R1 and R2
  pushRstack( yyout, 0 );
  pushRstack( yyout, 1 );
  pushRstack( yyout, 2 );

  // Print string!!!
  fprintf(yyout,"\tR0=%d;\t\t\t\t//Return label\n", Q->nextLabel);
  fprintf(yyout,"\tR1=0x%x;\t\t\t//Format string address\n", Q->formatPutStringAddress );
  fprintf(yyout,"\tR2=0x%x;\t\t\t//String literal address\n", Q->Ztop);
  fprintf(yyout,"\tGT(putfs_);\t\t\t//Print string literal\n" );

  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

  // Recover R0, R1 and R2
  popRstack( yyout, 2 );
  popRstack( yyout, 1 );
  popRstack( yyout, 0 );

  fprintf(yyout,"\t// End of Print string literal\n");
  fprintf(yyout,"\t//////////////////////////////////\n");
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
  // Save R0, R1 and R2
  pushRstack( yyout, 0 );
  pushRstack( yyout, 1 );
  pushRstack( yyout, 2 );

  // Print variable!!!
  fprintf(yyout,"\tR0=%d;\t\t\t\t//Return label\n", Q->nextLabel);
  if( r->typeVariable == Character ){
    fprintf(yyout,"\tR1=0x%x;\t\t\t//Format char address\n", Q->formatPutCharAddress );
  }else{
    fprintf(yyout,"\tR1=0x%x;\t\t\t//Format int address\n", Q->formatPutIntAddress );
  }

  getMemAddress( r, addressString );
  fprintf(yyout,"\tR2=%c(%s);\t\t//Static variable value\n", 
                getVarMemLabel( r->typeVariable ), addressString);

  fprintf(yyout,"\tGT(putfi_);\t\t\t//Print variable\n" );


  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);
  // Recover R0, R1 and R2
  // Save R0, R1 and R2
  popRstack( yyout, 2 );
  popRstack( yyout, 1 );
  popRstack( yyout, 0 );

  fprintf(yyout,"\t// End of Print variable '%s', scope %d\n",
          r->key.id, r->key.scope
         );
  fprintf(yyout,"\t//////////////////////////////////\n");
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

  // Recover R0, R1
  pushRstack( yyout, 0 );
  pushRstack( yyout, 1 );

  // Print variable!!!
  fprintf(yyout,"\tR0=%d;\t\t\t\t//Return label\n", Q->nextLabel);
  fprintf(yyout,"\tR1=0x%x;\t\t\t//Format New_Line address\n", Q->formatNewLineAddress );
  fprintf(yyout,"\tGT(putnl_);\t\t\t//Print variable\n" );


  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

  // Recover R0, R1
  popRstack( yyout, 1 );
  popRstack( yyout, 0 );

  fprintf(yyout,"\t// End of New_Line\n");
  fprintf(yyout,"\t//////////////////////////////////\n");
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

  // Save R0, R1 and R2
  pushRstack( yyout, 0 );
  pushRstack( yyout, 1 );
  pushRstack( yyout, 2 );

  // Print variable!!!
  fprintf(yyout,"\tR0=%d;\t\t\t//Return label\n", Q->nextLabel);

  getMemAddress( r, addressString );
  fprintf(yyout,"\tR2=%s;\t\t//Variable address\n", addressString);

  if( r->typeVariable == Character ){
    fprintf(yyout,"\tR1=0x%x;\t\t//Format char address\n", Q->formatPutCharAddress );
    fprintf(yyout,"\tGT(getfc_);\t\t//Get variable\n" );
  }else{
    fprintf(yyout,"\tR1=0x%x;\t\t//Format int address\n", Q->formatPutIntAddress );
    fprintf(yyout,"\tGT(getfi_);\t\t//Get variable\n" );
  }

  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

  // Recover R0, R1 and R2
  popRstack( yyout, 2 );
  popRstack( yyout, 1 );
  popRstack( yyout, 0 );

  fprintf(yyout,"\t// End of Get variable '%s', scope %d\n",
          r->key.id, r->key.scope
         );
  fprintf(yyout,"\t//////////////////////////////////\n");
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

  if( r2->typeSymbol != Auxiliar ){ // When it's auxiliar , expression value is already in las register used

    getMemAddress( r2, addressString );
    fprintf(yyout,"\tR%d=%c(%s);\t\t//Load value right side (static)\n", 
                   newRegister( yyout, Q ), getVarMemLabel( r2->typeVariable ), addressString);
  }

  getMemAddress( r1, addressString );
  fprintf(yyout,"\t%c(%s)=R%d;\t\t//Save value right side into variable\n", 
                getVarMemLabel( r1->typeVariable ), addressString, modReg(lastRegister( Q )-1));

  popRegister( yyout, Q ); // Free assigned register
}

void generateCodeMultiply( FILE* yyout, qMachine *Q, registerStruct *r1,
                             registerStruct *r2, char op ){
  int leftR, rightR;

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Multilply factors\n");

  if( r2->typeSymbol != Auxiliar ){ // When it's auxiliar, expression value is already in R0
    rightR = newRegister( yyout, Q );

    getMemAddress( r2, addressString );
    fprintf(yyout,"\tR%d=%c(%s);\t\t//Load value right factor\n",
                rightR, getVarMemLabel( r2->typeVariable ), addressString );
  }else{
    rightR = modReg(lastRegister( Q )-1);
    fprintf(yyout,"\t//Right factor already in R%d\n", rightR );
  }

  if( r1->typeSymbol != Auxiliar ){ // When it's auxiliar, expression value is already in R0
    leftR = newRegister( yyout,  Q );

    getMemAddress( r1, addressString );
    fprintf(yyout,"\tR%d=%c(%s);\t\t//Load value left factor\n", 
                    leftR, getVarMemLabel( r1->typeVariable ), addressString);
  }else{
    leftR = modReg(lastRegister( Q )-2); // Register was saved in the prev to previous to last
    fprintf(yyout,"\t//Left factor already in R%d\n", leftR );
  }

  fprintf(yyout,"\tR%d=R%d%cR%d;\t\t//Multiply factors\n", leftR<rightR?leftR:rightR, 
                leftR, op, rightR);

  popRegister( yyout, Q ); // We free the greater register
}

void generateCodeAddition( FILE* yyout, qMachine *Q, registerStruct *r1,
                             registerStruct *r2, char op ){
  int leftR, rightR;

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Add terms\n");

  if( r2->typeSymbol != Auxiliar ){ // When it's auxiliar, expression value is already in R0
    rightR = newRegister( yyout, Q );

    getMemAddress( r2, addressString );
    fprintf(yyout,"\tR%d=%c(%s);\t\t//Load value right term\n",
                rightR, getVarMemLabel( r2->typeVariable ), addressString );

  }else{
    rightR = modReg(lastRegister( Q )-1);
    fprintf(yyout,"\t//Right factor already in R%d\n", rightR );
  }

  

  if( r1->typeSymbol != Auxiliar ){ // When it's auxiliar, expression value is already in R0
    leftR = newRegister( yyout, Q );

    getMemAddress( r1, addressString );
    fprintf(yyout,"\tR%d=%c(%s);\t\t//Load value left term\n", 
                    leftR, getVarMemLabel( r1->typeVariable ), addressString);

  }else{
    leftR = modReg(lastRegister( Q )-2); // Register was saved in the prev to previous to last
    fprintf(yyout,"\t//Left term already in R%d\n", leftR );
  }


  fprintf(yyout,"\tR%d=R%d%cR%d;\t\t//Add terms\n", leftR<rightR?leftR:rightR, 
                leftR, op, rightR);

  popRegister( yyout, Q ); // We free the greater register
}

void generateCodeRelation( FILE* yyout, qMachine *Q, registerStruct *r1, 
                           registerStruct *r2, char op[] )
{
  int leftR, rightR, resultR;

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Relation evaluation\n");

 
  if( r2->typeSymbol != Auxiliar ){ // When it's auxiliar, expression value is already in R0
    rightR = newRegister( yyout, Q );

    getMemAddress( r2, addressString );
    fprintf(yyout,"\tR%d=%c(%s);\t\t//Load value right expression result\n",
                  rightR, getVarMemLabel( r2->typeVariable ), addressString);

  }else{
    rightR = modReg(lastRegister( Q )-1);
    fprintf(yyout,"\t//Right expression result already in R%d\n", rightR );
  }

  if( r1->typeSymbol != Auxiliar ){ // When it's auxiliar, expression value is already in R0
    leftR = newRegister( yyout, Q );

    getMemAddress( r1, addressString );
    fprintf(yyout,"\tR%d=%c(%s);\t\t//Load value left expression result\n",
                  leftR, getVarMemLabel( r1->typeVariable ), addressString);
  }else{
    leftR = modReg(lastRegister( Q )-2); // Register was saved in the prev to previous to last
    fprintf(yyout,"\t//Left expression result already in R%d\n", leftR );
  }

  
  //IF (R0 < 10) GT(1);
  resultR = modReg(lastRegister( Q )-2);
  fprintf(yyout,"\tIF(R%d%sR%d) GT(%d);\t//Jump if true\n", 
               leftR, op, rightR, Q->nextLabel);
  fprintf(yyout,"\tR%d=0;\t\t\t//Set as False\n", resultR /*leftR<rightR?leftR:rightR*/);
  fprintf(yyout,"\tGT(%d);\t//Jump to end\n", Q->nextLabel+1);

  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);
  fprintf(yyout,"\tR%d=1;\t\t\t//Set as True\n",  resultR);

  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);
  fprintf(yyout,"\t// End of evaluation\n");

  popRegister( yyout, Q ); // We free the latest register

}

void generateCodeLogical( FILE* yyout, qMachine *Q, registerStruct *r1, 
                          registerStruct *r2, char op){
  int leftR, rightR;

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  if( r2->typeSymbol != Auxiliar ){ // When it's auxiliar, expression value is already in R0
    rightR = newRegister( yyout, Q );

    getMemAddress( r2, addressString );
    fprintf(yyout,"\tR%d=%c(%s);\t\t//Load value right boolean\n",
                rightR, 
                getVarMemLabel( r2->typeVariable ), addressString);
  }else{
    rightR = modReg(lastRegister( Q )-1);
    fprintf(yyout,"\t//Right boolean already in R%d\n", rightR );
  }

  if( r1->typeSymbol != Auxiliar ){ // When it's auxiliar, expression value is already in R0
    leftR = newRegister( yyout, Q );

    getMemAddress( r1, addressString );
    fprintf(yyout,"\tR%d=%c(%s);\t\t//Load value left boolean\n", 
                    leftR,
                    getVarMemLabel( r1->typeVariable ), addressString);
  }else{
    leftR = modReg(lastRegister( Q )-2); // Register was saved in the prev to previous to last
    fprintf(yyout,"\t//Left boolean already in R%d\n", leftR );
  }


  fprintf(yyout,"\tR%d=R%d%cR%d;\t\t//Evaluate expressions\n", leftR<rightR?leftR:rightR, 
                leftR, op, rightR);

  popRegister( yyout, Q ); // We free the greater register 
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
  
  // Rlast contains the result of the expression
  //popRegister( yyout, Q );
  popRegister( yyout, Q );
  fprintf(yyout,"\tIF(R%d==0) GT(%d);\t//Jump if 0\n", modReg(lastRegister( Q )), outLabel);
}

void generateCodeCloseWhile( FILE* yyout, qMachine *Q, int outLabel ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }
  
  fprintf(yyout,"\tGT(%d);\t\t\t//Evaluate loop again\n", outLabel-1);
  fprintf(yyout,"\t// Close while loop -> L:%d\n", outLabel-1 );
  fprintf(yyout,"\t//////////////////////////////////\n");
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
  popRegister( yyout, Q ); 
  fprintf(yyout,"\tIF(R%d==0) GT(%d);\t//Jump if 0\n", modReg(lastRegister( Q )),  outLabel);

}

void generateCodeNextIf( FILE* yyout, qMachine *Q, int outIfLabel, int nextElseLabel ){
  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  //popRegister( yyout, Q );
  //popRegister( yyout, Q );  
  fprintf(yyout,"\tGT(%d);// Jump out of if statement \n", outIfLabel);
  fprintf(yyout,"\t// Close if block \n");
  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"L %d:\t\t\t\t\n", nextElseLabel);
}

void generateCodeBeginSubprogram( FILE* yyout, qMachine *Q, char pName[] ){
    // When stat is 0, we are in a STAT block.
    // When stat is 1, we are in a CODE blocke
    if( Q->stat==0 ){
      fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

      Q->stat=1;
    }

    fprintf(yyout,"\t//////////////////////////////////\n");
    fprintf(yyout,"\t// Start procedure %s \n", pName);
    fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);
}

void generateCodeSubprogramBase( FILE* yyout,  registerStruct *r ){

  fprintf(yyout,"\tR6=R7;\t\t\t\t//New base\n");
  fprintf(yyout,"\tR7=R7-%d;\t\t\t//Reserve space for local variables\n", r->sizeLocals);
}

void generateCodeEndSubprogram( FILE* yyout, qMachine *Q, registerStruct *r ){
    // When stat is 0, we are in a STAT block.
    // When stat is 1, we are in a CODE blocke
    if( Q->stat==0 ){
      fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

      Q->stat=1;
    }

    fprintf(yyout,"\tR7=R6;\t\t\t\t//Free local variables\n");
    //fprintf(yyout,"\tR6=P(R7+4);\t\t\t//Recover base\n");

    //pushRstack( yyout, 5 );
    //fprintf(yyout,"\tR5=P(R7+4);\t\t\t//Get return label\n" );

    //fprintf(yyout,"\tR6=P(R7+4);\t\t\t//Recover active base\n");

    fprintf(yyout,"\tR6=P(R7);\t\t\t//Get return label\n" );
    fprintf(yyout,"\tGT(R6);\t\t\t\t//Return!\n" );

    fprintf(yyout,"\t// End procedure %s \n", r->key.id);
    fprintf(yyout,"\t//////////////////////////////////\n");
}

void generateCodeProcedureCall( FILE* yyout, qMachine *Q, symbolsTable *sT, registerStruct *r, registerStruct *parametersCalled ){

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  if( Q->stat==0 ){
    fprintf(yyout,"CODE(%d)\t\t\t\n", Q->nextCodeNumber++);

    Q->stat=1;
  }

  fprintf(yyout,"\t//////////////////////////////////\n");
  fprintf(yyout,"\t// Start procedure call %s \n", r->key.id);

  fprintf(yyout,"\tR7=R7-%d;\t\t\t//Reserve params space\n", r->sizeParams+8);

  registerStruct *iterator, *formalParam, *regVar;
  int reg, counter = 1;
  
  ////////////////////////////////////////////////////////////////////////////////
  // Copy value of input parameters
  formalParam=r->registerList;
  for ( iterator=parametersCalled; iterator != NULL; 
        iterator=iterator->hh.next )
  {
  
    if(formalParam->typeSymbol==InOut || formalParam->typeSymbol==In){
      reg=newRegister( yyout, Q );
      printf("new register: %d\n", reg);
      regVar=getSymbol(  sT, iterator->key.id, iterator->key.scope );

      getMemAddress( regVar, addressString );
      fprintf(yyout,"\tR%d=%c(%s);\t\t//Load variable '%s' value\n", reg,
                    getVarMemLabel( regVar->typeVariable ), addressString, regVar->key.id);
    
      popRegister( yyout, Q );

      fprintf(yyout,"\t%c(R7+%d)=R%d;\t\t\t//Pass value parameter %d\n", 
                    getVarMemLabel( formalParam->typeVariable ), 
                    formalParam->stackAddress+8, reg, counter );
    }else{
      fprintf(yyout,"\t//No need to pass value parameter %d. %s is of out type. %d address\n", 
                    counter, formalParam->key.id, formalParam->stackAddress);
    }

    counter++;
    formalParam=formalParam->hh.next;
  }

  fprintf(yyout,"\tP(R7+4)=R6;\t\t\t//Save active base\n");
  fprintf(yyout,"\tP(R7)=%d;\t\t\t//Save return label\n", Q->nextLabel);
  fprintf(yyout,"\tGT(%d);\t\t\t\t//Jump to subprogram %s\n", r->label, r->key.id);

  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);
  //popRstack( yyout, 5 ); // Free return register
  
  fprintf(yyout,"\tR6=P(R7+4);\t\t\t//Recover active base\n");

  //////////////////////////////////////////////77
  // Copy value of outputput parameters
  counter=1;
  formalParam=r->registerList;
  for ( iterator=parametersCalled; iterator != NULL; 
        iterator=iterator->hh.next )
  {
    if(formalParam->typeSymbol==InOut || formalParam->typeSymbol==Out){
      reg=newRegister( yyout, Q );
      regVar=getSymbol(  sT, iterator->key.id, iterator->key.scope );

      fprintf(yyout,"\tR%d=%c(R7+%d);\t\t\t//Get value parameter %d\n", 
                    reg, getVarMemLabel( formalParam->typeVariable ), 
                    formalParam->stackAddress+8,  counter );

      getMemAddress( regVar, addressString );
      fprintf(yyout,"\t%c(%s)=R%d;\t\t//Save variable '%s' value\n",
                    getVarMemLabel( regVar->typeVariable ), addressString, reg, regVar->key.id);
      
      popRegister( yyout, Q );

      
    }else{
      fprintf(yyout,"\t//No need to get value parameter %d. %s is of in type. %d address\n", 
                    counter, formalParam->key.id, formalParam->stackAddress);
    }

    counter++;
    formalParam=formalParam->hh.next;
  }


  fprintf(yyout,"\tR7=R7+%d;\t\t\t//Free params space\n", r->sizeParams+8);

  fprintf(yyout,"\t// End procedure call %s \n", r->key.id);
  fprintf(yyout,"\t//////////////////////////////////\n");
  
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
      //return 'I';
      break;
    case Real:
      return 'D';
      break;
    default:
      return -2;
  }
}

int getSize( registerStruct *r ){
  if(r->typeSymbol != Variable && r->typeSymbol != Literal && 
     r->typeSymbol != In && r->typeSymbol != InOut &&
     r->typeSymbol != Out) return -1;

  switch( r->typeVariable ){
    case Integer:
    case Bool:
      r->size = 4;
      break;
    case Character:
      r->size = 4;
      break;
    case Real:
      r->size = 8;
      break;
    default:
      return -2;
  }

  return r->size;
}

int getVarStaticAddress( qMachine *Q, registerStruct *r ){

  int size=getSize( r );
  if(size < 0){
    return size;
  }

  Q->Ztop = Q->Ztop - r->size;
  r->address = Q->Ztop;

  return 0;
}

int setParamsStackAddress( qMachine *Q, registerStruct **parent ){

  registerStruct *iterator;
  int size;

  for ( iterator=(*parent)->registerList; iterator != NULL; 
        iterator=iterator->hh.next )
  {
    size=getSize( iterator );

    if(size < 0){
      return size;
    }

    iterator->stackAddress=(*parent)->sizeParams;

    (*parent)->sizeParams+=iterator->size;
  }

  return 0;
}

int setVarStackAddress( qMachine *Q, registerStruct *r, registerStruct **parent ){

  registerStruct *aux = createRegister( r->key.id, r->key.scope,
                                     r->typeSymbol, r->typeVariable );

  int size=getSize( aux );
  if(size < 0){
    return size;
  }
  getSize( r ); 
  
  r->stackAddress=(*parent)->sizeLocals;

  printf("var %s stack address %d\n", r->key.id, r->stackAddress);

  aux->stackAddress=(*parent)->sizeLocals;

  (*parent)->nLocals++;
  (*parent)->sizeLocals+=aux->size;

  addRegisterToList( &((*parent)->registerListLocals), 
                     aux
                    );
  return 0;
}


int lastRegister( qMachine *Q ){
  return Q->lastRstack;
}

int newRegister( FILE* yyout, qMachine *Q ){
  int r=Q->lastRstack++;

  fprintf(yyout,"\t//Get R%d\n", r);
  Q->lastRstack=Q->lastRstack%6;
  if(Q->R[r] > 0){ //Rr is already in use
    pushRstack( yyout, r );
  }
  Q->R[r]++;

  return r;
}

int popRegister( FILE* yyout, qMachine *Q ){
  int r=--Q->lastRstack;

  if(r<0){
    r = 5;
    Q->lastRstack = 5;
  }
  fprintf(yyout,"\t//Free R%d\n", r);
  if(Q->R[r] > 1){ //Rr was in used before 
    popRstack( yyout, r );
  }
  Q->R[r]--;

  return r;
}

int pushRstack( FILE* yyout, int r ){
  fprintf(yyout,"\tR7=R7-4;\t\t\t//Save space for register R%d\n", r);
  fprintf(yyout,"\tI(R7)=R%d;\t\t\t//R%d saved\n", r, r);

  return 0;
}

int popRstack( FILE* yyout, int r ){

  fprintf(yyout,"\tR%d=I(R7);\t\t\t//R%d recovered\n", r, r);
  fprintf(yyout,"\tR7=R7+4;\t\t\t//Free space for register R%d\n", r);

  return 0;
}

int modReg( int reg ){

  int resultMod=reg%6;

  if(resultMod<0){
    resultMod=6+resultMod;
  }

  printf("resultMod says %d\n", resultMod);

  return resultMod;
}

int getMemAddress( registerStruct *r, char addressString[] ){
  if(r->key.scope==0 || r->typeSymbol==Literal ){
    sprintf(addressString,"0x%x", r->address);
  }else{
    if( r->typeSymbol==In || 
        r->typeSymbol==InOut ||
        r->typeSymbol==Out ){
      sprintf(addressString,"R6+%d", r->stackAddress+8);
    }else{
      sprintf(addressString,"R6-%d", r->stackAddress+4);
    }
  }

  return 0;
}