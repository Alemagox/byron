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
	//Free R0
	IF(R0==0) GT(13);	//Jump if 0
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
	I(R6+9)=R0;		//Save value right side into variable
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
	// Start procedure Expresion 
L 19:				
	R6=R7;				//New base
	R7=R7-5;			//Reserve space for local variables
	//////////////////////////////////
	// Open if block 18. Exit Label is: 20
STAT(9)			
	DAT(0x11fce,U,'+');	//Literal ''+'', scope 1 
CODE(9)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fce);		//Load value right expression result
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
STAT(10)			
	DAT(0x11fcd,U,'-');	//Literal ''-'', scope 1 
CODE(10)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fcd);		//Load value right expression result
	//Get R2
	R2=U(R6+8);		//Load value left expression result
	IF(R2==R1) GT(23);	//Jump if true
	R1=0;			//Set as False
	GT(24);	//Jump to end
L 23:				
	R1=1;			//Set as True
L 24:				
	// End of evaluation
	//Free R2
	//Right boolean already in R1
	//Left boolean already in R0
	R0=R0+R1;		//Evaluate expressions
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(25);	//Jump if 0
STAT(11)			
	STR(0x11fc7, "Op is");			
CODE(11)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=26;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fc7;			//String literal address
	GT(putfs_);			//Print string literal
L 26:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Assignment to variable 'op', scope 1
	//Get R0
	R0=U(R6+8);		//Load value right side (static)
	U(R6-8)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Print variable 'op', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=27;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6-8);		//Static variable value
	GT(putfi_);			//Print variable
L 27:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'op', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Print variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=28;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);		//Static variable value
	GT(putfi_);			//Print variable
L 28:				
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
	R0=29;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 29:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
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
	GT(20);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 25:				
L 20:				
	// Close if statement 18
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Numero 
	R7=R7-13;			//Reserve params space
	//Get R0
	R0=U(R6+8);		//Load variable 'c' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=31;			//Save return label
	GT(4);				//Jump to subprogram Numero
L 31:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(R6+8)=R0;		//Save variable 'c' value
	//Free R0
	//Get R0
	R0=I(R7+9);			//Get value parameter 2
	I(R6+9)=R0;		//Save variable 'resultado' value
	//Free R0
	R7=R7+13;			//Free params space
	// End procedure call Numero 
	//////////////////////////////////
	//////////////////////////////////
	// Open if block 30. Exit Label is: 32
STAT(12)			
	DAT(0x11fc6,U,'-');	//Literal ''-'', scope 1 
CODE(12)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fc6);		//Load value right expression result
	//Get R1
	R1=U(R6-8);		//Load value left expression result
	IF(R1==R0) GT(33);	//Jump if true
	R0=0;			//Set as False
	GT(34);	//Jump to end
L 33:				
	R0=1;			//Set as True
L 34:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate if block 
	//Free R0
	IF(R0==0) GT(35);	//Jump if 0
	//////////////////////////////////
	// Assignment to variable 'resultado', scope 1
	//Get R0
	R0=I(R6+9);		//Load value right side (static)
	I(R6+9)=R0;		//Save value right side into variable
	//Free R0
	GT(32);// Jump out of if statement 
	// Close if block 
	//////////////////////////////////
L 35:				
L 32:				
	// Close if statement 30
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7);			//Get return label
	GT(R6);				//Return!
	// End procedure Expresion 
	//////////////////////////////////
STAT(13)			
	DAT(0x11fc5,U,0);	//Var 'c', scope 0 
	DAT(0x11fc4,U,0);	//Var 'n', scope 0 
	DAT(0x11fc0,I,0);	//Var 'res', scope 0 
CODE(13)
L 0:
	R6=R7;			//Initialize R6
STAT(14)			
	DAT(0x11fbf,U,'y');	//Literal ''y'', scope 0 
CODE(14)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R0
	R0=U(0x11fbf);		//Load value right side (static)
	U(0x11fc5)=R0;		//Save value right side into variable
	//Free R0
	//////////////////////////////////
	// Open while loop -> L:36
L 36:				
STAT(15)			
	DAT(0x11fbe,U,'n');	//Literal ''n'', scope 0 
CODE(15)			
	//////////////////////////////////
	// Relation evaluation
	//Get R0
	R0=U(0x11fbe);		//Load value right expression result
	//Get R1
	R1=U(0x11fc5);		//Load value left expression result
	IF(R1!=R0) GT(38);	//Jump if true
	R0=0;			//Set as False
	GT(39);	//Jump to end
L 38:				
	R0=1;			//Set as True
L 39:				
	// End of evaluation
	//Free R1
	//////////////////////////////////
	// Evaluate while loop -> L:36
	//Free R0
	IF(R0==0) GT(37);	//Jump if 0
STAT(16)			
	STR(0x11fa9, "La bola de cristal: ");			
CODE(16)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=40;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fa9;			//String literal address
	GT(putfs_);			//Print string literal
L 40:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'n', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=41;			//Return label
	R2=0x11fc4;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 41:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'n', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Expresion 
	R7=R7-13;			//Reserve params space
	//Get R0
	R0=U(0x11fc4);		//Load variable 'n' value
	//Free R0
	U(R7+8)=R0;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=42;			//Save return label
	GT(19);				//Jump to subprogram Expresion
L 42:				
	R6=P(R7+4);			//Recover active base
	//Get R0
	R0=U(R7+8);			//Get value parameter 1
	U(0x11fc4)=R0;		//Save variable 'n' value
	//Free R0
	//Get R0
	R0=I(R7+9);			//Get value parameter 2
	I(0x11fc0)=R0;		//Save variable 'res' value
	//Free R0
	R7=R7+13;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
STAT(17)			
	STR(0x11f9d, "Resultado: ");			
CODE(17)			
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
	R2=0x11f9d;			//String literal address
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
	// Print variable 'res', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=44;				//Return label
	R1=0x11ffa;			//Format int address
	R2=I(0x11fc0);		//Static variable value
	GT(putfi_);			//Print variable
L 44:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'res', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=45;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 45:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
STAT(18)			
	STR(0x11f93, "Put y: \n");			
CODE(18)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=46;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11f93;			//String literal address
	GT(putfs_);			//Print string literal
L 46:				
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
	R0=47;			//Return label
	R2=0x11fc5;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 47:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 0
	//////////////////////////////////
	//////////////////////////////////
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=48;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 48:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'n', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=49;			//Return label
	R2=0x11fc4;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 49:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'n', scope 0
	//////////////////////////////////
	GT(36);			//Evaluate loop again
	// Close while loop -> L:36
	//////////////////////////////////
L 37:				//Exit while loop
STAT(19)			
	STR(0x11f90, "Ok");			
CODE(19)			
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
	R2=0x11f90;			//String literal address
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
	// Print New_Line
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R0=51;				//Return label
	R1=0x11fee;			//Format New_Line address
	GT(putnl_);			//Print variable
L 51:				
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of New_Line
	//////////////////////////////////
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
