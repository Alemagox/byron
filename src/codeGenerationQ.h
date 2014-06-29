#ifndef CODEGENERATIONQ_H_
#define CODEGENERATIONQ_H_

#include <stdio.h>
#include "symbolsTable.h"

struct qMachine{
  int Ztop;
  int Htop;

  // R6 and R7 are reserved 
  int R[8];  //  = {0,0,0,0,0,0,1,1};
  int RR[4]; //= {0,0,0,0};

  int nextLabel;// = 0;
  int nextCodeNumber;// = 0;

  char formatPutString[15];
  char formatPutInt[15];
  char formatPutChar[15];
  char formatGetInt[15];
  char formatGetChar[15];
  char formatNewLine[15];

  unsigned int formatPutStringAddress;
  unsigned int formatPutIntAddress;
  unsigned int formatPutCharAddress;
  unsigned int formatGetIntAddress;
  unsigned int formatGetCharAddress;
  unsigned int formatNewLineAddress;

  // When stat is 0, we are in a STAT block.
  // When stat is 1, we are in a CODE blocke
  int stat;  
};
typedef struct qMachine qMachine;

/**************************
  Initialization methods
**************************/
void qMachineInit( qMachine *Q );


/**************************
  Code generation methods 
**************************/

void generateCodeStart( FILE* yyout, qMachine *Q );

void generateCodeEnd( FILE* yyout );

void generateCodePutStringLiteral( FILE* yyout, qMachine *Q, char string[] );

void generateCodePutVariable( FILE* yyout, qMachine *Q, registerStruct *r );

void generateCodeNewLine( FILE* yyout, qMachine *Q );

void generateCodeGetVariable( FILE* yyout, qMachine *Q, registerStruct *r );

int generateCodeVarStatic( FILE* yyout, qMachine *Q, registerStruct *r );

/******************************
  Q machine management methods 
******************************/
char getVarMemLabel (variableType vT);

int getVarStaticAddress( qMachine *Q, registerStruct *r );

#endif