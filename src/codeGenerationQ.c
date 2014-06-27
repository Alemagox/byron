#include "codeGenerationQ.h"

#ifndef ZVALUE
#define ZVALUE 0x00012000   // base+1. Static area (72 KB max)
#endif

#ifndef HVALUE
#define HVALUE 0x00024000   // base+1. Heap area heap (72 KB máx). It must be H>>Z
#endif


/**************************
   Initialization methods
**************************/
void qMachineInit( qMachine Q ){
  int i;

  // Set bases for static and heap areas.
  Q.Z = ZVALUE;
  Q.H = HVALUE;

  // Set as free integer registers from R0 to R5
  for(i=0;i<6;i++){
    Q.R[i] = 0;
  }
  // Registers R6 and R7 are reserved for the machine
  Q.R[6] = 1;
  Q.R[7] = 1;

  // Set as free double registers from RR0 to RR3
  for(i=0;i<4;i++){
    Q.RR[i] = 0;
  }

  // next label to use is 1
  Q.nextLabel 	= 1;
  Q.codeNumber 	= 0;
}

/**************************
  Code generation methods 
**************************/

void generateCodeStart( FILE* yyout ){
	//IQ.o  IQ-v3.7.2-32bits.o
	fprintf(yyout,"#include \"Q-v3.7.3/Q.h\"\n\n");
	fprintf(yyout,"BEGIN\t\t\t\t//Empieza\n");
}

void generateCodeEnd( FILE* yyout ){
	fprintf(yyout,"\tGT(-2);\t\t\t//Termina\n");
	fprintf(yyout,"END\n");	
}