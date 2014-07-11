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
L 2:				
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
	R0=3;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fd0;			//String literal address
	GT(putfs_);			//Print string literal
L 3:				
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
L 4:				
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
	// Open if block 3. Exit Label is: 5
STAT(3)			
	DAT(0x11fc8,U,'0');	//Literal ''0'', scope 1 
CODE(3)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fc8);		//Load value right expression result
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
	DAT(0x11fc4,U,'9');	//Literal ''9'', scope 1 
CODE(4)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fc4);		//Load value right expression result
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
	R7=R7-8;			//Reserve params space : 0
	P(R7+4)=R6;			//Save active base
	P(R7)=11;			//Save return label
	GT(2);				//Jump to subprogram Error
L 11:				
	R6=P(R7+4);			//Recover active base
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
STAT(5)			
	STR(0x11fba, "Numero: '");			
CODE(5)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=12;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fba;			//String literal address
	GT(putfs_);			//Print string literal
L 12:				
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
	R0=13;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 13:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
	//////////////////////////////////
STAT(6)			
	STR(0x11fb6, "'\n");			
CODE(6)			
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
	R2=0x11fb6;			//String literal address
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
	GT(5);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 10:				
L 5:				
	// Close if statement 3
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:15
L 15:				
STAT(7)			
	DAT(0x11fb2,U,'0');	//Literal ''0'', scope 1 
CODE(7)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fb2);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1>R0) GT(17);	//Jump if true
	R0=0;			//Set as False
	GT(18);	//Jump to end
L 17:				
	R0=1;			//Set as True
L 18:				
	// End of evaluation
	//Free R1
STAT(8)			
	DAT(0x11fae,U,'9');	//Literal ''9'', scope 1 
CODE(8)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fae);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2<R1) GT(19);	//Jump if true
	R1=0;			//Set as False
	GT(20);	//Jump to end
L 19:				
	R1=1;			//Set as True
L 20:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0*R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:15
	//Free R0
	IF(R0==0) GT(16);	//Jump if 0
STAT(9)			
	DAT(0x11faa,I,10);	//Literal '10', scope 1 
CODE(9)			
	//////////////////////////////////
	// Multilply factors
	//Get R0
	R0=I(R6+12);		//Load value right factor
	//Get R1
	R1=I(0x11faa);		//Load value left factor
	R0=R1*R0;		//Multiply factors
	//Free R1
	//////////////////////////////////
	// Add terms
	//Get R1
	R1=U(R6+8);		//Load value right term
	//Left term already in R0
	R0=R0+R1;		//Add terms
	//Free R1
STAT(10)			
	DAT(0x11fa6,U,'0');	//Literal ''0'', scope 1 
CODE(10)			
	//////////////////////////////////
	// Add terms
	//Get R1
	R1=U(0x11fa6);		//Load value right term
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
	GT(15);			//Evaluate loop again
	// Close while loop -> L:15
	//////////////////////////////////
L 16:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Numero 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Factor 
L 22:				
	R6=R7;				//New base
	R7=R7-0;			//Reserve space for local variables
	//////////////////////////////////
	// Open if block 21. Exit Label is: 23
STAT(11)			
	DAT(0x11fa2,U,'(');	//Literal ''('', scope 1 
CODE(11)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fa2);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(24);	//Jump if true
	R0=0;			//Set as False
	GT(25);	//Jump to end
L 24:				
	R0=1;			//Set as True
L 25:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(26);	//Jump if 0
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
	//////////////////////////////////
	// Start procedure call Expresion 
	R7=R7-16;			//Reserve params space : 8
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=28;			//Save return label
	GT(1);				//Jump to subprogram Expresion
L 28:				
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
	// End procedure call Expresion 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 27. Exit Label is: 29
STAT(12)			
	DAT(0x11f9e,U,')');	//Literal '')'', scope 1 
CODE(12)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f9e);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(30);	//Jump if true
	R0=0;			//Set as False
	GT(31);	//Jump to end
L 30:				
	R0=1;			//Set as True
L 31:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(32);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=33;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 33:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(29);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 32:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space : 0
	P(R7+4)=R6;			//Save active base
	P(R7)=34;			//Save return label
	GT(2);				//Jump to subprogram Error
L 34:				
	R6=P(R7+4);			//Recover active base
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
STAT(13)			
	STR(0x11f94, "Factor: '");			
CODE(13)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=35;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f94;			//String literal address
	GT(putfs_);			//Print string literal
L 35:				
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
	R0=36;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 36:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
	//////////////////////////////////
STAT(14)			
	STR(0x11f90, "'\n");			
CODE(14)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=37;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f90;			//String literal address
	GT(putfs_);			//Print string literal
L 37:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
L 29:				
	// Close if statement 27
	//////////////////////////////////
	GT(23);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 26:				
	//////////////////////////////////
	// Open else block 
	//////////////////////////////////
	// Start procedure call Numero 
	R7=R7-16;			//Reserve params space : 8
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=38;			//Save return label
	GT(4);				//Jump to subprogram Numero
