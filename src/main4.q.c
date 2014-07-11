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
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open if block 3. Exit Label is: 5
STAT(3)			
	DAT(0x11fd4,U,'0');	//Literal ''0'', scope 1 
CODE(3)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fd4);		//Load value right expression result
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
	DAT(0x11fd0,U,'9');	//Literal ''9'', scope 1 
CODE(4)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fd0);		//Load value right expression result
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
	DAT(0x11fcc,U,'0');	//Literal ''0'', scope 1 
CODE(5)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fcc);		//Load value right expression result
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
	DAT(0x11fc8,U,'9');	//Literal ''9'', scope 1 
CODE(6)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fc8);		//Load value right expression result
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
	//Free R0
	IF(R0==0) GT(13);	//Jump if 0
STAT(7)			
	DAT(0x11fc4,I,10);	//Literal '10', scope 1 
CODE(7)			
	//////////////////////////////////
	// Multilply factors
	//Get R0
	R0=I(R6+12);		//Load value right factor
	//Get R1
	R1=I(0x11fc4);		//Load value left factor
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
	DAT(0x11fc0,U,'0');	//Literal ''0'', scope 1 
CODE(8)			
	//////////////////////////////////
	// Add terms
	//Get R1
	R1=U(0x11fc0);		//Load value right term
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
	DAT(0x11fbc,I,0);	//Literal '0', scope 1 
CODE(9)			
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(0x11fbc);		//Load value right side (static)
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open if block 18. Exit Label is: 20
STAT(10)			
	DAT(0x11fb8,U,'(');	//Literal ''('', scope 1 
CODE(10)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fb8);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(21);	//Jump if true
	R0=0;			//Set as False
	GT(22);	//Jump to end
L 21:				
	R0=1;			//Set as True
L 22:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(23);	//Jump if 0
STAT(11)			
	STR(0x11fa7, "New expression\n");			
CODE(11)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=24;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fa7;			//String literal address
	GT(putfs_);			//Print string literal
L 24:				
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
	R0=25;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 25:				
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
	P(R7)=26;			//Save return label
	GT(0);				//Jump to subprogram Expresion
L 26:				
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
	// Open if block 25. Exit Label is: 27
STAT(12)			
	DAT(0x11fa3,U,')');	//Literal '')'', scope 1 
CODE(12)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fa3);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(28);	//Jump if true
	R0=0;			//Set as False
	GT(29);	//Jump to end
L 28:				
	R0=1;			//Set as True
L 29:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(30);	//Jump if 0
STAT(13)			
	STR(0x11f92, "Out expression\n");			
CODE(13)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=31;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f92;			//String literal address
	GT(putfs_);			//Print string literal
L 31:				
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
	GT(27);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 30:				
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
L 27:				
	// Close if statement 25
	//////////////////////////////////
	GT(20);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 23:				
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
	P(R7)=34;			//Save return label
	GT(4);				//Jump to subprogram Numero
L 34:				
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
L 35:				
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
	P(R7)=36;			//Save return label
	GT(19);				//Jump to subprogram Factor
L 36:				
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
	// Open while loop -> L:37
L 37:				
STAT(14)			
	DAT(0x11f8e,U,'*');	//Literal ''*'', scope 1 
CODE(14)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f8e);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(39);	//Jump if true
	R0=0;			//Set as False
	GT(40);	//Jump to end
L 39:				
	R0=1;			//Set as True
L 40:				
	// End of evaluation
	//Free R1
STAT(15)			
	DAT(0x11f8a,U,'/');	//Literal ''/'', scope 1 
CODE(15)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f8a);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(41);	//Jump if true
	R1=0;			//Set as False
	GT(42);	//Jump to end
L 41:				
	R1=1;			//Set as True
L 42:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:37
	//Free R0
	IF(R0==0) GT(38);	//Jump if 0
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
	R0=43;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 43:				
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
	P(R7)=44;			//Save return label
	GT(19);				//Jump to subprogram Factor
L 44:				
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
	// Open if block 43. Exit Label is: 45
STAT(16)			
	DAT(0x11f86,U,'*');	//Literal ''*'', scope 1 
CODE(16)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f86);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(46);	//Jump if true
	R0=0;			//Set as False
	GT(47);	//Jump to end
L 46:				
	R0=1;			//Set as True
L 47:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(48);	//Jump if 0
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
	GT(45);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 48:				
L 45:				
	// Close if statement 43
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 47. Exit Label is: 49
STAT(17)			
	DAT(0x11f82,U,'/');	//Literal ''/'', scope 1 
CODE(17)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f82);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(50);	//Jump if true
	R0=0;			//Set as False
	GT(51);	//Jump to end
L 50:				
	R0=1;			//Set as True
L 51:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(52);	//Jump if 0
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
	GT(49);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 52:				
L 49:				
	// Close if statement 47
	//////////////////////////////////
	GT(37);			//Evaluate loop again
	// Close while loop -> L:37
	//////////////////////////////////
L 38:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Expresion 
L 53:				
	R6=R7;				//New base
	R7=R7-8;			//Reserve space for local variables
	//////////////////////////////////
	// Open if block 52. Exit Label is: 54
STAT(18)			
	DAT(0x11f7e,U,'+');	//Literal ''+'', scope 1 
CODE(18)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f7e);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(55);	//Jump if true
	R0=0;			//Set as False
	GT(56);	//Jump to end
