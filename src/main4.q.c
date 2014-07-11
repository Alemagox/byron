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
	I(R6+9)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open if block 3. Exit Label is: 5
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
	IF(R0==0) GT(10);	//Jump if 0
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space
	P(R7+4)=R6;			//Save active base
	P(R7)=11;			//Save return label
	GT(1);				//Jump to subprogram Error
L 11:				
	R6=P(R7+4);			//Recover active base
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
	GT(5);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 10:				
L 5:				
	// Close if statement 3
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:12
L 12:				
STAT(5)			
	DAT(0x11fd5,U,'0');	//Literal ''0'', scope 1 
CODE(5)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fd5);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1>R0) GT(14);	//Jump if true
	R0=0;			//Set as False
	GT(15);	//Jump to end
L 14:				
	R0=1;			//Set as True
L 15:				
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
	IF(R2<R1) GT(16);	//Jump if true
	R1=0;			//Set as False
	GT(17);	//Jump to end
L 16:				
	R1=1;			//Set as True
L 17:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0*R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:12
	IF(R0==0) GT(13);	//Jump if 0
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
	R0=18;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 18:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(12);			//Evaluate loop again
	// Close while loop -> L:12
	//////////////////////////////////
L 13:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Numero 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Factor 
L 19:				
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
	// Open if block 18. Exit Label is: 20
STAT(10)			
	DAT(0x11fca,U,'(');	//Literal ''('', scope 1 
CODE(10)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fca);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(21);	//Jump if true
	R1=0;			//Set as False
	GT(22);	//Jump to end
L 21:				
	R1=1;			//Set as True
L 22:				
	// End of evaluation
	//Free R2
	//////////////////////////////////
	// Evaluate if block 
	//Free R1
	IF(R1==0) GT(23);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=24;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 24:				
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
	P(R7)=25;			//Save return label
	GT(0);				//Jump to subprogram Expresion
L 25:				
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
	// Open if block 24. Exit Label is: 26
STAT(11)			
	DAT(0x11fc9,U,')');	//Literal '')'', scope 1 
CODE(11)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fc9);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(27);	//Jump if true
	R1=0;			//Set as False
	GT(28);	//Jump to end
L 27:				
	R1=1;			//Set as True
L 28:				
	// End of evaluation
	//Free R2
	//////////////////////////////////
	// Evaluate if block 
	//Free R1
	IF(R1==0) GT(29);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=30;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 30:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(26);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 29:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space
	P(R7+4)=R6;			//Save active base
	P(R7)=31;			//Save return label
	GT(1);				//Jump to subprogram Error
L 31:				
	R6=P(R7+4);			//Recover active base
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
L 26:				
	// Close if statement 24
	//////////////////////////////////
	GT(20);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 23:				
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
	P(R7)=32;			//Save return label
	GT(4);				//Jump to subprogram Numero
L 32:				
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
L 20:				
	// Close if statement 18
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Termino 
L 33:				
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
	P(R7)=34;			//Save return label
	GT(19);				//Jump to subprogram Factor
L 34:				
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
	// Open while loop -> L:35
L 35:				
STAT(12)			
	DAT(0x11fc8,U,'*');	//Literal ''*'', scope 1 
CODE(12)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fc8);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(37);	//Jump if true
	R1=0;			//Set as False
	GT(38);	//Jump to end
L 37:				
	R1=1;			//Set as True
L 38:				
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
	IF(R3==R2) GT(39);	//Jump if true
	R2=0;			//Set as False
	GT(40);	//Jump to end
L 39:				
	R2=1;			//Set as True
L 40:				
	// End of evaluation
	//Free R3
	//Right boolean already in R2
	//Left boolean already in R1
	R1=R1+R2;		//Evaluate expressions
	//Free R2
	//////////////////////////////////
	// Evaluate while loop -> L:35
	IF(R1==0) GT(36);	//Jump if 0
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
	//Get R2
	R2=U(R6+8);		//Load variable 'c' value
	//Free R2
	U(R7+8)=R2;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=42;			//Save return label
	GT(19);				//Jump to subprogram Factor
