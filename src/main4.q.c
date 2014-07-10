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
	STR(0x11fdc, "Expresion erronea");			
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
	R2=0x11fdc;			//String literal address
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
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=3;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 3:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Error 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Numero 
L 4:				
	R6=R7;				//New base
	R7=R7-0;			//Reserve space for local variables
STAT(2)			
	DAT(0x11fd8,I,0);	//Literal '0', scope 1 
CODE(2)			
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(0x11fd8);		//Load value right side (static)
	I(R6+9)=R0;		//Save value right side into variable (static)
	//Free R0
	//////////////////////////////////
	// Open if block 
STAT(3)			
	DAT(0x11fd7,U,'0');	//Literal ''0'', scope 1 
CODE(3)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fd7);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1<R0) GT(6);	//Jump if true
	R0=0;			//Set as False
	GT(7);	//Jump to end
L 6:				
	R0=1;			//Set as True
L 7:				
	// End of evaluation
	//Free R1
STAT(4)			
	DAT(0x11fd6,U,'9');	//Literal ''9'', scope 1 
CODE(4)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fd6);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2>R1) GT(8);	//Jump if true
	R1=0;			//Set as False
	GT(9);	//Jump to end
L 8:				
	R1=1;			//Set as True
L 9:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(5);	//Jump if 0
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
	//Free R5
	// Close if block 
	//////////////////////////////////
L 5:				
	//////////////////////////////////
	// Open while loop -> L:11
L 11:				
STAT(5)			
	DAT(0x11fd5,U,'0');	//Literal ''0'', scope 1 
CODE(5)			
	//////////////////////////////////
	// Relation evaluation
	//Get R5
	R5=U(0x11fd5);		//Load value right expression result
	//Get R0
	R0=U(R6+8);		//Load value left expression result
	IF(R0>R5) GT(13);	//Jump if true
	R5=0;			//Set as False
	GT(14);	//Jump to end
L 13:				
	R5=1;			//Set as True
L 14:				
	// End of evaluation
	//Free R0
STAT(6)			
	DAT(0x11fd4,U,'9');	//Literal ''9'', scope 1 
CODE(6)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fd4);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1<R0) GT(15);	//Jump if true
	R0=0;			//Set as False
	GT(16);	//Jump to end
L 15:				
	R0=1;			//Set as True
L 16:				
	// End of evaluation
	//Free R1
	//Right boolean already in R0
	//Left boolean already in R5
	R0=R5*R0;		//Evaluate expressions
	//Free R0
	//////////////////////////////////
	// Evaluate while loop -> L:11
	IF(R5==0) GT(12);	//Jump if 0
STAT(7)			
	DAT(0x11fd0,I,10);	//Literal '10', scope 1 
CODE(7)			
	//////////////////////////////////
	// Multilply factors
	//Get R0
	R0=I(R6+9);		//Load value right factor
	//Get R1
	R1=I(0x11fd0);		//Load value left factor
	R0=R1*R0;		//Multiply factors
	//Free R1
	//////////////////////////////////
	// Add terms
	//Get R1
	R1=U(R6+8);		//Load value right term
	//Left term already in R0
	R0=R0+R1;		//Add terms
	//Free R1
STAT(8)			
	DAT(0x11fcf,U,'0');	//Literal ''0'', scope 1 
CODE(8)			
	//////////////////////////////////
	// Add terms
	//Get R1
	R1=U(0x11fcf);		//Load value right term
	//Left term already in R0
	R0=R0-R1;		//Add terms
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R0;		//Save value right side into variable (static)
	//Free R0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=17;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 17:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(11);			//Evaluate loop again
	// Close while loop -> L:11
	//////////////////////////////////
L 12:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Numero 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Factor 
L 18:				
	R6=R7;				//New base
	R7=R7-0;			//Reserve space for local variables
STAT(9)			
	DAT(0x11fcb,I,0);	//Literal '0', scope 1 
CODE(9)			
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(0x11fcb);		//Load value right side (static)
	I(R6+9)=R0;		//Save value right side into variable (static)
	//Free R0
	//////////////////////////////////
	// Open if block 
STAT(10)			
	DAT(0x11fca,U,'(');	//Literal ''('', scope 1 
CODE(10)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fca);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(20);	//Jump if true
	R0=0;			//Set as False
	GT(21);	//Jump to end
L 20:				
	R0=1;			//Set as True
