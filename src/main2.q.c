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
	// Start procedure Error 
L 1:				
	R6=R7;				//New base
	R7=R7-0;			//Reserve space for local variables
STAT(1)			
	STR(0x11fdf, "Character is: ");			
CODE(1)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=2;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fdf;			//String literal address
	GT(putfs_);			//Print string literal
L 2:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'ci', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=3;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+0);			//Local variable value
	GT(putfi_);			//Print variable
L 3:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'ci', scope 1
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7+0);			//Recover base
	R7=R7-4;			//Save space for register R5
	I(R7)=R5;			//R5 saved
	R5=P(R7+4);			//Get return label
	GT(R5);				//Return!
	// End procedure Error 
	//////////////////////////////////
STAT(2)			
	DAT(0x11fdb,I,0);	//Var 'i', scope 0 
	DAT(0x11fd7,I,0);	//Var 'i2', scope 0 
	DAT(0x11fd6,U,0);	//Var 'c', scope 0 
CODE(2)
L 0:
	R6=R7;			//Initialize R6
STAT(3)			
	STR(0x11fcc, "Result = ");			
CODE(3)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=4;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fcc;			//String literal address
	GT(putfs_);			//Print string literal
L 4:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
STAT(4)			
	DAT(0x11fc8,I,4);	//Literal '4', scope 0 
CODE(4)			
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=I(0x11fc8);		//Load value right side
	I(0x11fdb)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Print variable 'i', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=5;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11fdb);		//Static variable value
	GT(putfi_);			//Print variable
L 5:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'i', scope 0
	//////////////////////////////////
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
