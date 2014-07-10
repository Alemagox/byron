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
	R7=R6;				//Free local variables
	R6=P(R7+4);			//Recover base
	R7=R7-4;			//Save space for register R5
	I(R7)=R5;			//R5 saved
	R5=P(R7+4);			//Get return label
	GT(R5);				//Return!
	// End procedure Error 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Numero 
L 3:				
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
	IF(R1<R0) GT(5);	//Jump if true
	R0=0;			//Set as False
	GT(6);	//Jump to end
L 5:				
	R0=1;			//Set as True
L 6:				
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
	IF(R0==0) GT(4);	//Jump if 0
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space
	P(R7+4)=R6;			//Save active base
	P(R7)=9;			//Save return label
	GT(1);				//Jump to subprogram Error
L 9:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
	//////////////////////////////////
	// Close if block 
L 4:				
	//////////////////////////////////
	// Open while loop -> L:10
L 10:				
STAT(5)			
	DAT(0x11fd5,U,'0');	//Literal ''0'', scope 1 
CODE(5)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fd5);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2>R1) GT(12);	//Jump if true
	R1=0;			//Set as False
	GT(13);	//Jump to end
L 12:				
	R1=1;			//Set as True
L 13:				
	// End of evaluation
	//Free R2
STAT(6)			
	DAT(0x11fd4,U,'9');	//Literal ''9'', scope 1 
CODE(6)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fd4);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3<R2) GT(14);	//Jump if true
	R2=0;			//Set as False
	GT(15);	//Jump to end
L 14:				
	R2=1;			//Set as True
L 15:				
	// End of evaluation
	//Free R3
	//Right boolean already in R2
	//Left boolean already in R1
	R1=R1*R2;		//Evaluate expressions
	//Free R2
	//////////////////////////////////
	// Evaluate while loop -> L:10
	IF(R1==0) GT(11);	//Jump if 0
STAT(7)			
	DAT(0x11fd0,I,10);	//Literal '10', scope 1 
CODE(7)			
	//////////////////////////////////
	// Multilply factors
	//Get R2
	R2=I(R6+9);		//Load value right factor
	//Get R3
	R3=I(0x11fd0);		//Load value left factor
	R2=R3*R2;		//Multiply factors
	//Free R3
	//////////////////////////////////
	// Add terms
	//Get R3
	R3=U(R6+8);		//Load value right term
	//Left term already in R2
	R2=R2+R3;		//Add terms
	//Free R3
STAT(8)			
	DAT(0x11fcf,U,'0');	//Literal ''0'', scope 1 
CODE(8)			
	//////////////////////////////////
	// Add terms
	//Get R3
	R3=U(0x11fcf);		//Load value right term
	//Left term already in R2
	R2=R2-R3;		//Add terms
	//Free R3
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R2;		//Save value right side into variable (static)
	//Free R2
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=16;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 16:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Close while loop -> L:10
	GT(10);			//Evaluate loop again
L 11:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7+4);			//Recover base
	R7=R7-4;			//Save space for register R5
	I(R7)=R5;			//R5 saved
	R5=P(R7+4);			//Get return label
	GT(R5);				//Return!
	// End procedure Numero 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Factor 
L 17:				
	R6=R7;				//New base
	R7=R7-0;			//Reserve space for local variables
STAT(9)			
	DAT(0x11fcb,I,0);	//Literal '0', scope 1 
CODE(9)			
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R2
	R2=I(0x11fcb);		//Load value right side (static)
	I(R6+9)=R2;		//Save value right side into variable (static)
	//Free R2
	//////////////////////////////////
	// Open if block 
STAT(10)			
	DAT(0x11fca,U,'(');	//Literal ''('', scope 1 
CODE(10)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fca);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(19);	//Jump if true
	R2=0;			//Set as False
	GT(20);	//Jump to end
L 19:				
	R2=1;			//Set as True
L 20:				
	// End of evaluation
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	IF(R2==0) GT(18);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=21;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 21:				
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
	//Get R3
	R3=U(R6+8);			//Local variable value
	//Free R3
	U(R7+8)=R3;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 0 address
	P(R7+4)=R6;			//Save active base
	P(R7)=22;			//Save return label
	GT(0);				//Jump to subprogram Expresion