L 21:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(19);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=22;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 22:				
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
	R0=U(R6+8);			//Local variable value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 0 address
	P(R7+4)=R6;			//Save active base
	P(R7)=23;			//Save return label
	GT(0);				//Jump to subprogram Expresion
L 23:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(R6+8)=R0;			//Local variable value
	//Free R0
	//Get R0
	R0=I(R7+8);			//Get value parameter 2
	I(R6+9)=R0;			//Local variable value
	//Free R0
	R7=R7+8;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 
STAT(11)			
	DAT(0x11fc9,U,')');	//Literal '')'', scope 1 
CODE(11)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fc9);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(25);	//Jump if true
	R0=0;			//Set as False
	GT(26);	//Jump to end
L 25:				
	R0=1;			//Set as True
L 26:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(24);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=27;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 27:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	//Free R5
	// Close if block 
	//////////////////////////////////
L 24:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space
	P(R7+4)=R6;			//Save active base
	P(R7)=28;			//Save return label
	GT(1);				//Jump to subprogram Error
L 28:				
	R6=P(R7+4);			//Recover active base
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
	//Free R4
	// Close if block 
	//////////////////////////////////
L 19:				
	//////////////////////////////////
	// Open else block 
STAT(12)			
	STR(0x11fbb, "Paso a numero");			
CODE(12)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=29;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fbb;			//String literal address
	GT(putfs_);			//Print string literal
L 29:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=30;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 30:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Numero 
	R7=R7-13;			//Reserve params space
	//Get R4
	R4=U(R6+8);			//Local variable value
	//Free R4
	U(R7+8)=R4;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=31;			//Save return label
	GT(4);				//Jump to subprogram Numero
L 31:				
	R6=P(R7+4);			//Recover active base
	//Get R4
	R4=U(R7+8);			//Get value parameter 1
	U(R6+8)=R4;			//Local variable value
	//Free R4
	//Get R4
	R4=I(R7+9);			//Get value parameter 2
	I(R6+9)=R4;			//Local variable value
	//Free R4
	R7=R7+13;			//Free params space
	// End procedure call Numero 
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Termino 
L 32:				
	R6=R7;				//New base
	R7=R7-5;			//Reserve space for local variables
	//////////////////////////////////
	// Start procedure call Factor 
	R7=R7-13;			//Reserve params space
	//Get R4
	R4=U(R6+8);			//Local variable value
	//Free R4
	U(R7+8)=R4;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=33;			//Save return label
	GT(18);				//Jump to subprogram Factor
L 33:				
	R6=P(R7+4);			//Recover active base
	//Get R4
	R4=U(R7+8);			//Get value parameter 1
	U(R6+8)=R4;			//Local variable value
	//Free R4
	//Get R4
	R4=I(R7+9);			//Get value parameter 2
	I(R6+9)=R4;			//Local variable value
	//Free R4
	R7=R7+13;			//Free params space
	// End procedure call Factor 
	//////////////////////////////////
STAT(13)			
	STR(0x11fac, "Sale de factor");			
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
	R2=0x11fac;			//String literal address
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
	// Open while loop -> L:35
L 35:				
STAT(14)			
	DAT(0x11fab,U,'*');	//Literal ''*'', scope 1 
CODE(14)			
	//////////////////////////////////
	// Relation evaluation
	//Get R4
	R4=U(0x11fab);		//Load value right expression result
	//Get R5
	R5=U(R6+8);		//Load value left expression result
	IF(R5==R4) GT(37);	//Jump if true
	R4=0;			//Set as False
	GT(38);	//Jump to end
L 37:				
	R4=1;			//Set as True
L 38:				
	// End of evaluation
	//Free R5
STAT(15)			
	DAT(0x11faa,U,'/');	//Literal ''/'', scope 1 
CODE(15)			
	//////////////////////////////////
	// Relation evaluation
	//Get R5
	R5=U(0x11faa);		//Load value right expression result
	//Get R0
	R0=U(R6+8);		//Load value left expression result
	IF(R0==R5) GT(39);	//Jump if true
	R5=0;			//Set as False
	GT(40);	//Jump to end
L 39:				
	R5=1;			//Set as True