L 42:				
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
	//////////////////////////////////
	// Open if block 41. Exit Label is: 43
STAT(14)			
	DAT(0x11fc6,U,'*');	//Literal ''*'', scope 1 
CODE(14)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fc6);		//Load value right expression result
	//Get R3
	R3=U(R6-8);		//Load value left expression result
	IF(R3==R2) GT(44);	//Jump if true
	R2=0;			//Set as False
	GT(45);	//Jump to end
L 44:				
	R2=1;			//Set as True
L 45:				
	// End of evaluation
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	//Free R2
	IF(R2==0) GT(46);	//Jump if 0
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
	GT(43);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 46:				
L 43:				
	// Close if statement 41
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 45. Exit Label is: 47
STAT(15)			
	DAT(0x11fc5,U,'/');	//Literal ''/'', scope 1 
CODE(15)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fc5);		//Load value right expression result
	//Get R3
	R3=U(R6-8);		//Load value left expression result
	IF(R3==R2) GT(48);	//Jump if true
	R2=0;			//Set as False
	GT(49);	//Jump to end
L 48:				
	R2=1;			//Set as True
L 49:				
	// End of evaluation
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	//Free R2
	IF(R2==0) GT(50);	//Jump if 0
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
	GT(47);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 50:				
L 47:				
	// Close if statement 45
	//////////////////////////////////
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
L 51:				
	R6=R7;				//New base
	R7=R7-5;			//Reserve space for local variables
	//////////////////////////////////
	// Open if block 50. Exit Label is: 52
STAT(16)			
	DAT(0x11fc4,U,'+');	//Literal ''+'', scope 1 
CODE(16)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fc4);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(53);	//Jump if true
	R2=0;			//Set as False
	GT(54);	//Jump to end
L 53:				
	R2=1;			//Set as True
L 54:				
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
	IF(R4==R3) GT(55);	//Jump if true
	R3=0;			//Set as False
	GT(56);	//Jump to end
L 55:				
	R3=1;			//Set as True
L 56:				
	// End of evaluation
	//Free R4
	//Right boolean already in R3
	//Left boolean already in R2
	R2=R2+R3;		//Evaluate expressions
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	//Free R2
	IF(R2==0) GT(57);	//Jump if 0
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
	R0=58;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 58:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(52);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 57:				
L 52:				
	// Close if statement 50
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
	P(R7)=59;			//Save return label
	GT(33);				//Jump to subprogram Termino
L 59:				
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
	// Open if block 58. Exit Label is: 60
STAT(18)			
	DAT(0x11fc2,U,'-');	//Literal ''-'', scope 1 
CODE(18)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fc2);		//Load value right expression result
	//Get R3
	R3=U(R6-8);		//Load value left expression result
	IF(R3==R2) GT(61);	//Jump if true
	R2=0;			//Set as False
	GT(62);	//Jump to end
L 61:				
	R2=1;			//Set as True
L 62:				
	// End of evaluation
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	//Free R2
	IF(R2==0) GT(63);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R2
	R2=I(R6+9);		//Load value right side (static)
	I(R6+9)=R2;		//Save value right side into variable
	//Free R2
	GT(60);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 63:				
L 60:				
	// Close if statement 58
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:64
L 64:				
STAT(19)			
	DAT(0x11fc1,U,'+');	//Literal ''+'', scope 1 
CODE(19)			
	//////////////////////////////////
	// Relation evaluation
	//Get R2
	R2=U(0x11fc1);		//Load value right expression result
	//Get R3
	R3=U(R6+8);		//Load value left expression result
	IF(R3==R2) GT(66);	//Jump if true
	R2=0;			//Set as False
	GT(67);	//Jump to end
L 66:				
	R2=1;			//Set as True
L 67:				
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
	IF(R4==R3) GT(68);	//Jump if true
	R3=0;			//Set as False
	GT(69);	//Jump to end
L 68:				
	R3=1;			//Set as True
