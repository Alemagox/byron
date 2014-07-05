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
	DAT(0x11fe8,U,'k');	//Literal ''k'', scope 0 
CODE(1)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	R0=U(0x11fe8);		//Load value right side
	U(0x11fe9)=R0;		//Save value right side into variable
	//////////////////////////////////
	// Print variable 'c', scope 0
	R0=1;			//Return label
	R1=0x11ff7;		//Format char address
	R2=U(0x11fe9);		//Variable value
	GT(putfi_);		//Print variable
L 1:				
	// End of Print variable 'c', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=2;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 2:				
	// End of New_Line
	//////////////////////////////////
STAT(2)			
	DAT(0x11fe4,I,3);	//Literal '3', scope 0 
	DAT(0x11fe0,I,4);	//Literal '4', scope 0 
CODE(2)			
	//////////////////////////////////
	// Multilply factors
	R0=I(0x11fe0);		//Load value right factor
	R1=I(0x11fe4);		//Load value left factor
	R0=R1*R0;		//Multiply factors
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	I(0x11fea)=R0;		//Save value right side into variable
STAT(3)			
	STR(0x11fd9, "3*4 = ");			
CODE(3)			
	/////////////////////////
	// Print string literal
	R0=3;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11fd9;			//String literal address
	GT(putfs_);		//Print string literal
L 3:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=4;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 4:				
	// End of Print variable 'i', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=5;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 5:				
	// End of New_Line
	//////////////////////////////////
STAT(4)			
	DAT(0x11fd5,I,2);	//Literal '2', scope 0 
CODE(4)			
	//////////////////////////////////
	// Multilply factors
	R0=I(0x11fd5);		//Load value right factor
	R1=I(0x11fea);		//Load value left factor
	R0=R1/R0;		//Multiply factors
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	I(0x11fea)=R0;		//Save value right side into variable
STAT(5)			
	STR(0x11fcd, "12/2 = ");			
CODE(5)			
	/////////////////////////
	// Print string literal
	R0=6;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11fcd;			//String literal address
	GT(putfs_);		//Print string literal
L 6:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=7;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 7:				
	// End of Print variable 'i', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=8;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 8:				
	// End of New_Line
	//////////////////////////////////
STAT(6)			
	DAT(0x11fc9,I,1);	//Literal '1', scope 0 
	DAT(0x11fc5,I,7);	//Literal '7', scope 0 
CODE(6)			
	//////////////////////////////////
	// Add terms
	R0=I(0x11fc5);		//Load value right term
	R1=I(0x11fc9);		//Load value left term
	R0=R1+R0;		//Add terms
STAT(7)			
	DAT(0x11fc1,I,1);	//Literal '1', scope 0 
CODE(7)			
	//////////////////////////////////
	// Add terms
	R1=I(0x11fc1);		//Load value right term
	//Left term already in R0
	R0=R0+R1;		//Add terms
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	I(0x11fea)=R0;		//Save value right side into variable
STAT(8)			
	STR(0x11fba, "1+7 = ");			
CODE(8)			
	/////////////////////////
	// Print string literal
	R0=9;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11fba;			//String literal address
	GT(putfs_);		//Print string literal
L 9:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=10;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 10:				
	// End of Print variable 'i', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=11;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 11:				
	// End of New_Line
	//////////////////////////////////
STAT(9)			
	DAT(0x11fb6,I,3);	//Literal '3', scope 0 
CODE(9)			
	//////////////////////////////////
	// Add terms
	R0=I(0x11fb6);		//Load value right term
	R1=I(0x11fea);		//Load value left term
	R0=R1-R0;		//Add terms
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	I(0x11fea)=R0;		//Save value right side into variable
STAT(10)			
	STR(0x11faf, "8-3 = ");			
CODE(10)			
	/////////////////////////
	// Print string literal
	R0=12;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11faf;			//String literal address
	GT(putfs_);		//Print string literal
L 12:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=13;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 13:				
	// End of Print variable 'i', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=14;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 14:				
	// End of New_Line
	//////////////////////////////////
STAT(11)			
	DAT(0x11fab,I,2);	//Literal '2', scope 0 
	DAT(0x11fa7,I,2);	//Literal '2', scope 0 
CODE(11)			
	//////////////////////////////////
	// Multilply factors
	R0=I(0x11fa7);		//Load value right factor
	R1=I(0x11fab);		//Load value left factor
	R0=R1*R0;		//Multiply factors
STAT(12)			
	DAT(0x11fa3,I,3);	//Literal '3', scope 0 
CODE(12)			
	//////////////////////////////////
	// Add terms
	R1=I(0x11fa3);		//Load value right term
	//Left term already in R0
	R0=R0+R1;		//Add terms
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	I(0x11fea)=R0;		//Save value right side into variable
STAT(13)			
	STR(0x11f9a, "2*2+3 = ");			
CODE(13)			
	/////////////////////////
	// Print string literal
	R0=15;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11f9a;			//String literal address
	GT(putfs_);		//Print string literal
L 15:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=16;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 16:				
	// End of Print variable 'i', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=17;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 17:				
	// End of New_Line
	//////////////////////////////////
STAT(14)			
	DAT(0x11f96,I,2);	//Literal '2', scope 0 
	DAT(0x11f92,I,2);	//Literal '2', scope 0 
	DAT(0x11f8e,I,3);	//Literal '3', scope 0 
CODE(14)			
	//////////////////////////////////
	// Multilply factors
	R0=I(0x11f8e);		//Load value right factor
	R1=I(0x11f92);		//Load value left factor
	R0=R1*R0;		//Multiply factors
	//////////////////////////////////
	// Add terms
	//Right factor already in R0
	R1=I(0x11f96);		//Load value left term
	R0=R1+R0;		//Add terms
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	I(0x11fea)=R0;		//Save value right side into variable
STAT(15)			
	STR(0x11f85, "2+2*3 = ");			
