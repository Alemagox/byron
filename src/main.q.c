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
	DAT(0x11fd8,I,0);	//Literal '0', scope 1 
CODE(2)			
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(0x11fd8);		//Load value right side (static)
	I(R6+9)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open if block 2. Exit Label is: 4
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
	GT(4);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 9:				
L 4:				
	// Close if statement 2
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:11
L 11:				
STAT(5)			
	DAT(0x11fd5,U,'0');	//Literal ''0'', scope 1 
CODE(5)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fd5);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1>R0) GT(13);	//Jump if true
	R0=0;			//Set as False
	GT(14);	//Jump to end
L 13:				
	R0=1;			//Set as True
L 14:				
	// End of evaluation
	//Free R1
STAT(6)			
	DAT(0x11fd4,U,'9');	//Literal ''9'', scope 1 
CODE(6)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fd4);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2<R1) GT(15);	//Jump if true
	R1=0;			//Set as False
	GT(16);	//Jump to end
L 15:				
	R1=1;			//Set as True
L 16:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0*R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:11
	IF(R0==0) GT(12);	//Jump if 0
STAT(7)			
	DAT(0x11fd0,I,10);	//Literal '10', scope 1 
CODE(7)			
	//////////////////////////////////
	// Multilply factors
	//Get R1
	R1=I(R6+9);		//Load value right factor
	//Get R2
	R2=I(0x11fd0);		//Load value left factor
	R1=R2*R1;		//Multiply factors
	//Free R2
	//////////////////////////////////
	// Add terms
	//Get R2
	R2=U(R6+8);		//Load value right term
	//Left term already in R1
	R1=R1+R2;		//Add terms
	//Free R2
STAT(8)			
	DAT(0x11fcf,U,'0');	//Literal ''0'', scope 1 
CODE(8)			
	//////////////////////////////////
	// Add terms
	//Get R2
	R2=U(0x11fcf);		//Load value right term
	//Left term already in R1
	R1=R1-R2;		//Add terms
	//Free R2
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R1;		//Save value right side into variable
	//Free R1
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
	//Get R1
	R1=I(0x11fcb);		//Load value right side (static)
	I(R6+9)=R1;		//Save value right side into variable
	//Free R1
	//////////////////////////////////
	// Open if block 17. Exit Label is: 19
STAT(10)			
	DAT(0x11fca,U,'(');	//Literal ''('', scope 1 
CODE(10)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fca);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(20);	//Jump if true
	R1=0;			//Set as False
	GT(21);	//Jump to end
L 20:				
	R1=1;			//Set as True
L 21:				
	// End of evaluation
	//Free R2
	//////////////////////////////////
	// Evaluate if block 
	//Free R1
	IF(R1==0) GT(22);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=23;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 23:				
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
	//Get R1
	R1=U(R6+8);		//Load variable 'c' value
	//Free R1
	U(R7+8)=R1;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 0 address
	P(R7+4)=R6;			//Save active base
	P(R7)=24;			//Save return label
	GT(0);				//Jump to subprogram Expresion
L 24:				
	R6=P(R7+4);			//Recover active base
	//Get R1
	R1=U(R7+8);			//Get value parameter 1
	U(R6+8)=R1;		//Save variable 'c' value
	//Free R1
	//Get R1
	R1=I(R7+8);			//Get value parameter 2
	I(R6+9)=R1;		//Save variable 'resultado' value
	//Free R1
	R7=R7+8;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 23. Exit Label is: 25
STAT(11)			
	DAT(0x11fc9,U,')');	//Literal '')'', scope 1 
CODE(11)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fc9);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(26);	//Jump if true
	R1=0;			//Set as False
	GT(27);	//Jump to end
L 26:				
	R1=1;			//Set as True
L 27:				
	// End of evaluation
	//Free R2
	//////////////////////////////////
	// Evaluate if block 
	//Free R1
	IF(R1==0) GT(28);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=29;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 29:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(25);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 28:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space
	P(R7+4)=R6;			//Save active base
	P(R7)=30;			//Save return label
	GT(1);				//Jump to subprogram Error
