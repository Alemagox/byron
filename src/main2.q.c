#include "Q.h"

BEGIN				//Start
STAT(0)			
	STR(0x11ffd,"%s");	//Format Put string 
	STR(0x11ffa,"%d");	//Format Put integer
	STR(0x11ff7,"%c");	//Format Put char
	STR(0x11ff4,"%d");	//Format Get integer
	STR(0x11ff1,"%c");	//Format Get char
	STR(0x11fee,"\n");	//Format New_Line
	DAT(0x11fea,I,0);	//Var 'i', scope 0 
	DAT(0x11fe9,U,0);	//Var 'c', scope 0 
CODE(0)
L 0:
STAT(1)			
	DAT(0x11fe5,I,1);	//Literal '1', scope 0 
	DAT(0x11fe1,I,4);	//Literal '4', scope 0 
CODE(1)			
	//////////////////////////////////
	// Relation evaluation
	R0=I(0x11fe1);		//Load value right expression result
	R1=I(0x11fe5);		//Load value left expression result
	IF(R1>R0) GT(1);	//Jump if true
	R0=0;			//Set as False
	GT(2);	//Jump to end
L 1:				
	R0=1;			//Set as True
L 2:				
	// End of evaluation
STAT(2)			
	DAT(0x11fdd,I,2);	//Literal '2', scope 0 
	DAT(0x11fd9,I,3);	//Literal '3', scope 0 
CODE(2)			
	//////////////////////////////////
	// Relation evaluation
	R1=I(0x11fd9);		//Load value right expression result
	R2=I(0x11fdd);		//Load value left expression result
	IF(R2<R1) GT(3);	//Jump if true
	R1=0;			//Set as False
	GT(4);	//Jump to end
L 3:				
	R1=1;			//Set as True
L 4:				
	// End of evaluation
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
STAT(3)			
	DAT(0x11fd5,I,1);	//Literal '1', scope 0 
	DAT(0x11fd1,I,4);	//Literal '4', scope 0 
CODE(3)			
	//////////////////////////////////
	// Relation evaluation
	R1=I(0x11fd1);		//Load value right expression result
	R2=I(0x11fd5);		//Load value left expression result
	IF(R2>R1) GT(5);	//Jump if true
	R1=0;			//Set as False
	GT(6);	//Jump to end
L 5:				
	R1=1;			//Set as True
L 6:				
	// End of evaluation
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0*R1;		//Evaluate expressions
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	I(0x11fea)=R0;		//Save value right side into variable
STAT(4)			
	STR(0x11fc7, "Result = ");			
CODE(4)			
	/////////////////////////
	// Print string literal
	R0=7;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11fc7;			//String literal address
	GT(putfs_);		//Print string literal
L 7:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=8;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 8:				
	// End of Print variable 'i', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=9;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 9:				
	// End of New_Line
	//////////////////////////////////
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