CODE(15)			
	/////////////////////////
	// Print string literal
	R0=18;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11f85;			//String literal address
	GT(putfs_);		//Print string literal
L 18:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=19;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 19:				
	// End of Print variable 'i', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=20;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 20:				
	// End of New_Line
	//////////////////////////////////
STAT(16)			
	STR(0x11f69, "Enter a letter(n to exit): ");			
CODE(16)			
	/////////////////////////
	// Print string literal
	R0=21;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11f69;			//String literal address
	GT(putfs_);		//Print string literal
L 21:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'c', scope 0
	R0=22;			//Return label
	R2=0x11fe9;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 22:				
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:23
L 23:				
STAT(17)			
	DAT(0x11f68,U,'n');	//Literal ''n'', scope 0 
CODE(17)			
	//////////////////////////////////
	// Relation evaluation
	R0=U(0x11f68);		//Load value right expression result
	R1=U(0x11fe9);		//Load value left expression result
	IF(R1!=R0) GT(25);	//Jump if true
	R0=0;			//Set as False
	GT(26);	//Jump to end
L 25:				
	R0=1;			//Set as True
L 26:				
	// End of evaluation
	//////////////////////////////////
	// Evaluate while loop -> L:23
	IF(R0==0) GT(24);	//Jump if 0
	//////////////////////////////////
	// Open if block 
STAT(18)			
	DAT(0x11f67,U,'a');	//Literal ''a'', scope 0 
CODE(18)			
	//////////////////////////////////
	// Relation evaluation
	R1=U(0x11f67);		//Load value right expression result
	R2=U(0x11fe9);		//Load value left expression result
	IF(R2==R1) GT(28);	//Jump if true
	R1=0;			//Set as False
	GT(29);	//Jump to end
L 28:				
	R1=1;			//Set as True
L 29:				
	// End of evaluation
	//////////////////////////////////
	// Evaluate if block 
	IF(R1==0) GT(27);	//Jump if 0
STAT(19)			
	STR(0x11f5d, "Muahahaha");			
CODE(19)			
	/////////////////////////
	// Print string literal
	R0=30;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11f5d;			//String literal address
	GT(putfs_);		//Print string literal
L 30:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=31;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 31:				
	// End of New_Line
	//////////////////////////////////
	//////////////////////////////////
	// Close if block 
L 27:				
	//////////////////////////////////
	// Open if block 
STAT(20)			
	DAT(0x11f5c,U,'3');	//Literal ''3'', scope 0 
CODE(20)			
	//////////////////////////////////
	// Relation evaluation
	R2=U(0x11f5c);		//Load value right expression result
	R3=U(0x11fe9);		//Load value left expression result
	IF(R3==R2) GT(33);	//Jump if true
	R2=0;			//Set as False
	GT(34);	//Jump to end
L 33:				
	R2=1;			//Set as True
L 34:				
	// End of evaluation
STAT(21)			
	DAT(0x11f5b,U,'7');	//Literal ''7'', scope 0 
CODE(21)			
	//////////////////////////////////
	// Relation evaluation
	R3=U(0x11f5b);		//Load value right expression result
	R4=U(0x11fe9);		//Load value left expression result
	IF(R4<=R3) GT(35);	//Jump if true
	R3=0;			//Set as False
	GT(36);	//Jump to end
L 35:				
	R3=1;			//Set as True
L 36:				
	// End of evaluation
STAT(22)			
	DAT(0x11f5a,U,'5');	//Literal ''5'', scope 0 
CODE(22)			
	//////////////////////////////////
	// Relation evaluation
	R4=U(0x11f5a);		//Load value right expression result
	R5=U(0x11fe9);		//Load value left expression result
	IF(R5>=R4) GT(37);	//Jump if true
	R4=0;			//Set as False
	GT(38);	//Jump to end
L 37:				
	R4=1;			//Set as True
L 38:				
	// End of evaluation
	//Right boolean already in R4
	//Left boolean already in R3
	R3=R3*R4;		//Evaluate expressions
	//Right boolean already in R3
	//Left boolean already in R2
	R2=R2+R3;		//Evaluate expressions
	//////////////////////////////////
	// Evaluate if block 
	IF(R2==0) GT(32);	//Jump if 0
STAT(23)			
	STR(0x11f51, "Numero: ");			
CODE(23)			
	/////////////////////////
	// Print string literal
	R0=39;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11f51;			//String literal address
	GT(putfs_);		//Print string literal
L 39:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'c', scope 0
	R0=40;			//Return label
	R1=0x11ff7;		//Format char address
	R2=U(0x11fe9);		//Variable value
	GT(putfi_);		//Print variable
L 40:				
	// End of Print variable 'c', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=41;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 41:				
	// End of New_Line
	//////////////////////////////////
	//////////////////////////////////
	// Close if block 
L 32:				
STAT(24)			
	STR(0x11f35, "Enter a letter(n to exit): ");			
CODE(24)			
	/////////////////////////
	// Print string literal
	R0=42;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11f35;			//String literal address
	GT(putfs_);		//Print string literal
L 42:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'c', scope 0
	R0=43;			//Return label
	R2=0x11fe9;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 43:				
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Close while loop -> L:23
	GT(23);			//Evaluate loop again
L 24:				//Exit while loop
STAT(25)			
	STR(0x11f29, "You're out!");			
CODE(25)			
	/////////////////////////
	// Print string literal
	R0=44;			//Return label
	R1=0x11ffd;		//Format string address
	R2=0x11f29;			//String literal address
	GT(putfs_);		//Print string literal
L 44:				
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R0=45;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 45:				
	// End of New_Line
	//////////////////////////////////
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
