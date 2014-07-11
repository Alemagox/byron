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
	STR(0x11fd0, "Expresion erronea. Last car: ");			
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
	R2=0x11fd0;			//String literal address
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
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Error 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Numero 
L 3:				
	R6=R7;				//New base
	R7=R7-0;			//Reserve space for local variables
STAT(2)			
	DAT(0x11fcc,I,0);	//Literal '0', scope 1 
CODE(2)			
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(0x11fcc);		//Load value right side (static)
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open if block 2. Exit Label is: 4
STAT(3)			
	DAT(0x11fc8,U,'0');	//Literal ''0'', scope 1 
CODE(3)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fc8);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1<R0) GT(5);	//Jump if true
	R0=0;			//Set as False
	GT(6);	//Jump to end
L 5:				
	R0=1;			//Set as True
L 6:				
	// End of evaluation
	//Free R1
STAT(4)			
	DAT(0x11fc4,U,'9');	//Literal ''9'', scope 1 
CODE(4)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fc4);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2>R1) GT(7);	//Jump if true
	R1=0;			//Set as False
	GT(8);	//Jump to end
L 7:				
	R1=1;			//Set as True
L 8:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(9);	//Jump if 0
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space
	P(R7+4)=R6;			//Save active base
	P(R7)=10;			//Save return label
	GT(1);				//Jump to subprogram Error
L 10:				
	R6=P(R7+4);			//Recover active base
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
STAT(5)			
	STR(0x11fbb, "Numero: ");			
CODE(5)			
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
	R2=0x11fbb;			//String literal address
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
	//////////////////////////////////
	// Print variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=12;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 12:				
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
	GT(4);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 9:				
L 4:				
	// Close if statement 2
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:14
L 14:				
STAT(6)			
	DAT(0x11fb7,U,'0');	//Literal ''0'', scope 1 
CODE(6)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fb7);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1>R0) GT(16);	//Jump if true
	R0=0;			//Set as False
	GT(17);	//Jump to end
L 16:				
	R0=1;			//Set as True
L 17:				
	// End of evaluation
	//Free R1
STAT(7)			
	DAT(0x11fb3,U,'9');	//Literal ''9'', scope 1 
CODE(7)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fb3);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2<R1) GT(18);	//Jump if true
	R1=0;			//Set as False
	GT(19);	//Jump to end
L 18:				
	R1=1;			//Set as True
L 19:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0*R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:14
	//Free R0
	IF(R0==0) GT(15);	//Jump if 0
STAT(8)			
	DAT(0x11faf,I,10);	//Literal '10', scope 1 
CODE(8)			
	//////////////////////////////////
	// Multilply factors
	//Get R0
	R0=I(R6+12);		//Load value right factor
	//Get R1
	R1=I(0x11faf);		//Load value left factor
	R0=R1*R0;		//Multiply factors
	//Free R1
	//////////////////////////////////
	// Add terms
	//Get R1
	R1=U(R6+8);		//Load value right term
	//Left term already in R0
	R0=R0+R1;		//Add terms
	//Free R1
STAT(9)			
	DAT(0x11fab,U,'0');	//Literal ''0'', scope 1 
CODE(9)			
	//////////////////////////////////
	// Add terms
	//Get R1
	R1=U(0x11fab);		//Load value right term
	//Left term already in R0
	R0=R0-R1;		//Add terms
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=20;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 20:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(14);			//Evaluate loop again
	// Close while loop -> L:14
	//////////////////////////////////
L 15:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Numero 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Factor 
L 21:				
	R6=R7;				//New base
	R7=R7-0;			//Reserve space for local variables
STAT(10)			
	DAT(0x11fa7,I,0);	//Literal '0', scope 1 
CODE(10)			
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(0x11fa7);		//Load value right side (static)
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open if block 20. Exit Label is: 22
STAT(11)			
	DAT(0x11fa3,U,'(');	//Literal ''('', scope 1 
CODE(11)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fa3);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(23);	//Jump if true
	R0=0;			//Set as False
	GT(24);	//Jump to end
L 23:				
	R0=1;			//Set as True
L 24:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(25);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=26;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 26:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Expresion 
	R7=R7-8;			//Reserve params space
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 0 address
	P(R7+4)=R6;			//Save active base
	P(R7)=27;			//Save return label
	GT(0);				//Jump to subprogram Expresion
L 27:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(R6+8)=R0;		//Save variable 'c' value
	//Free R0
	//Get R0
	R0=I(R7+8);			//Get value parameter 2
	I(R6+12)=R0;		//Save variable 'resultado' value
	//Free R0
	R7=R7+8;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 26. Exit Label is: 28
STAT(12)			
	DAT(0x11f9f,U,')');	//Literal '')'', scope 1 
CODE(12)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f9f);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(29);	//Jump if true
	R0=0;			//Set as False
	GT(30);	//Jump to end
L 29:				
	R0=1;			//Set as True
L 30:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(31);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=32;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 32:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(28);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 31:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space
	P(R7+4)=R6;			//Save active base
	P(R7)=33;			//Save return label
	GT(1);				//Jump to subprogram Error
