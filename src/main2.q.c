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
	R2=U(R6+8);			//Local variable value wuuut : 0
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
	STR(0x11fbc, "Character out co doesn't display: ");			
CODE(2)			
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
	R2=0x11fbc;			//String literal address
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
	// Print variable 'co', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=6;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+9);			//Local variable value wuuut : 1
	GT(putfi_);			//Print variable
L 6:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'co', scope 1
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
STAT(3)			
	STR(0x11f98, "Character out co2 doesn't display: ");			
CODE(3)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=8;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f98;			//String literal address
	GT(putfs_);			//Print string literal
L 8:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'co2', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=9;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+10);			//Local variable value wuuut : 2
	GT(putfi_);			//Print variable
L 9:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'co2', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=10;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 10:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(4)			
	DAT(0x11f97,U,'z');	//Literal ''z'', scope 1 
CODE(4)			
	//////////////////////////////////
	// Assignment to variable 'co2', scope 1
	//Get R0
	R0=U(0x11f97);		//Load value right side (static)
	U(R6+10)=R0;		//Save value right side into variable (local)
	//Free R0
	R7=R6;				//Free local variables
	R6=P(R7+0);			//Recover base
	R7=R7-4;			//Save space for register R5
	I(R7)=R5;			//R5 saved
	R5=P(R7+4);			//Get return label
	GT(R5);				//Return!
	// End procedure Error 
	//////////////////////////////////
STAT(5)			
	DAT(0x11f93,I,0);	//Var 'i', scope 0 
	DAT(0x11f8f,I,0);	//Var 'i2', scope 0 
	DAT(0x11f8e,U,0);	//Var 'c', scope 0 
	DAT(0x11f8d,U,0);	//Var 'c2', scope 0 
	DAT(0x11f8c,U,0);	//Var 'c3', scope 0 
CODE(5)
L 0:
	R6=R7;			//Initialize R6
STAT(6)			
	STR(0x11f82, "Result = ");			
CODE(6)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=11;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f82;			//String literal address
	GT(putfs_);			//Print string literal
L 11:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
STAT(7)			
	DAT(0x11f7e,I,4);	//Literal '4', scope 0 
CODE(7)			
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	//Get R0
	R0=I(0x11f7e);		//Load value right side (static)
	I(0x11f93)=R0;		//Save value right side into variable (static)
	//Free R0
	//////////////////////////////////
	// Print variable 'i', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=12;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11f93);		//Static variable value
	GT(putfi_);			//Print variable
L 12:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'i', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=13;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 13:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(8)			
	DAT(0x11f7d,U,'9');	//Literal ''9'', scope 0 
CODE(8)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R0
	R0=U(0x11f7d);		//Load value right side (static)
	U(0x11f8e)=R0;		//Save value right side into variable (static)
	//Free R0
STAT(9)			
	DAT(0x11f7c,U,'2');	//Literal ''2'', scope 0 
CODE(9)			
	//////////////////////////////////
	// Assignment to variable 'c2', scope 0
	//Get R0
	R0=U(0x11f7c);		//Load value right side (static)
	U(0x11f8d)=R0;		//Save value right side into variable (static)
	//Free R0
STAT(10)			
	STR(0x11f5c, "Character out c2 does display: ");			
CODE(10)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=14;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f5c;			//String literal address
	GT(putfs_);			//Print string literal
L 14:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'c2', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=15;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(0x11f8d);		//Static variable value
	GT(putfi_);			//Print variable
L 15:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c2', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=16;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 16:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-11;			//Reserve params space
	//Get R0
	R0=U(0x11f8e);		//Static variable value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. co is of out type. 1 address
	//No need to pass value parameter 3. co2 is of out type. 2 address
	P(R7+4)=R6;			//Save active base
	P(R7)=17;			//Save return label
	GT(1);				//Jump to subprogram Error
L 17:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	//No need to get value parameter 1. ci is of in type. 0 address
	//Get R0
	R0=U(R7+9);			//Get value parameter 2
	U(0x11f8d)=R0;		//Static variable value
	//Free R0
	//Get R0
	R0=U(R7+10);			//Get value parameter 3
	U(0x11f8c)=R0;		//Static variable value
	//Free R0
	R7=R7+11;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
STAT(11)			
	STR(0x11f3c, "Character out c3 does display: ");			
CODE(11)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=18;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f3c;			//String literal address
	GT(putfs_);			//Print string literal
L 18:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'c3', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=19;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(0x11f8c);		//Static variable value
	GT(putfi_);			//Print variable
L 19:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c3', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=20;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 20:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