L 22:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	//Get R3
	R3=U(R7+8);			//Get value parameter 1
	U(R6+8)=R3;			//Local variable value
	//Free R3
	//Get R3
	R3=I(R7+8);			//Get value parameter 2
	I(R6+9)=R3;			//Local variable value
	//Free R3
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
	//Get R3
	R3=U(0x11fc9);		//Load value right expression result
	//Get R4
	R4=U(R6+8);		//Load value left expression result
	IF(R4==R3) GT(24);	//Jump if true
	R3=0;			//Set as False
	GT(25);	//Jump to end
L 24:				
	R3=1;			//Set as True
L 25:				
	// End of evaluation
	//Free R4
	//////////////////////////////////
	// Evaluate if block 
	IF(R3==0) GT(23);	//Jump if 0
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
	// Close if block 
L 23:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space
	P(R7+4)=R6;			//Save active base
	P(R7)=27;			//Save return label
	GT(1);				//Jump to subprogram Error
L 27:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
	//////////////////////////////////
	// Close if block 
L 18:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Numero 
	R7=R7-13;			//Reserve params space
	//Get R4
	R4=U(R6+8);			//Local variable value
	//Free R4
	U(R7+8)=R4;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=28;			//Save return label
	GT(3);				//Jump to subprogram Numero
L 28:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
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
	R6=P(R7+4);			//Recover base
	R7=R7-4;			//Save space for register R5
	I(R7)=R5;			//R5 saved
	R5=P(R7+4);			//Get return label
	GT(R5);				//Return!
	// End procedure Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Termino 
L 29:				
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
	P(R7)=30;			//Save return label
	GT(17);				//Jump to subprogram Factor
L 30:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
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
	//////////////////////////////////
	// Open while loop -> L:31
L 31:				
STAT(12)			
	DAT(0x11fc8,U,'*');	//Literal ''*'', scope 1 
CODE(12)			
	//////////////////////////////////
	// Relation evaluation
	//Get R4
	R4=U(0x11fc8);		//Load value right expression result
	//Get R5
	R5=U(R6+8);		//Load value left expression result
	IF(R5==R4) GT(33);	//Jump if true
	R4=0;			//Set as False
	GT(34);	//Jump to end
L 33:				
	R4=1;			//Set as True
L 34:				
	// End of evaluation
	//Free R5
STAT(13)			
	DAT(0x11fc7,U,'/');	//Literal ''/'', scope 1 
CODE(13)			
	//////////////////////////////////
	// Relation evaluation
	//Get R5
	R5=U(0x11fc7);		//Load value right expression result
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(R6+8);		//Load value left expression result
	IF(R0==R5) GT(35);	//Jump if true
	R0=0;			//Set as False
	GT(36);	//Jump to end
L 35:				
	R0=1;			//Set as True
L 36:				
	// End of evaluation
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	//Right boolean already in R5
	//Left boolean already in R4
	R4=R4+R5;		//Evaluate expressions
	//Free R5
	//////////////////////////////////
	// Evaluate while loop -> L:31
	IF(R4==0) GT(32);	//Jump if 0
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
	R0=37;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 37:				
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
	P(R7)=38;			//Save return label
	GT(17);				//Jump to subprogram Factor
L 38:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
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
STAT(14)			
	DAT(0x11fc6,U,'*');	//Literal ''*'', scope 1 
CODE(14)			
	//////////////////////////////////
	// Multilply factors
	//Get R5
	R5=I(R6+8);		//Load value right factor
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=I(R6+9);		//Load value left factor
	R0=R0*R5;		//Multiply factors
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R5;		//Save value right side into variable (static)
	//Free R5
STAT(15)			
	DAT(0x11fc5,U,'/');	//Literal ''/'', scope 1 
CODE(15)			
	//////////////////////////////////
	// Multilply factors
	//Get R5
	R5=I(R6+8);		//Load value right factor
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=I(R6+9);		//Load value left factor
	R0=R0/R5;		//Multiply factors
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R5;		//Save value right side into variable (static)
	//Free R5
	//////////////////////////////////
	// Close while loop -> L:31
	GT(31);			//Evaluate loop again
L 32:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7+4);			//Recover base
	R7=R7-4;			//Save space for register R5
	I(R7)=R5;			//R5 saved
	R5=P(R7+4);			//Get return label
	GT(R5);				//Return!
	// End procedure Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Expresion 
L 39:				
	R6=R7;				//New base
	R7=R7-5;			//Reserve space for local variables
	//////////////////////////////////
	// Open if block 
STAT(16)			
	DAT(0x11fc4,U,'+');	//Literal ''+'', scope 1 
CODE(16)			
	//////////////////////////////////
	// Relation evaluation
	//Get R5
	R5=U(0x11fc4);		//Load value right expression result
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(R6+8);		//Load value left expression result
	IF(R0==R5) GT(41);	//Jump if true
	R0=0;			//Set as False
	GT(42);	//Jump to end
