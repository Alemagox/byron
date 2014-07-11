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
	// Start procedure B 
L 1:				
	R6=R7;				//New base
	R7=R7-8;			//Reserve space for local variables
STAT(1)			
	STR(0x11fde, "This is B -> c:");			
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
	R2=0x11fde;			//String literal address
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
	// Print variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=3;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 3:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=4;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 4:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(2)			
	DAT(0x11fda,U,'b');	//Literal ''b'', scope 1 
CODE(2)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 1
	//Get R0
	R0=U(0x11fda);		//Load value right side (static)
	U(R6+8)=R0;		//Save value right side into variable
	//Free R0
STAT(3)			
	STR(0x11fca, "This is B -> c:");			
CODE(3)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=5;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fca;			//String literal address
	GT(putfs_);			//Print string literal
L 5:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=6;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 6:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=7;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 7:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure B 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure A 
L 8:				
	R6=R7;				//New base
	R7=R7-8;			//Reserve space for local variables
STAT(4)			
	STR(0x11fba, "This is A -> c:");			
CODE(4)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=9;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fba;			//String literal address
	GT(putfs_);			//Print string literal
L 9:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=10;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 10:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=11;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 11:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(5)			
	DAT(0x11fb6,U,'a');	//Literal ''a'', scope 1 
CODE(5)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 1
	//Get R0
	R0=U(0x11fb6);		//Load value right side (static)
	U(R6+8)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Start procedure call B 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=12;			//Save return label
	GT(1);				//Jump to subprogram B
L 12:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(R6+8)=R0;		//Save variable 'c' value
	//Free R0
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(R6+12)=R0;		//Save variable 'resultado' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call B 
	//////////////////////////////////
STAT(6)			
	STR(0x11fa6, "This is A -> c:");			
CODE(6)			
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
	R2=0x11fa6;			//String literal address
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
	// Print variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=14;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 14:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
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
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure A 
	//////////////////////////////////
STAT(7)			
	DAT(0x11fa2,U,0);	//Var 'c', scope 0 
	DAT(0x11f9e,U,0);	//Var 'n', scope 0 
	DAT(0x11f9a,I,0);	//Var 'res', scope 0 
CODE(7)
L 0:
	R6=R7;			//Initialize R6
STAT(8)			
	DAT(0x11f96,U,'e');	//Literal ''e'', scope 0 
CODE(8)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R0
	R0=U(0x11f96);		//Load value right side (static)
	U(0x11fa2)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Start procedure call A 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=U(0x11fa2);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=16;			//Save return label
	GT(8);				//Jump to subprogram A
L 16:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(0x11fa2)=R0;		//Save variable 'c' value
	//Free R0
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(0x11f9a)=R0;		//Save variable 'res' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call A 
	//////////////////////////////////
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