L 40:				
	// End of evaluation
	//Free R0
	//Right boolean already in R5
	//Left boolean already in R4
	R4=R4+R5;		//Evaluate expressions
	//Free R5
	//////////////////////////////////
	// Evaluate while loop -> L:35
	IF(R4==0) GT(36);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R5
	R5=U(R6+8);		//Load value right side (static)
	U(R6+8)=R5;		//Save value right side into variable (static)
	//Free R5
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=41;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 41:				
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
	R7=R7-13;			//Reserve params space
	//Get R5
	R5=U(R6+8);			//Local variable value
	//Free R5
	U(R7+8)=R5;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=42;			//Save return label
	GT(18);				//Jump to subprogram Factor
L 42:				
	R6=P(R7+4);			//Recover active base
	//Get R5
	R5=U(R7+8);			//Get value parameter 1
	U(R6+8)=R5;			//Local variable value
	//Free R5
	//Get R5
	R5=I(R7+9);			//Get value parameter 2
	I(R6+8)=R5;			//Local variable value
	//Free R5
	R7=R7+13;			//Free params space
	// End procedure call Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 
STAT(16)			
	DAT(0x11fa9,U,'*');	//Literal ''*'', scope 1 
CODE(16)			
	//////////////////////////////////
	// Relation evaluation
	//Get R5
	R5=U(0x11fa9);		//Load value right expression result
	//Get R0
	R0=U(R6+8);		//Load value left expression result
	IF(R0==R5) GT(44);	//Jump if true
	R5=0;			//Set as False
	GT(45);	//Jump to end
L 44:				
	R5=1;			//Set as True
L 45:				
	// End of evaluation
	//Free R0
	//////////////////////////////////
	// Evaluate if block 
	//Free R5
	IF(R5==0) GT(43);	//Jump if 0
	//////////////////////////////////
	// Multilply factors
	//Get R5
	R5=I(R6+8);		//Load value right factor
	//Get R0
	R0=I(R6+9);		//Load value left factor
	R0=R0*R5;		//Multiply factors
	//Free R0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R5;		//Save value right side into variable (static)
	//Free R5
	//Free R4
	// Close if block 
	//////////////////////////////////
L 43:				
	//////////////////////////////////
	// Open if block 
STAT(17)			
	DAT(0x11fa8,U,'/');	//Literal ''/'', scope 1 
CODE(17)			
	//////////////////////////////////
	// Relation evaluation
	//Get R4
	R4=U(0x11fa8);		//Load value right expression result
	//Get R5
	R5=U(R6+8);		//Load value left expression result
	IF(R5==R4) GT(47);	//Jump if true
	R4=0;			//Set as False
	GT(48);	//Jump to end
L 47:				
	R4=1;			//Set as True
L 48:				
	// End of evaluation
	//Free R5
	//////////////////////////////////
	// Evaluate if block 
	//Free R4
	IF(R4==0) GT(46);	//Jump if 0
	//////////////////////////////////
	// Multilply factors
	//Get R4
	R4=I(R6+8);		//Load value right factor
	//Get R5
	R5=I(R6+9);		//Load value left factor
	R4=R5/R4;		//Multiply factors
	//Free R5
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R4;		//Save value right side into variable (static)
	//Free R4
	//Free R3
	// Close if block 
	//////////////////////////////////
L 46:				
	GT(35);			//Evaluate loop again
	// Close while loop -> L:35
	//////////////////////////////////
L 36:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Expresion 
L 49:				
	R6=R7;				//New base
	R7=R7-5;			//Reserve space for local variables
STAT(18)			
	STR(0x11fa6, "-");			
CODE(18)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=50;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fa6;			//String literal address
	GT(putfs_);			//Print string literal
L 50:				
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
	R0=51;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);			//Local variable value wuuut : 0
	GT(putfi_);			//Print variable
L 51:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
	//////////////////////////////////
STAT(19)			
	STR(0x11fa4, "-");			
CODE(19)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=52;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fa4;			//String literal address
	GT(putfs_);			//Print string literal
L 52:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 
STAT(20)			
	DAT(0x11fa3,U,'+');	//Literal ''+'', scope 1 
CODE(20)			
	//////////////////////////////////
	// Relation evaluation
	//Get R3
	R3=U(0x11fa3);		//Load value right expression result
	//Get R4
	R4=U(R6+8);		//Load value left expression result
	IF(R4==R3) GT(54);	//Jump if true
	R3=0;			//Set as False
	GT(55);	//Jump to end
L 54:				
	R3=1;			//Set as True
L 55:				
	// End of evaluation
	//Free R4