L 41:				
	R0=1;			//Set as True
L 42:				
	// End of evaluation
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
STAT(17)			
	DAT(0x11fc3,U,'-');	//Literal ''-'', scope 1 
CODE(17)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(0x11fc3);		//Load value right expression result
	//Get R1
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(43);	//Jump if true
	R0=0;			//Set as False
	GT(44);	//Jump to end
L 43:				
	R0=1;			//Set as True
L 44:				
	// End of evaluation
	//Free R1
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	//Right boolean already in R0
	//Left boolean already in R5
	R0=R5+R0;		//Evaluate expressions
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	//////////////////////////////////
	// Evaluate if block 
	IF(R5==0) GT(40);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(R6+8);		//Load value right side (static)
	U(R6+8)=R0;		//Save value right side into variable (static)
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=45;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 45:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Close if block 
L 40:				
	//////////////////////////////////
	// Start procedure call Termino 
	R7=R7-13;			//Reserve params space
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(R6+8);			//Local variable value
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=46;			//Save return label
	GT(29);				//Jump to subprogram Termino
L 46:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(R7+8);			//Get value parameter 1
	U(R6+8)=R0;			//Local variable value
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=I(R7+9);			//Get value parameter 2
	I(R6+9)=R0;			//Local variable value
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	R7=R7+13;			//Free params space
	// End procedure call Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 
STAT(18)			
	DAT(0x11fc2,U,'-');	//Literal ''-'', scope 1 
CODE(18)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(0x11fc2);		//Load value right expression result
	//Get R1
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(48);	//Jump if true
	R0=0;			//Set as False
	GT(49);	//Jump to end
L 48:				
	R0=1;			//Set as True
L 49:				
	// End of evaluation
	//Free R1
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	//////////////////////////////////
	// Evaluate if block 
	IF(R0==0) GT(47);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R1
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R1=I(R6+9);		//Load value right side (static)
	I(R6+9)=R1;		//Save value right side into variable (static)
	//Free R1
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	//////////////////////////////////
	// Close if block 
L 47:				
	//////////////////////////////////
	// Open while loop -> L:50
L 50:				
STAT(19)			
	DAT(0x11fc1,U,'+');	//Literal ''+'', scope 1 
CODE(19)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R1=U(0x11fc1);		//Load value right expression result
	//Get R2
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(52);	//Jump if true
	R1=0;			//Set as False
	GT(53);	//Jump to end
L 52:				
	R1=1;			//Set as True
L 53:				
	// End of evaluation
	//Free R2
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
STAT(20)			
	DAT(0x11fc0,U,'-');	//Literal ''-'', scope 1 
CODE(20)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=U(0x11fc0);		//Load value right expression result
	//Get R3
	R7=R7-4;			//Save space for register R3
	I(R7)=R3;			//R3 saved
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(54);	//Jump if true
	R2=0;			//Set as False
	GT(55);	//Jump to end
L 54:				
	R2=1;			//Set as True
L 55:				
	// End of evaluation
	//Free R3
	R3=I(R7);			//R3 recovered
	R7=R7+4;			//Free space for register R3
	//Right boolean already in R2
	//Left boolean already in R1
	R1=R1+R2;		//Evaluate expressions
	//Free R2
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	//////////////////////////////////
	// Evaluate while loop -> L:50
	IF(R1==0) GT(51);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R2
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=U(R6+8);		//Load value right side (static)
	U(R6+8)=R2;		//Save value right side into variable (static)
	//Free R2
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=56;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 56:				
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
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=U(R6+8);			//Local variable value
	//Free R2
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	U(R7+8)=R2;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=57;			//Save return label
	GT(29);				//Jump to subprogram Termino
L 57:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	//Get R2
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=U(R7+8);			//Get value parameter 1
	U(R6+8)=R2;			//Local variable value
	//Free R2
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	//Get R2
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=I(R7+9);			//Get value parameter 2
	I(R6+8)=R2;			//Local variable value
	//Free R2
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R7=R7+13;			//Free params space
	// End procedure call Termino 
	//////////////////////////////////
STAT(21)			
	DAT(0x11fbf,U,'+');	//Literal ''+'', scope 1 