L 38:				
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
L 23:				
	// Close if statement 21
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Termino 
L 39:				
	R6=R7;				//New base
	R7=R7-8;			//Reserve space for local variables
	//////////////////////////////////
	// Start procedure call Factor 
	R7=R7-16;			//Reserve params space : 8
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=40;			//Save return label
	GT(22);				//Jump to subprogram Factor
L 40:				
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
	// Open while loop -> L:41
L 41:				
STAT(15)			
	DAT(0x11f8c,U,'*');	//Literal ''*'', scope 1 
CODE(15)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f8c);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(43);	//Jump if true
	R0=0;			//Set as False
	GT(44);	//Jump to end
L 43:				
	R0=1;			//Set as True
L 44:				
	// End of evaluation
	//Free R1
STAT(16)			
	DAT(0x11f88,U,'/');	//Literal ''/'', scope 1 
CODE(16)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f88);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(45);	//Jump if true
	R1=0;			//Set as False
	GT(46);	//Jump to end
L 45:				
	R1=1;			//Set as True
L 46:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:41
	//Free R0
	IF(R0==0) GT(42);	//Jump if 0
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
	R0=47;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 47:				
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
	R7=R7-16;			//Reserve params space : 8
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=48;			//Save return label
	GT(22);				//Jump to subprogram Factor
L 48:				
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
	// Open if block 47. Exit Label is: 49
STAT(17)			
	DAT(0x11f84,U,'*');	//Literal ''*'', scope 1 
CODE(17)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f84);		//Load value right expression result
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
	R0=R1*R0;		//Multiply factors
	//Free R1
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	GT(49);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 52:				
	//////////////////////////////////
	// Open elsif block. Exit Label is: 143599184
STAT(18)			
	DAT(0x11f80,U,'/');	//Literal ''/'', scope 1 
CODE(18)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f80);		//Load value right expression result
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
	GT(49);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 55:				
L 49:				
	// Close if statement 47
	//////////////////////////////////
	GT(41);			//Evaluate loop again
	// Close while loop -> L:41
	//////////////////////////////////
L 42:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Expresion 
L 1:				
	R6=R7;				//New base
	R7=R7-8;			//Reserve space for local variables
	//////////////////////////////////
	// Open if block 54. Exit Label is: 56
STAT(19)			
	DAT(0x11f7c,U,'+');	//Literal ''+'', scope 1 
CODE(19)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f7c);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(57);	//Jump if true
	R0=0;			//Set as False
	GT(58);	//Jump to end
L 57:				
	R0=1;			//Set as True
L 58:				
	// End of evaluation
	//Free R1
STAT(20)			
	DAT(0x11f78,U,'-');	//Literal ''-'', scope 1 
CODE(20)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f78);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(59);	//Jump if true
	R1=0;			//Set as False
	GT(60);	//Jump to end
L 59:				
	R1=1;			//Set as True
L 60:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(61);	//Jump if 0
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
	R0=62;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 62:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	GT(56);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 61:				
L 56:				
	// Close if statement 54
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Termino 
	R7=R7-16;			//Reserve params space : 8
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=63;			//Save return label
	GT(39);				//Jump to subprogram Termino
L 63:				
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
	// Open if block 62. Exit Label is: 64
STAT(21)			
	DAT(0x11f74,U,'-');	//Literal ''-'', scope 1 
CODE(21)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f74);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(65);	//Jump if true
	R0=0;			//Set as False
	GT(66);	//Jump to end
L 65:				
	R0=1;			//Set as True
L 66:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(67);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(R6+12);		//Load value right side (static)
	I(R6+12)=R0;		//Save value right side into variable
	//Free R0
	GT(64);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 67:				
L 64:				
	// Close if statement 62
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:68
L 68:				
STAT(22)			
	DAT(0x11f70,U,'+');	//Literal ''+'', scope 1 
CODE(22)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f70);		//Load value right expression result
	//Get R1
	R1=U(R6+8);		//Load value left expression result
	IF(R1==R0) GT(70);	//Jump if true
	R0=0;			//Set as False
	GT(71);	//Jump to end
L 70:				
	R0=1;			//Set as True
L 71:				
	// End of evaluation
	//Free R1
STAT(23)			
	DAT(0x11f6c,U,'-');	//Literal ''-'', scope 1 
CODE(23)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11f6c);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(72);	//Jump if true
	R1=0;			//Set as False
	GT(73);	//Jump to end
L 72:				
	R1=1;			//Set as True
L 73:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:68
	//Free R0
	IF(R0==0) GT(69);	//Jump if 0
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
	R0=74;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 74:				
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
	R7=R7-16;			//Reserve params space : 8
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=75;			//Save return label
	GT(39);				//Jump to subprogram Termino