STAT(21)			
	DAT(0x11fa2,U,'-');	//Literal ''-'', scope 1 
CODE(21)			
	//////////////////////////////////
	// Relation evaluation
	//Get R4
	R4=U(0x11fa2);		//Load value right expression result
	//Get R5
	R5=U(R6+8);		//Load value left expression result
	IF(R5==R4) GT(56);	//Jump if true
	R4=0;			//Set as False
	GT(57);	//Jump to end
L 56:				
	R4=1;			//Set as True
L 57:				
	// End of evaluation
	//Free R5
	//Right boolean already in R4
	//Left boolean already in R3
	R3=R3+R4;		//Evaluate expressions
	//Free R4
	//////////////////////////////////
	// Evaluate if block 
	//Free R3
	IF(R3==0) GT(53);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R3
	R3=U(R6+8);		//Load value right side (static)
	U(R6+8)=R3;		//Save value right side into variable (static)
	//Free R3
STAT(22)			
	STR(0x11f9f, "Op");			
CODE(22)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=58;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f9f;			//String literal address
	GT(putfs_);			//Print string literal
L 58:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=59;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 59:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	//Free R2
	// Close if block 
	//////////////////////////////////
L 53:				
	//////////////////////////////////
	// Start procedure call Termino 
	R7=R7-13;			//Reserve params space
	//Get R2
	R2=U(R6+8);			//Local variable value
	//Free R2
	U(R7+8)=R2;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=60;			//Save return label
	GT(32);				//Jump to subprogram Termino
L 60:				
	R6=P(R7+4);			//Recover active base
	//Get R2
	R2=U(R7+8);			//Get value parameter 1
	U(R6+8)=R2;			//Local variable value
	//Free R2
	//Get R2
	R2=I(R7+9);			//Get value parameter 2
	I(R6+9)=R2;			//Local variable value
	//Free R2
	R7=R7+13;			//Free params space
	// End procedure call Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 
STAT(23)			
	DAT(0x11f9e,U,'-');	//Literal ''-'', scope 1 
CODE(23)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11f9e);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(62);	//Jump if true
	R2=0;			//Set as False
	GT(63);	//Jump to end
L 62:				
	R2=1;			//Set as True
L 63:				
	// End of evaluation
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	//Free R2
	IF(R2==0) GT(61);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R2
	R2=I(R6+9);		//Load value right side (static)
	I(R6+9)=R2;		//Save value right side into variable (static)
	//Free R2
	//Free R1
	// Close if block 
	//////////////////////////////////
L 61:				
	//////////////////////////////////
	// Open while loop -> L:64
L 64:				
STAT(24)			
	DAT(0x11f9d,U,'+');	//Literal ''+'', scope 1 
CODE(24)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f9d);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(66);	//Jump if true
	R1=0;			//Set as False
	GT(67);	//Jump to end
L 66:				
	R1=1;			//Set as True
L 67:				
	// End of evaluation
	//Free R2
STAT(25)			
	DAT(0x11f9c,U,'-');	//Literal ''-'', scope 1 
CODE(25)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11f9c);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(68);	//Jump if true
	R2=0;			//Set as False
	GT(69);	//Jump to end
L 68:				
	R2=1;			//Set as True
L 69:				
	// End of evaluation
	//Free R3
	//Right boolean already in R2
	//Left boolean already in R1
	R1=R1+R2;		//Evaluate expressions
	//Free R2
	//////////////////////////////////
	// Evaluate while loop -> L:64
	IF(R1==0) GT(65);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R2
	R2=U(R6+8);		//Load value right side (static)
	U(R6+8)=R2;		//Save value right side into variable (static)
	//Free R2
STAT(26)			
	STR(0x11f98, "Op2");			
CODE(26)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=70;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f98;			//String literal address
	GT(putfs_);			//Print string literal
L 70:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=71;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 71:				
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
	R7=R7-13;			//Reserve params space
	//Get R2
	R2=U(R6+8);			//Local variable value
	//Free R2
	U(R7+8)=R2;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=72;			//Save return label
	GT(32);				//Jump to subprogram Termino
L 72:				
	R6=P(R7+4);			//Recover active base
	//Get R2
	R2=U(R7+8);			//Get value parameter 1
	U(R6+8)=R2;			//Local variable value
	//Free R2
	//Get R2
	R2=I(R7+9);			//Get value parameter 2
	I(R6+8)=R2;			//Local variable value
	//Free R2
	R7=R7+13;			//Free params space
	// End procedure call Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 