L 30:				
	R6=P(R7+4);			//Recover active base
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
L 25:				
	// Close if statement 23
	//////////////////////////////////
	GT(19);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 22:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Numero 
	R7=R7-13;			//Reserve params space
	//Get R1
	R1=U(R6+8);		//Load variable 'c' value
	//Free R1
	U(R7+8)=R1;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=31;			//Save return label
	GT(3);				//Jump to subprogram Numero
L 31:				
	R6=P(R7+4);			//Recover active base
	//Get R1
	R1=U(R7+8);			//Get value parameter 1
	U(R6+8)=R1;		//Save variable 'c' value
	//Free R1
	//Get R1
	R1=I(R7+9);			//Get value parameter 2
	I(R6+9)=R1;		//Save variable 'resultado' value
	//Free R1
	R7=R7+13;			//Free params space
	// End procedure call Numero 
	//////////////////////////////////
L 19:				
	// Close if statement 17
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
	//Get R1
	R1=U(R6+8);		//Load variable 'c' value
	//Free R1
	U(R7+8)=R1;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=33;			//Save return label
	GT(18);				//Jump to subprogram Factor
L 33:				
	R6=P(R7+4);			//Recover active base
	//Get R1
	R1=U(R7+8);			//Get value parameter 1
	U(R6+8)=R1;		//Save variable 'c' value
	//Free R1
	//Get R1
	R1=I(R7+9);			//Get value parameter 2
	I(R6+9)=R1;		//Save variable 'resultado' value
	//Free R1
	R7=R7+13;			//Free params space
	// End procedure call Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:34
L 34:				
STAT(12)			
	DAT(0x11fc8,U,'*');	//Literal ''*'', scope 1 
CODE(12)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fc8);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(36);	//Jump if true
	R1=0;			//Set as False
	GT(37);	//Jump to end
L 36:				
	R1=1;			//Set as True
L 37:				
	// End of evaluation
	//Free R2
STAT(13)			
	DAT(0x11fc7,U,'/');	//Literal ''/'', scope 1 
CODE(13)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fc7);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(38);	//Jump if true
	R2=0;			//Set as False
	GT(39);	//Jump to end
L 38:				
	R2=1;			//Set as True
L 39:				
	// End of evaluation
	//Free R3
	//Right boolean already in R2
	//Left boolean already in R1
	R1=R1+R2;		//Evaluate expressions
	//Free R2
	//////////////////////////////////
	// Evaluate while loop -> L:34
	IF(R1==0) GT(35);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R2
	R2=U(R6+8);		//Load value right side (static)
	U(R6-8)=R2;		//Save value right side into variable
	//Free R2
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=40;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 40:				
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
	//Get R2
	R2=U(R6+8);		//Load variable 'c' value
	//Free R2
	U(R7+8)=R2;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=41;			//Save return label
	GT(18);				//Jump to subprogram Factor
L 41:				
	R6=P(R7+4);			//Recover active base
	//Get R2
	R2=U(R7+8);			//Get value parameter 1
	U(R6+8)=R2;		//Save variable 'c' value
	//Free R2
	//Get R2
	R2=I(R7+9);			//Get value parameter 2
	I(R6-4)=R2;		//Save variable 'aux' value
	//Free R2
	R7=R7+13;			//Free params space
	// End procedure call Factor 
	//////////////////////////////////
STAT(14)			
	DAT(0x11fc6,U,'*');	//Literal ''*'', scope 1 
CODE(14)			
	//////////////////////////////////
	// Multilply factors
	//Get R2
	R2=I(R6-4);		//Load value right factor
	//Get R3
	R3=I(R6+9);		//Load value left factor
	R2=R3*R2;		//Multiply factors
	//Free R3
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R2;		//Save value right side into variable
	//Free R2
STAT(15)			
	DAT(0x11fc5,U,'/');	//Literal ''/'', scope 1 
CODE(15)			
	//////////////////////////////////
	// Multilply factors
	//Get R2
	R2=I(R6-4);		//Load value right factor
	//Get R3
	R3=I(R6+9);		//Load value left factor
	R2=R3/R2;		//Multiply factors
	//Free R3
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R2;		//Save value right side into variable
	//Free R2
	GT(34);			//Evaluate loop again
	// Close while loop -> L:34
	//////////////////////////////////
