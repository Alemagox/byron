#include "codeGenerationQ.h"
#include "Q-v3.7.3/Qlib.h"
#include <string.h>

#ifndef ZVALUE
#define ZVALUE 0x00012000   // base+1. Static area (72 KB max)
#endif

#ifndef HVALUE
#define HVALUE 0x00024000   // base+1. Heap area heap (72 KB máx). It must be H>>Z
#endif


/**************************
   Initialization methods
**************************/
void qMachineInit( qMachine *Q ){
  int i;

  // Set bases for static and heap areas.
  Q->Z = ZVALUE;
  Q->H = HVALUE;

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
  Q->nextCodeNumber = 1;

  // Format strings
  Q->formatStringAddress  = 0x11ffc;
  Q->formatIntAddress     = 0x11ff8; 
}

/**************************
  Code generation methods 
**************************/

void generateCodeStart( FILE* yyout, qMachine Q ){
	//IQ.o  IQ-v3.7.2-32bits.o
	fprintf(yyout,"#include \"Q.h\"\n\n");
	fprintf(yyout,"BEGIN\t\t\t\t//Start\n");

  // Reserve static space for format strings
  fprintf(yyout,"STAT(0)\t\t\t\n");
  fprintf(yyout,"\tSTR(0x%x,\"%%s\\n\");\t//Format string for strings\n", 
          Q.formatStringAddress);
  fprintf(yyout,"\tSTR(0x%x,\"%%d\\n\");\t//Format string for integers\n",
          Q.formatIntAddress);
  // Start code
  fprintf(yyout,"CODE(0)\t\t\t\n");
}

void generateCodeEnd( FILE* yyout ){
	fprintf(yyout,"\tR0=0;\t\t\t//Succesful state\n");
	fprintf(yyout,"\tGT(-2);\t\t\t//Finish\n");
	fprintf(yyout,"END\n");	
}

void generateCodePutStringLiteral( FILE* yyout, qMachine *Q, char string[] ){
  int stringLength = strlen(string);
  int i;

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
  fprintf(yyout,"\tR1=0x%x;\t\t//Format string address\n", Q->formatStringAddress );
  fprintf(yyout,"\tGT(putf_);\t\t//Print string literal\n" );

  // Free heap
  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

  fprintf(yyout,"\tR0=%d;\t\t\t//Return label\n", Q->nextLabel);
  fprintf(yyout,"\tR1=-%i;\t\t\t//String length\n", stringLength-1 );
  fprintf(yyout,"\tGT(free_);\t\t//Free heap space for string literal\n" );
  
  fprintf(yyout,"L %d:\t\t\t\t\n", Q->nextLabel++);

}