STAT(27)			
	DAT(0x11f97,U,'+');	//Literal ''+'', scope 1 
CODE(27)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11f97);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(74);	//Jump if true
	R2=0;			//Set as False
	GT(75);	//Jump to end
L 74:				
	R2=1;			//Set as True
L 75:				
	// End of evaluation
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	//Free R2
	IF(R2==0) GT(73);	//Jump if 0
	//////////////////////////////////
	// Add terms
	//Get R2
	R2=I(R6+8);		//Load value right term
	//Get R3
	R3=I(R6+9);		//Load value left term
	R2=R3+R2;		//Add terms
	//Free R3
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R2;		//Save value right side into variable (static)
	//Free R2
	//Free R1
	// Close if block 
	//////////////////////////////////
L 73:				
	//////////////////////////////////
	// Open if block 
STAT(28)			
	DAT(0x11f96,U,'-');	//Literal ''-'', scope 1 
CODE(28)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f96);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(77);	//Jump if true
	R1=0;			//Set as False
	GT(78);	//Jump to end
L 77:				
	R1=1;			//Set as True
L 78:				
	// End of evaluation
	//Free R2
	//////////////////////////////////
	// Evaluate if block 
	//Free R1
	IF(R1==0) GT(76);	//Jump if 0
	//////////////////////////////////
	// Add terms
	//Get R1
	R1=I(R6+8);		//Load value right term
	//Get R2
	R2=I(R6+9);		//Load value left term
	R1=R2-R1;		//Add terms
	//Free R2
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R1;		//Save value right side into variable (static)
	//Free R1
	//Free R0
	// Close if block 
	//////////////////////////////////
L 76:				
	GT(64);			//Evaluate loop again
	// Close while loop -> L:64
	//////////////////////////////////
L 65:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Expresion 
	//////////////////////////////////
STAT(29)			
	DAT(0x11f95,U,0);	//Var 'c', scope 0 
	DAT(0x11f91,I,0);	//Var 'resultado', scope 0 
CODE(29)
L 0:
	R6=R7;			//Initialize R6
STAT(30)			
	DAT(0x11f90,U,'y');	//Literal ''y'', scope 0 
CODE(30)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R0
	R0=U(0x11f90);		//Load value right side (static)
	U(0x11f95)=R0;		//Save value right side into variable (static)
	//Free R0
	//////////////////////////////////
	// Open while loop -> L:79
L 79:				
STAT(31)			
	DAT(0x11f8f,U,'n');	//Literal ''n'', scope 0 
CODE(31)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f8f);		//Load value right expression result
	//Get R1
	R1=U(0x11f95);		//Load value left expression result
	IF(R1!=R0) GT(81);	//Jump if true
	R0=0;			//Set as False
	GT(82);	//Jump to end
L 81:				
	R0=1;			//Set as True
L 82:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:79
	IF(R0==0) GT(80);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=83;			//Return label
	R2=0x11f95;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 83:				
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
	R7=R7-13;			//Reserve params space
	//Get R1
	R1=U(0x11f95);		//Static variable value
	//Free R1
	U(R7+8)=R1;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=84;			//Save return label
	GT(49);				//Jump to subprogram Expresion
L 84:				
	R6=P(R7+4);			//Recover active base
	//Get R1
	R1=U(R7+8);			//Get value parameter 1
	U(0x11f95)=R1;		//Static variable value
	//Free R1
	//Get R1
	R1=I(R7+9);			//Get value parameter 2
	I(0x11f91)=R1;		//Static variable value
	//Free R1
	R7=R7+13;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
STAT(32)			
	STR(0x11f83, "Result is: ");			
CODE(32)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=85;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f83;			//String literal address
	GT(putfs_);			//Print string literal
L 85:				
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
	R0=86;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11f91);		//Static variable value
	GT(putfi_);			//Print variable
L 86:				
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
	R0=87;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 87:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(33)			
	STR(0x11f6c, "New expression?(y/n): ");			
CODE(33)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=88;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f6c;			//String literal address
	GT(putfs_);			//Print string literal
L 88:				
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
	R0=89;			//Return label
	R2=0x11f95;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 89:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	GT(79);			//Evaluate loop again
	// Close while loop -> L:79
	//////////////////////////////////
L 80:				//Exit while loop
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