L 35:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Expresion 
L 42:				
	R6=R7;				//New base
	R7=R7-5;			//Reserve space for local variables
	//////////////////////////////////
	// Open if block 41. Exit Label is: 43
STAT(16)			
	DAT(0x11fc4,U,'+');	//Literal ''+'', scope 1 
CODE(16)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fc4);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(44);	//Jump if true
	R2=0;			//Set as False
	GT(45);	//Jump to end
L 44:				
	R2=1;			//Set as True
L 45:				
	// End of evaluation
	//Free R3
STAT(17)			
	DAT(0x11fc3,U,'-');	//Literal ''-'', scope 1 
CODE(17)			
	//////////////////////////////////
	// Relation evaluation
	//Get R3
	R3=U(0x11fc3);		//Load value right expression result
	//Get R4
	R4=U(R6+8);		//Load value left expression result
	IF(R4==R3) GT(46);	//Jump if true
	R3=0;			//Set as False
	GT(47);	//Jump to end
L 46:				
	R3=1;			//Set as True
L 47:				
	// End of evaluation
	//Free R4
	//Right boolean already in R3
	//Left boolean already in R2
	R2=R2+R3;		//Evaluate expressions
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	//Free R2
	IF(R2==0) GT(48);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R2
	R2=U(R6+8);		//Load value right side (static)
	U(R6-8)=R2;		//Save value right side into variable
	//Free R2
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=49;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 49:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(43);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 48:				
L 43:				
	// Close if statement 41
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Termino 
	R7=R7-13;			//Reserve params space
	//Get R2
	R2=U(R6+8);		//Load variable 'c' value
	//Free R2
	U(R7+8)=R2;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=50;			//Save return label
	GT(32);				//Jump to subprogram Termino
L 50:				
	R6=P(R7+4);			//Recover active base
	//Get R2
	R2=U(R7+8);			//Get value parameter 1
	U(R6+8)=R2;		//Save variable 'c' value
	//Free R2
	//Get R2
	R2=I(R7+9);			//Get value parameter 2
	I(R6+9)=R2;		//Save variable 'resultado' value
	//Free R2
	R7=R7+13;			//Free params space
	// End procedure call Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 49. Exit Label is: 51
STAT(18)			
	DAT(0x11fc2,U,'-');	//Literal ''-'', scope 1 
CODE(18)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fc2);		//Load value right expression result
	//Get R3
	R3=U(R6-8);		//Load value left expression result
	IF(R3==R2) GT(52);	//Jump if true
	R2=0;			//Set as False
	GT(53);	//Jump to end
L 52:				
	R2=1;			//Set as True
L 53:				
	// End of evaluation
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	//Free R2
	IF(R2==0) GT(54);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R2
	R2=I(R6+9);		//Load value right side (static)
	I(R6+9)=R2;		//Save value right side into variable
	//Free R2
	GT(51);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 54:				
L 51:				
	// Close if statement 49
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:55
L 55:				
STAT(19)			
	DAT(0x11fc1,U,'+');	//Literal ''+'', scope 1 
CODE(19)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fc1);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(57);	//Jump if true
	R2=0;			//Set as False
	GT(58);	//Jump to end
L 57:				
	R2=1;			//Set as True
L 58:				
	// End of evaluation
	//Free R3
STAT(20)			
	DAT(0x11fc0,U,'-');	//Literal ''-'', scope 1 
CODE(20)			
	//////////////////////////////////
	// Relation evaluation
	//Get R3
	R3=U(0x11fc0);		//Load value right expression result
	//Get R4
	R4=U(R6+8);		//Load value left expression result
	IF(R4==R3) GT(59);	//Jump if true
	R3=0;			//Set as False
	GT(60);	//Jump to end
L 59:				
	R3=1;			//Set as True