L 55:				
	R0=1;			//Set as True
L 56:				
	// End of evaluation
	//Free R1
STAT(19)			
	DAT(0x11f7a,U,'-');	//Literal ''-'', scope 1 
CODE(19)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f7a);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(57);	//Jump if true
	R1=0;			//Set as False
	GT(58);	//Jump to end
L 57:				
	R1=1;			//Set as True
L 58:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(59);	//Jump if 0
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
	R0=60;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 60:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(54);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 59:				
L 54:				
	// Close if statement 52
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=61;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 61:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
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
	P(R7)=62;			//Save return label
	GT(35);				//Jump to subprogram Termino
L 62:				
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
	// Open if block 61. Exit Label is: 63
STAT(20)			
	DAT(0x11f76,U,'-');	//Literal ''-'', scope 1 
CODE(20)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f76);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(64);	//Jump if true
	R0=0;			//Set as False
	GT(65);	//Jump to end
L 64:				
	R0=1;			//Set as True
L 65:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(66);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(R6+12);		//Load value right side (static)
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	GT(63);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 66:				
L 63:				
	// Close if statement 61
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:67
L 67:				
STAT(21)			
	DAT(0x11f72,U,'+');	//Literal ''+'', scope 1 
CODE(21)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f72);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(69);	//Jump if true
	R0=0;			//Set as False
	GT(70);	//Jump to end
L 69:				
	R0=1;			//Set as True
L 70:				
	// End of evaluation
	//Free R1
STAT(22)			
	DAT(0x11f6e,U,'-');	//Literal ''-'', scope 1 
CODE(22)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f6e);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(71);	//Jump if true
	R1=0;			//Set as False
	GT(72);	//Jump to end
L 71:				
	R1=1;			//Set as True
L 72:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:67
	//Free R0
	IF(R0==0) GT(68);	//Jump if 0
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
	R0=73;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 73:				
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
	P(R7)=74;			//Save return label
	GT(35);				//Jump to subprogram Termino
L 74:				
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
	// Open if block 73. Exit Label is: 75
STAT(23)			
	DAT(0x11f6a,U,'+');	//Literal ''+'', scope 1 
CODE(23)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f6a);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(76);	//Jump if true
	R0=0;			//Set as False
	GT(77);	//Jump to end
L 76:				
	R0=1;			//Set as True
L 77:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(78);	//Jump if 0
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
	GT(75);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 78:				
L 75:				
	// Close if statement 73
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 77. Exit Label is: 79
STAT(24)			
	DAT(0x11f66,U,'-');	//Literal ''-'', scope 1 
CODE(24)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f66);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(80);	//Jump if true
	R0=0;			//Set as False
	GT(81);	//Jump to end
L 80:				
	R0=1;			//Set as True
L 81:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(82);	//Jump if 0
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
	GT(79);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 82:				
L 79:				
	// Close if statement 77
	//////////////////////////////////
	GT(67);			//Evaluate loop again
	// Close while loop -> L:67
	//////////////////////////////////
L 68:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Expresion 
	//////////////////////////////////
STAT(25)			
	DAT(0x11f62,U,0);	//Var 'n', scope 0 
	DAT(0x11f5e,U,0);	//Var 'c', scope 0 
	DAT(0x11f5a,I,0);	//Var 'resultado', scope 0 
CODE(25)
L 0:
	R6=R7;			//Initialize R6
STAT(26)			
	DAT(0x11f56,U,'y');	//Literal ''y'', scope 0 
CODE(26)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R0
	R0=U(0x11f56);		//Load value right side (static)
	U(0x11f5e)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open while loop -> L:83
L 83:				
STAT(27)			
	DAT(0x11f52,U,'n');	//Literal ''n'', scope 0 
CODE(27)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f52);		//Load value right expression result
	//Get R1
	R1=U(0x11f5e);		//Load value left expression result
	IF(R1!=R0) GT(85);	//Jump if true
	R0=0;			//Set as False
	GT(86);	//Jump to end
L 85:				
	R0=1;			//Set as True
L 86:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:83
	//Free R0
	IF(R0==0) GT(84);	//Jump if 0
STAT(28)			
	STR(0x11f3c, "Put your expression: ");			
CODE(28)			
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
	R2=0x11f3c;			//String literal address
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
	// Get variable 'c', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=88;			//Return label
	R2=0x11f5e;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 88:				
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
	R0=U(0x11f5e);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=89;			//Save return label
	GT(53);				//Jump to subprogram Expresion
L 89:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(0x11f5e)=R0;		//Save variable 'c' value
	//Free R0
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(0x11f5a)=R0;		//Save variable 'resultado' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
STAT(29)			
	STR(0x11f30, "Result is: ");			
CODE(29)			
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
	R2=0x11f30;			//String literal address
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
	// Print variable 'resultado', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=91;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11f5a);		//Static variable value
	GT(putfi_);			//Print variable
L 91:				
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
	R0=92;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 92:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(30)			
	STR(0x11f19, "New expression?(y/n): ");			
CODE(30)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=93;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f19;			//String literal address
	GT(putfs_);			//Print string literal
L 93:				
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
	R0=94;			//Return label
	R2=0x11f5e;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 94:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	GT(83);			//Evaluate loop again
	// Close while loop -> L:83
	//////////////////////////////////
L 84:				//Exit while loop
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
