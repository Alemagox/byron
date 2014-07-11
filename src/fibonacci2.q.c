#include "Q.h"

BEGIN				//Start
STAT(0)			
	STR(0x11ffd,"%s");	//Format Put string 
	STR(0x11ffa,"%d");	//Format Put integer
	STR(0x11ff7,"%c");	//Format Put char
	STR(0x11ff4,"%d");	//Format Get integer
	STR(0x11ff1,"%c");	//Format Get char
	STR(0x11fee,"\n");	//Format New_Line
CODE(0)			
	//////////////////////////////////
	// Start procedure Fibonacci 
L 1:				
	R6=R7;				//New base
	R7=R7-12;			//Reserve space for local variables
	//////////////////////////////////
	// Open if block 0. Exit Label is: 2
STAT(1)			
	DAT(0x11fea,I,0);	//Literal '0', scope 1 
CODE(1)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=I(0x11fea);		//Load value right expression result
	//Get R1
	R1=I(R6+8);		//Load value left expression result
	IF(R1==R0) GT(3);	//Jump if true
	R0=0;			//Set as False
	GT(4);	//Jump to end
L 3:				
	R0=1;			//Set as True
L 4:				
	// End of evaluation
	//Free R1
STAT(2)			
	DAT(0x11fe6,I,1);	//Literal '1', scope 1 
CODE(2)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=I(0x11fe6);		//Load value right expression result
	//Get R2
	R2=I(R6+8);		//Load value left expression result
	IF(R2==R1) GT(5);	//Jump if true
	R1=0;			//Set as False
	GT(6);	//Jump to end
L 5:				
	R1=1;			//Set as True
L 6:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(7);	//Jump if 0
STAT(3)			
	DAT(0x11fe2,I,1);	//Literal '1', scope 1 
CODE(3)			
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(0x11fe2);		//Load value right side (static)
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	GT(2);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 7:				
	//////////////////////////////////
	// Open else block 
STAT(4)			
	DAT(0x11fde,I,1);	//Literal '1', scope 1 
CODE(4)			
	//////////////////////////////////
	// Add terms
	//Get R0
	R0=I(0x11fde);		//Load value right term
	//Get R1
	R1=I(R6+8);		//Load value left term
	R0=R1-R0;		//Add terms
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'aux', scope 1
	I(R6-12)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Start procedure call Fibonacci 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=I(R6-12);		//Load variable 'aux' value
	//Free R0
	I(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=8;			//Save return label
	GT(1);				//Jump to subprogram Fibonacci
L 8:				
	R6=P(R7+4);			//Recover active base
	//No need to get value parameter 1. n is of in type. 0 address
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(R6-4)=R0;		//Save variable 'resultado1' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call Fibonacci 
	//////////////////////////////////
STAT(5)			
	DAT(0x11fda,I,2);	//Literal '2', scope 1 
CODE(5)			
	//////////////////////////////////
	// Add terms
	//Get R0
	R0=I(0x11fda);		//Load value right term
	//Get R1
	R1=I(R6+8);		//Load value left term
	R0=R1-R0;		//Add terms
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'aux', scope 1
	I(R6-12)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Start procedure call Fibonacci 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=I(R6-12);		//Load variable 'aux' value
	//Free R0
	I(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=9;			//Save return label
	GT(1);				//Jump to subprogram Fibonacci
L 9:				
	R6=P(R7+4);			//Recover active base
	//No need to get value parameter 1. n is of in type. 0 address
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(R6-8)=R0;		//Save variable 'resultado2' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call Fibonacci 
	//////////////////////////////////
	//////////////////////////////////
	// Add terms
	//Get R0
	R0=I(R6-8);		//Load value right term
	//Get R1
	R1=I(R6-4);		//Load value left term
	R0=R1+R0;		//Add terms
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
L 2:				
	// Close if statement 0
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Fibonacci 
	//////////////////////////////////
STAT(6)			
	DAT(0x11fd6,I,0);	//Var 'n', scope 0 
	DAT(0x11fd2,I,0);	//Var 'res', scope 0 
CODE(6)
L 0:
	R6=R7;			//Initialize R6
STAT(7)			
	STR(0x11fa8, "Entra el numero de Fibonacci a calcular: ");			
CODE(7)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=10;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fa8;			//String literal address
	GT(putfs_);			//Print string literal
L 10:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'n', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=11;			//Return label
	R2=0x11fd6;		//Variable address
	R1=0x11ffa;		//Format int address
	GT(getfi_);		//Get variable
L 11:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'n', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Fibonacci 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=I(0x11fd6);		//Load variable 'n' value
	//Free R0
	I(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=12;			//Save return label
	GT(1);				//Jump to subprogram Fibonacci
L 12:				
	R6=P(R7+4);			//Recover active base
	//No need to get value parameter 1. n is of in type. 0 address
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(0x11fd2)=R0;		//Save variable 'res' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call Fibonacci 
	//////////////////////////////////
STAT(8)			
	STR(0x11f99, "Resultado es: ");			
CODE(8)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=13;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f99;			//String literal address
	GT(putfs_);			//Print string literal
L 13:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'res', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=14;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11fd2);		//Static variable value
	GT(putfi_);			//Print variable
L 14:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'res', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=15;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 15:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