L 60:				
	// End of evaluation
	//Free R4
	//Right boolean already in R3
	//Left boolean already in R2
	R2=R2+R3;		//Evaluate expressions
	//Free R3
	//////////////////////////////////
	// Evaluate while loop -> L:55
	IF(R2==0) GT(56);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R3
	R3=U(R6+8);		//Load value right side (static)
	U(R6-8)=R3;		//Save value right side into variable
	//Free R3
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=61;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 61:				
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
	//Get R3
	R3=U(R6+8);		//Load variable 'c' value
	//Free R3
	U(R7+8)=R3;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=62;			//Save return label
	GT(32);				//Jump to subprogram Termino
L 62:				
	R6=P(R7+4);			//Recover active base
	//Get R3
	R3=U(R7+8);			//Get value parameter 1
	U(R6+8)=R3;		//Save variable 'c' value
	//Free R3
	//Get R3
	R3=I(R7+9);			//Get value parameter 2
	I(R6-4)=R3;		//Save variable 'aux' value
	//Free R3
	R7=R7+13;			//Free params space
	// End procedure call Termino 
	//////////////////////////////////
STAT(21)			
	DAT(0x11fbf,U,'+');	//Literal ''+'', scope 1 
CODE(21)			
	//////////////////////////////////
	// Add terms
	//Get R3
	R3=I(R6-4);		//Load value right term
	//Get R4
	R4=I(R6+9);		//Load value left term
	R3=R4+R3;		//Add terms
	//Free R4
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R3;		//Save value right side into variable
	//Free R3
STAT(22)			
	DAT(0x11fbe,U,'-');	//Literal ''-'', scope 1 
CODE(22)			
	//////////////////////////////////
	// Add terms
	//Get R3
	R3=I(R6-4);		//Load value right term
	//Get R4
	R4=I(R6+9);		//Load value left term
	R3=R4-R3;		//Add terms
	//Free R4
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R3;		//Save value right side into variable
	//Free R3
	GT(55);			//Evaluate loop again
	// Close while loop -> L:55
	//////////////////////////////////
L 56:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
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
	//Get R3
	R3=U(0x11fb8);		//Load value right side (static)
	U(0x11fbd)=R3;		//Save value right side into variable
	//Free R3
	//////////////////////////////////
	// Open while loop -> L:63
L 63:				
STAT(25)			
	DAT(0x11fb7,U,'n');	//Literal ''n'', scope 0 
CODE(25)			
	//////////////////////////////////
	// Relation evaluation
	//Get R3
	R3=U(0x11fb7);		//Load value right expression result
	//Get R4
	R4=U(0x11fbd);		//Load value left expression result
	IF(R4!=R3) GT(65);	//Jump if true
	R3=0;			//Set as False
	GT(66);	//Jump to end
L 65:				
	R3=1;			//Set as True
L 66:				
	// End of evaluation
	//Free R4
	//////////////////////////////////
	// Evaluate while loop -> L:63
	IF(R3==0) GT(64);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=67;			//Return label
	R2=0x11fbd;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 67:				
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
	//Get R4
	R4=U(0x11fbd);		//Load variable 'c' value
	//Free R4
	U(R7+8)=R4;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=68;			//Save return label
	GT(42);				//Jump to subprogram Expresion
L 68:				
	R6=P(R7+4);			//Recover active base
	//Get R4
	R4=U(R7+8);			//Get value parameter 1
	U(0x11fbd)=R4;		//Save variable 'c' value
	//Free R4
	//Get R4
	R4=I(R7+9);			//Get value parameter 2
	I(0x11fb9)=R4;		//Save variable 'resultado' value
	//Free R4
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
	R0=69;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fab;			//String literal address
	GT(putfs_);			//Print string literal
L 69:				
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
	R0=70;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11fb9);		//Static variable value
	GT(putfi_);			//Print variable
L 70:				
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
	R0=71;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 71:				
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
	R0=72;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f94;			//String literal address
	GT(putfs_);			//Print string literal
L 72:				
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
	R0=73;			//Return label
	R2=0x11fbd;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 73:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	GT(63);			//Evaluate loop again
	// Close while loop -> L:63
	//////////////////////////////////
L 64:				//Exit while loop
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