CODE(21)			
	//////////////////////////////////
	// Add terms
	//Get R2
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=I(R6+8);		//Load value right term
	//Get R3
	R7=R7-4;			//Save space for register R3
	I(R7)=R3;			//R3 saved
	R3=I(R6+9);		//Load value left term
	R2=R3+R2;		//Add terms
	//Free R3
	R3=I(R7);			//R3 recovered
	R7=R7+4;			//Free space for register R3
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R2;		//Save value right side into variable (static)
	//Free R2
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
STAT(22)			
	DAT(0x11fbe,U,'-');	//Literal ''-'', scope 1 
CODE(22)			
	//////////////////////////////////
	// Add terms
	//Get R2
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=I(R6+8);		//Load value right term
	//Get R3
	R7=R7-4;			//Save space for register R3
	I(R7)=R3;			//R3 saved
	R3=I(R6+9);		//Load value left term
	R2=R3-R2;		//Add terms
	//Free R3
	R3=I(R7);			//R3 recovered
	R7=R7+4;			//Free space for register R3
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R2;		//Save value right side into variable (static)
	//Free R2
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	//////////////////////////////////
	// Close while loop -> L:50
	GT(50);			//Evaluate loop again
L 51:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7+4);			//Recover base
	R7=R7-4;			//Save space for register R5
	I(R7)=R5;			//R5 saved
	R5=P(R7+4);			//Get return label
	GT(R5);				//Return!
	// End procedure Expresion 
	//////////////////////////////////
STAT(23)			
	DAT(0x11fbd,U,0);	//Var 'c', scope 0 
	DAT(0x11fb9,I,0);	//Var 'resultado', scope 0 
CODE(23)
L 0:
	R6=R7;			//Initialize R6
STAT(24)			
	DAT(0x11fb8,U,'y');	//Literal ''y'', scope 0 
CODE(24)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R2
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=U(0x11fb8);		//Load value right side (static)
	U(0x11fbd)=R2;		//Save value right side into variable (static)
	//Free R2
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	//////////////////////////////////
	// Open while loop -> L:58
L 58:				
STAT(25)			
	DAT(0x11fb7,U,'n');	//Literal ''n'', scope 0 
CODE(25)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R2=U(0x11fb7);		//Load value right expression result
	//Get R3
	R7=R7-4;			//Save space for register R3
	I(R7)=R3;			//R3 saved
	R3=U(0x11fbd);		//Load value left expression result
	IF(R3!=R2) GT(60);	//Jump if true
	R2=0;			//Set as False
	GT(61);	//Jump to end
L 60:				
	R2=1;			//Set as True
L 61:				
	// End of evaluation
	//Free R3
	R3=I(R7);			//R3 recovered
	R7=R7+4;			//Free space for register R3
	//////////////////////////////////
	// Evaluate while loop -> L:58
	IF(R2==0) GT(59);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=62;			//Return label
	R2=0x11fbd;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 62:				
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
	//Get R3
	R7=R7-4;			//Save space for register R3
	I(R7)=R3;			//R3 saved
	R3=U(0x11fbd);		//Static variable value
	//Free R3
	R3=I(R7);			//R3 recovered
	R7=R7+4;			//Free space for register R3
	U(R7+8)=R3;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=63;			//Save return label
	GT(39);				//Jump to subprogram Expresion
L 63:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	//Get R3
	R7=R7-4;			//Save space for register R3
	I(R7)=R3;			//R3 saved
	R3=U(R7+8);			//Get value parameter 1
	U(0x11fbd)=R3;		//Static variable value
	//Free R3
	R3=I(R7);			//R3 recovered
	R7=R7+4;			//Free space for register R3
	//Get R3
	R7=R7-4;			//Save space for register R3
	I(R7)=R3;			//R3 saved
	R3=I(R7+9);			//Get value parameter 2
	I(0x11fb9)=R3;		//Static variable value
	//Free R3
	R3=I(R7);			//R3 recovered
	R7=R7+4;			//Free space for register R3
	R7=R7+13;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
STAT(26)			
	STR(0x11fab, "Result is: ");			
CODE(26)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=64;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fab;			//String literal address
	GT(putfs_);			//Print string literal
L 64:				
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
	R0=65;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11fb9);		//Static variable value
	GT(putfi_);			//Print variable
L 65:				
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
	R0=66;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 66:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(27)			
	STR(0x11f94, "New expression?(y/n): ");			
CODE(27)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=67;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f94;			//String literal address
	GT(putfs_);			//Print string literal
L 67:				
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
	R0=68;			//Return label
	R2=0x11fbd;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 68:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Close while loop -> L:58
	GT(58);			//Evaluate loop again
L 59:				//Exit while loop
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