L 69:				
	// End of evaluation
	//Free R4
	//Right boolean already in R3
	//Left boolean already in R2
	R2=R2+R3;		//Evaluate expressions
	//Free R3
	//////////////////////////////////
	// Evaluate while loop -> L:64
	IF(R2==0) GT(65);	//Jump if 0
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
	R0=70;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 70:				
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
	P(R7)=71;			//Save return label
	GT(33);				//Jump to subprogram Termino
L 71:				
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
	//////////////////////////////////
	// Open if block 70. Exit Label is: 72
STAT(21)			
	DAT(0x11fbf,U,'+');	//Literal ''+'', scope 1 
CODE(21)			
	//////////////////////////////////
	// Relation evaluation
	//Get R3
	R3=U(0x11fbf);		//Load value right expression result
	//Get R4
	R4=U(R6-8);		//Load value left expression result
	IF(R4==R3) GT(73);	//Jump if true
	R3=0;			//Set as False
	GT(74);	//Jump to end
L 73:				
	R3=1;			//Set as True
L 74:				
	// End of evaluation
	//Free R4
	//////////////////////////////////
	// Evaluate if block 
	//Free R3
	IF(R3==0) GT(75);	//Jump if 0
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
	GT(72);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 75:				
L 72:				
	// Close if statement 70
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 74. Exit Label is: 76
STAT(22)			
	DAT(0x11fbe,U,'-');	//Literal ''-'', scope 1 
CODE(22)			
	//////////////////////////////////
	// Relation evaluation
	//Get R3
	R3=U(0x11fbe);		//Load value right expression result
	//Get R4
	R4=U(R6-8);		//Load value left expression result
	IF(R4==R3) GT(77);	//Jump if true
	R3=0;			//Set as False
	GT(78);	//Jump to end
L 77:				
	R3=1;			//Set as True
L 78:				
	// End of evaluation
	//Free R4
	//////////////////////////////////
	// Evaluate if block 
	//Free R3
	IF(R3==0) GT(79);	//Jump if 0
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
	GT(76);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 79:				
L 76:				
	// Close if statement 74
	//////////////////////////////////
	GT(64);			//Evaluate loop again
	// Close while loop -> L:64
	//////////////////////////////////
L 65:				//Exit while loop
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
	// Open while loop -> L:80
L 80:				
STAT(25)			
	DAT(0x11fb7,U,'n');	//Literal ''n'', scope 0 
CODE(25)			
	//////////////////////////////////
	// Relation evaluation
	//Get R3
	R3=U(0x11fb7);		//Load value right expression result
	//Get R4
	R4=U(0x11fbd);		//Load value left expression result
	IF(R4!=R3) GT(82);	//Jump if true
	R3=0;			//Set as False
	GT(83);	//Jump to end
L 82:				
	R3=1;			//Set as True
L 83:				
	// End of evaluation
	//Free R4
	//////////////////////////////////
	// Evaluate while loop -> L:80
	IF(R3==0) GT(81);	//Jump if 0
STAT(26)			
	STR(0x11fa1, "Put your expression: ");			
CODE(26)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=84;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fa1;			//String literal address
	GT(putfs_);			//Print string literal
L 84:				
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
	R0=85;			//Return label
	R2=0x11fbd;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 85:				
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
	P(R7)=86;			//Save return label
	GT(51);				//Jump to subprogram Expresion
L 86:				
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
STAT(27)			
	STR(0x11f95, "Result is: ");			
CODE(27)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=87;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f95;			//String literal address
	GT(putfs_);			//Print string literal
L 87:				
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
	R0=88;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11fb9);		//Static variable value
	GT(putfi_);			//Print variable
L 88:				
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
	R0=89;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 89:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(28)			
	STR(0x11f7e, "New expression?(y/n): ");			
CODE(28)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=90;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f7e;			//String literal address
	GT(putfs_);			//Print string literal
L 90:				
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
	R0=91;			//Return label
	R2=0x11fbd;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 91:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	GT(80);			//Evaluate loop again
	// Close while loop -> L:80
	//////////////////////////////////
L 81:				//Exit while loop
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
