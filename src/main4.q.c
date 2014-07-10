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
	//////////////////////////////////
	// Close if block 
L 5:				
	//////////////////////////////////
	// Open while loop -> L:11
L 11:				
STAT(5)			
	DAT(0x11fd5,U,'0');	//Literal ''0'', scope 1 
CODE(5)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fd5);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2>R1) GT(13);	//Jump if true
	R1=0;			//Set as False
	GT(14);	//Jump to end
L 13:				
	R1=1;			//Set as True
L 14:				
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
	IF(R3<R2) GT(15);	//Jump if true
	R2=0;			//Set as False
	GT(16);	//Jump to end
L 15:				
	R2=1;			//Set as True
L 16:				
	// End of evaluation
	//Free R3
	//Right boolean already in R2
	//Left boolean already in R1
	R1=R1*R2;		//Evaluate expressions
	//Free R2
	//////////////////////////////////
	// Evaluate while loop -> L:11
	IF(R1==0) GT(12);	//Jump if 0
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
	IF(R3==R2) GT(20);	//Jump if true
	R2=0;			//Set as False
	GT(21);	//Jump to end
L 20:				
	R2=1;			//Set as True
L 21:				
	// End of evaluation
	//Free R3
	//////////////////////////////////
	// Evaluate if block 
	IF(R2==0) GT(19);	//Jump if 0
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
	//Get R3
	R3=U(R6+8);			//Local variable value
	//Free R3
	U(R7+8)=R3;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 0 address
	P(R7+4)=R6;			//Save active base
	P(R7)=23;			//Save return label
	GT(0);				//Jump to subprogram Expresion
L 23:				
	R6=P(R7+4);			//Recover active base
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
	IF(R4==R3) GT(25);	//Jump if true
	R3=0;			//Set as False
	GT(26);	//Jump to end
L 25:				
	R3=1;			//Set as True
L 26:				
	// End of evaluation
	//Free R4
	//////////////////////////////////
	// Evaluate if block 
	IF(R3==0) GT(24);	//Jump if 0
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
	// Close if block 
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
	//////////////////////////////////
	// Close if block 
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
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R4
	R4=U(R6+8);		//Load value right side (static)
	U(R6+8)=R4;		//Save value right side into variable (static)
	//Free R4
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=34;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 34:				
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
	//Get R4
	R4=U(R6+8);			//Local variable value
	//Free R4
	U(R7+8)=R4;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=35;			//Save return label
	GT(18);				//Jump to subprogram Factor
L 35:				
	R6=P(R7+4);			//Recover active base
	//Get R4
	R4=U(R7+8);			//Get value parameter 1
	U(R6+8)=R4;			//Local variable value
	//Free R4
	//Get R4
	R4=I(R7+9);			//Get value parameter 2
	I(R6+8)=R4;			//Local variable value
	//Free R4
	R7=R7+13;			//Free params space
	// End procedure call Factor 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 
STAT(13)			
	DAT(0x11fba,U,'*');	//Literal ''*'', scope 1 
CODE(13)			
	//////////////////////////////////
	// Relation evaluation
	//Get R4
	R4=U(0x11fba);		//Load value right expression result
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
	//////////////////////////////////
	// Evaluate if block 
	IF(R4==0) GT(36);	//Jump if 0
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
	//////////////////////////////////
	// Close if block 
L 36:				
	//////////////////////////////////
	// Open if block 
STAT(14)			
	DAT(0x11fb9,U,'/');	//Literal ''/'', scope 1 
CODE(14)			
	//////////////////////////////////
	// Relation evaluation
	//Get R5
	R5=U(0x11fb9);		//Load value right expression result
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(R6+8);		//Load value left expression result
	IF(R0==R5) GT(40);	//Jump if true
	R5=0;			//Set as False
	GT(41);	//Jump to end
L 40:				
	R5=1;			//Set as True
L 41:				
	// End of evaluation
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	//////////////////////////////////
	// Evaluate if block 
	IF(R5==0) GT(39);	//Jump if 0
	//////////////////////////////////
	// Multilply factors
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=I(R6+8);		//Load value right factor
	//Get R1
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R1=I(R6+9);		//Load value left factor
	R0=R1/R0;		//Multiply factors
	//Free R1
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	I(R6+9)=R0;		//Save value right side into variable (static)
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	//////////////////////////////////
	// Close if block 
L 39:				
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Termino 
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure Expresion 
L 42:				
	R6=R7;				//New base
	R7=R7-0;			//Reserve space for local variables
STAT(15)			
	STR(0x11fb7, "-");			
CODE(15)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=43;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fb7;			//String literal address
	GT(putfs_);			//Print string literal
L 43:				
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
	R0=44;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);			//Local variable value wuuut : 0
	GT(putfi_);			//Print variable
L 44:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
	//////////////////////////////////
STAT(16)			
	STR(0x11fb5, "-");			
CODE(16)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=45;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fb5;			//String literal address
	GT(putfs_);			//Print string literal
L 45:				
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
	// End procedure Expresion 
	//////////////////////////////////
STAT(17)			
	DAT(0x11fb4,U,0);	//Var 'c', scope 0 
	DAT(0x11fb0,I,0);	//Var 'resultado', scope 0 
CODE(17)
L 0:
	R6=R7;			//Initialize R6
STAT(18)			
	DAT(0x11faf,U,'y');	//Literal ''y'', scope 0 
CODE(18)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(0x11faf);		//Load value right side (static)
	U(0x11fb4)=R0;		//Save value right side into variable (static)
	//Free R0
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	//////////////////////////////////
	// Open while loop -> L:46
L 46:				
STAT(19)			
	DAT(0x11fae,U,'n');	//Literal ''n'', scope 0 
CODE(19)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R0=U(0x11fae);		//Load value right expression result
	//Get R1
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R1=U(0x11fb4);		//Load value left expression result
	IF(R1!=R0) GT(48);	//Jump if true
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
	// Evaluate while loop -> L:46
	IF(R0==0) GT(47);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=50;			//Return label
	R2=0x11fb4;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 50:				
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
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R1=U(0x11fb4);		//Static variable value
	//Free R1
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	U(R7+8)=R1;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=51;			//Save return label
	GT(42);				//Jump to subprogram Expresion
L 51:				
	R6=P(R7+4);			//Recover active base
	//Get R1
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R1=U(R7+8);			//Get value parameter 1
	U(0x11fb4)=R1;		//Static variable value
	//Free R1
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	//Get R1
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R1=I(R7+9);			//Get value parameter 2
	I(0x11fb0)=R1;		//Static variable value
	//Free R1
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R7=R7+13;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
	GT(46);			//Evaluate loop again
	// Close while loop -> L:46
	//////////////////////////////////
L 47:				//Exit while loop
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
