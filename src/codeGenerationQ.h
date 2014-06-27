#ifndef CODEGENERATIONQ_H_
#define CODEGENERATIONQ_H_

#include <stdio.h>

struct qMachine{
  int Z;
  int H;

  // R6 and R7 are reserved 
  int R[8];  //  = {0,0,0,0,0,0,1,1};
  int RR[4]; //= {0,0,0,0};

  int nextLabel;// = 0;
  int codeNumber;// = 0;
};
typedef struct qMachine qMachine;

/**************************
  Initialization methods
**************************/
void qMachineInit( qMachine Q);


/**************************
  Code generation methods 
**************************/

void generateCodeStart( FILE* yyout );

void generateCodeEnd( FILE* yyout );


#endif