L 33:				
	R6=P(R7+4);			//Recover active base
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
STAT(13)			
	STR(0x11f96, "Factor: ");			
CODE(13)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=34;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f96;			//String literal address
	GT(putfs_);			//Print string literal
L 34:				
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
	R0=35;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 35:				
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
	R0=36;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 36:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
L 28:				
	// Close if statement 26
	//////////////////////////////////
	GT(22);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 25:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Numero 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=37;			//Save return label
	GT(3);				//Jump to subprogram Numero
L 37:				
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
	// End procedure call Numero 
	//////////////////////////////////
L 22:				
	// Close if statement 20
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Termino 
L 38:				
	R6=R7;				//New base
	R7=R7-8;			//Reserve space for local variables
	//////////////////////////////////
	// Start procedure call Factor 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=39;			//Save return label
	GT(21);				//Jump to subprogram Factor
L 39:				
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
	// End procedure call Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:40
L 40:				
STAT(14)			
	DAT(0x11f92,U,'*');	//Literal ''*'', scope 1 
CODE(14)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f92);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(42);	//Jump if true
	R0=0;			//Set as False
	GT(43);	//Jump to end
L 42:				
	R0=1;			//Set as True
L 43:				
	// End of evaluation
	//Free R1
STAT(15)			
	DAT(0x11f8e,U,'/');	//Literal ''/'', scope 1 
CODE(15)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f8e);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(44);	//Jump if true
	R1=0;			//Set as False
	GT(45);	//Jump to end
L 44:				
	R1=1;			//Set as True
L 45:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:40
	//Free R0
	IF(R0==0) GT(41);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R0
	R0=U(R6+8);		//Load value right side (static)
	U(R6-4)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=46;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 46:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Factor 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=47;			//Save return label
	GT(21);				//Jump to subprogram Factor
L 47:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(R6+8)=R0;		//Save variable 'c' value
	//Free R0
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(R6-8)=R0;		//Save variable 'aux' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 46. Exit Label is: 48
STAT(16)			
	DAT(0x11f8a,U,'*');	//Literal ''*'', scope 1 
CODE(16)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f8a);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(49);	//Jump if true
	R0=0;			//Set as False
	GT(50);	//Jump to end
L 49:				
	R0=1;			//Set as True
L 50:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(51);	//Jump if 0
	//////////////////////////////////
	// Multilply factors
	//Get R0
	R0=I(R6-8);		//Load value right factor
	//Get R1
	R1=I(R6+12);		//Load value left factor
	R0=R1*R0;		//Multiply factors
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	GT(48);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 51:				
L 48:				
	// Close if statement 46
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 50. Exit Label is: 52
STAT(17)			
	DAT(0x11f86,U,'/');	//Literal ''/'', scope 1 
CODE(17)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f86);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(53);	//Jump if true
	R0=0;			//Set as False
	GT(54);	//Jump to end
L 53:				
	R0=1;			//Set as True
L 54:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(55);	//Jump if 0
	//////////////////////////////////
	// Multilply factors
	//Get R0
	R0=I(R6-8);		//Load value right factor
	//Get R1
	R1=I(R6+12);		//Load value left factor
	R0=R1/R0;		//Multiply factors
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	GT(52);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 55:				
L 52:				
	// Close if statement 50
	//////////////////////////////////
	GT(40);			//Evaluate loop again
	// Close while loop -> L:40
	//////////////////////////////////
L 41:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Expresion 
L 56:				
	R6=R7;				//New base
	R7=R7-8;			//Reserve space for local variables
	//////////////////////////////////
	// Open if block 55. Exit Label is: 57
STAT(18)			
	DAT(0x11f82,U,'+');	//Literal ''+'', scope 1 
CODE(18)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f82);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(58);	//Jump if true
	R0=0;			//Set as False
	GT(59);	//Jump to end
L 58:				
	R0=1;			//Set as True
L 59:				
	// End of evaluation
	//Free R1
STAT(19)			
	DAT(0x11f7e,U,'-');	//Literal ''-'', scope 1 
CODE(19)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f7e);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(60);	//Jump if true
	R1=0;			//Set as False
	GT(61);	//Jump to end
L 60:				
	R1=1;			//Set as True
L 61:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(62);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R0
	R0=U(R6+8);		//Load value right side (static)
	U(R6-4)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=63;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 63:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(57);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 62:				
L 57:				
	// Close if statement 55
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Termino 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=64;			//Save return label
	GT(38);				//Jump to subprogram Termino
L 64:				
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
	// End procedure call Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 63. Exit Label is: 65
STAT(20)			
	DAT(0x11f7a,U,'-');	//Literal ''-'', scope 1 
CODE(20)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f7a);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(66);	//Jump if true
	R0=0;			//Set as False
	GT(67);	//Jump to end
L 66:				
	R0=1;			//Set as True