L 75:				
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
	// Open if block 74. Exit Label is: 76
STAT(24)			
	DAT(0x11f68,U,'+');	//Literal ''+'', scope 1 
CODE(24)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f68);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(77);	//Jump if true
	R0=0;			//Set as False
	GT(78);	//Jump to end
L 77:				
	R0=1;			//Set as True
L 78:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(79);	//Jump if 0
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
	GT(76);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 79:				
L 76:				
	// Close if statement 74
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 78. Exit Label is: 80
STAT(25)			
	DAT(0x11f64,U,'-');	//Literal ''-'', scope 1 
CODE(25)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f64);		//Load value right expression result
	//Get R1
	R1=U(R6-4);		//Load value left expression result
	IF(R1==R0) GT(81);	//Jump if true
	R0=0;			//Set as False
	GT(82);	//Jump to end
L 81:				
	R0=1;			//Set as True
L 82:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(83);	//Jump if 0
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
	GT(80);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 83:				
L 80:				
	// Close if statement 78
	//////////////////////////////////
	GT(68);			//Evaluate loop again
	// Close while loop -> L:68
	//////////////////////////////////
L 69:				//Exit while loop
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Expresion 
	//////////////////////////////////
STAT(26)			
	DAT(0x11f60,U,0);	//Var 'n', scope 0 
	DAT(0x11f5c,U,0);	//Var 'c', scope 0 
	DAT(0x11f58,I,0);	//Var 'resultado', scope 0 
CODE(26)
L 0:
	R6=R7;			//Initialize R6
STAT(27)			
	DAT(0x11f54,U,'y');	//Literal ''y'', scope 0 
CODE(27)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R0
	R0=U(0x11f54);		//Load value right side (static)
	U(0x11f5c)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open while loop -> L:84
L 84:				
STAT(28)			
	DAT(0x11f50,U,'n');	//Literal ''n'', scope 0 
CODE(28)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f50);		//Load value right expression result
	//Get R1
	R1=U(0x11f5c);		//Load value left expression result
	IF(R1!=R0) GT(86);	//Jump if true
	R0=0;			//Set as False
	GT(87);	//Jump to end
L 86:				
	R0=1;			//Set as True
L 87:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:84
	//Free R0
	IF(R0==0) GT(85);	//Jump if 0
STAT(29)			
	STR(0x11f3a, "Put your expression: ");			
CODE(29)			
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
	R2=0x11f3a;			//String literal address
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
	R2=0x11f5c;		//Variable address
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
	//////////////////////////////////
	// Start procedure call Expresion 
	R7=R7-16;			//Reserve params space : 8
	//Get R0
	R0=U(0x11f5c);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 4 address
	P(R7+4)=R6;			//Save active base
	P(R7)=90;			//Save return label
	GT(1);				//Jump to subprogram Expresion
L 90:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(0x11f5c)=R0;		//Save variable 'c' value
	//Free R0
	//Get R0
	R0=I(R7+12);			//Get value parameter 2
	I(0x11f58)=R0;		//Save variable 'resultado' value
	//Free R0
	R7=R7+16;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
STAT(30)			
	STR(0x11f2e, "Result is: ");			
CODE(30)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=91;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f2e;			//String literal address
	GT(putfs_);			//Print string literal
L 91:				
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
	R0=92;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11f58);		//Static variable value
	GT(putfi_);			//Print variable
L 92:				
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
	R0=93;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 93:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(31)			
	STR(0x11f17, "New expression?(y/n): ");			
CODE(31)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=94;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f17;			//String literal address
	GT(putfs_);			//Print string literal
L 94:				
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
	R0=95;			//Return label
	R2=0x11f5c;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 95:				
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
	R0=96;			//Return label
	R2=0x11f60;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 96:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'n', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Open while loop -> L:97
L 97:				
STAT(32)			
	DAT(0x11f13,U,';');	//Literal '';'', scope 0 
CODE(32)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11f13);		//Load value right expression result
	//Get R1
	R1=U(0x11f60);		//Load value left expression result
	IF(R1!=R0) GT(99);	//Jump if true
	R0=0;			//Set as False
	GT(100);	//Jump to end
L 99:				
	R0=1;			//Set as True
L 100:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:97
	//Free R0
	IF(R0==0) GT(98);	//Jump if 0
	//////////////////////////////////
	// Get variable 'n', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=101;			//Return label
	R2=0x11f60;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 101:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'n', scope 0
	//////////////////////////////////
	GT(97);			//Evaluate loop again
	// Close while loop -> L:97
	//////////////////////////////////
L 98:				//Exit while loop
	//////////////////////////////////
	// Get variable 'n', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=102;			//Return label
	R2=0x11f60;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 102:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'n', scope 0
	//////////////////////////////////
	GT(84);			//Evaluate loop again
	// Close while loop -> L:84
	//////////////////////////////////
L 85:				//Exit while loop
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