L 67:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(68);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(R6+12);		//Load value right side (static)
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	GT(65);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 68:				
L 65:				
	// Close if statement 63
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:69
L 69:				
STAT(21)			
	DAT(0x11f76,U,'+');	//Literal ''+'', scope 1 
CODE(21)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f76);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(71);	//Jump if true
	R0=0;			//Set as False
	GT(72);	//Jump to end
L 71:				
	R0=1;			//Set as True
L 72:				
	// End of evaluation
	//Free R1
STAT(22)			
	DAT(0x11f72,U,'-');	//Literal ''-'', scope 1 
CODE(22)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f72);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(73);	//Jump if true
	R1=0;			//Set as False
	GT(74);	//Jump to end
L 73:				
	R1=1;			//Set as True
L 74:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:69
	//Free R0
	IF(R0==0) GT(70);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R0
	R0=U(R6+8);		//Load value right side (static)
	U(R6-4)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=75;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 75:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Termino 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=76;			//Save return label
	GT(38);				//Jump to subprogram Termino
L 76:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(R6+8)=R0;		//Save variable 'c' value
	//Free R0
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(R6-8)=R0;		//Save variable 'aux' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 75. Exit Label is: 77
STAT(23)			
	DAT(0x11f6e,U,'+');	//Literal ''+'', scope 1 
CODE(23)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f6e);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(78);	//Jump if true
	R0=0;			//Set as False
	GT(79);	//Jump to end
L 78:				
	R0=1;			//Set as True
L 79:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(80);	//Jump if 0
	//////////////////////////////////
	// Add terms
	//Get R0
	R0=I(R6-8);		//Load value right term
	//Get R1
	R1=I(R6+12);		//Load value left term
	R0=R1+R0;		//Add terms
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	GT(77);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 80:				
L 77:				
	// Close if statement 75
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 79. Exit Label is: 81
STAT(24)			
	DAT(0x11f6a,U,'-');	//Literal ''-'', scope 1 
CODE(24)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f6a);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(82);	//Jump if true
	R0=0;			//Set as False
	GT(83);	//Jump to end
L 82:				
	R0=1;			//Set as True
L 83:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(84);	//Jump if 0
	//////////////////////////////////
	// Add terms
	//Get R0
	R0=I(R6-8);		//Load value right term
	//Get R1
	R1=I(R6+12);		//Load value left term
	R0=R1-R0;		//Add terms
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	GT(81);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 84:				
L 81:				
	// Close if statement 79
	//////////////////////////////////
	GT(69);			//Evaluate loop again
	// Close while loop -> L:69
	//////////////////////////////////
L 70:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Expresion 
	//////////////////////////////////
STAT(25)			
	DAT(0x11f66,U,0);	//Var 'n', scope 0 
	DAT(0x11f62,U,0);	//Var 'c', scope 0 
	DAT(0x11f5e,I,0);	//Var 'resultado', scope 0 
CODE(25)
L 0:
	R6=R7;			//Initialize R6
STAT(26)			
	DAT(0x11f5a,U,'y');	//Literal ''y'', scope 0 
CODE(26)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R0
	R0=U(0x11f5a);		//Load value right side (static)
	U(0x11f62)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open while loop -> L:85
L 85:				
STAT(27)			
	DAT(0x11f56,U,'n');	//Literal ''n'', scope 0 
CODE(27)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f56);		//Load value right expression result
	//Get R1
	R1=U(0x11f62);		//Load value left expression result
	IF(R1!=R0) GT(87);	//Jump if true
	R0=0;			//Set as False
	GT(88);	//Jump to end
L 87:				
	R0=1;			//Set as True
L 88:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:85
	//Free R0
	IF(R0==0) GT(86);	//Jump if 0
STAT(28)			
	STR(0x11f40, "Put your expression: ");			
CODE(28)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=89;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f40;			//String literal address
	GT(putfs_);			//Print string literal
L 89:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'c', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=90;			//Return label
	R2=0x11f62;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 90:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Expresion 
	R7=R7-16;			//Reserve params space
	//Get R0
	R0=U(0x11f62);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=91;			//Save return label
	GT(56);				//Jump to subprogram Expresion
L 91:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(0x11f62)=R0;		//Save variable 'c' value
	//Free R0
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(0x11f5e)=R0;		//Save variable 'resultado' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
STAT(29)			
	STR(0x11f34, "Result is: ");			
CODE(29)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=92;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f34;			//String literal address
	GT(putfs_);			//Print string literal
L 92:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'resultado', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=93;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11f5e);		//Static variable value
	GT(putfi_);			//Print variable
L 93:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'resultado', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=94;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 94:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(30)			
	STR(0x11f1d, "New expression?(y/n): ");			
CODE(30)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=95;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f1d;			//String literal address
	GT(putfs_);			//Print string literal
L 95:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'c', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=96;			//Return label
	R2=0x11f62;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 96:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'n', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=97;			//Return label
	R2=0x11f66;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 97:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'n', scope 0
	//////////////////////////////////
	GT(85);			//Evaluate loop again
	// Close while loop -> L:85
	//////////////////////////////////
L 86:				//Exit while loop
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
