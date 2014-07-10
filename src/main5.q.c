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
	R7=R7-5;			//Reserve space for local variables
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
	// Close if block 
L 4:				
	//////////////////////////////////
	// Open while loop -> L:9
L 9:				
STAT(5)			
	DAT(0x11fd5,U,'1');	//Literal ''1'', scope 1 
CODE(5)			
	//////////////////////////////////
	// Evaluate while loop -> L:9
	IF(R0==0) GT(10);	//Jump if 0
	//////////////////////////////////
	// Start procedure call Error 
	R7=R7-8;			//Reserve params space
	P(R7+4)=R6;			//Save active base
	P(R7)=11;			//Save return label
	GT(1);				//Jump to subprogram Error
L 11:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	R7=R7+8;			//Free params space
	// End procedure call Error 
	//////////////////////////////////
	//////////////////////////////////
	// Get variable 'c', scope 1
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=12;			//Return label
	R2=R6+8;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 12:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Get variable 'c', scope 1
	//////////////////////////////////
	//////////////////////////////////
	// Close while loop -> L:9
	GT(9);			//Evaluate loop again
L 10:				//Exit while loop
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
L 13:				
	R6=R7;				//New base
	R7=R7-0;			//Reserve space for local variables
	//////////////////////////////////
	// Start procedure call Numero 
	R7=R7-13;			//Reserve params space
	//Get R1
	R1=U(R6+8);			//Local variable value
	//Free R1
	U(R7+8)=R1;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=14;			//Save return label
	GT(3);				//Jump to subprogram Numero
L 14:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	//Get R1
	R1=U(R7+8);			//Get value parameter 1
	U(R6+8)=R1;			//Local variable value
	//Free R1
	//Get R1
	R1=I(R7+9);			//Get value parameter 2
	I(R6+9)=R1;			//Local variable value
	//Free R1
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
L 15:				
	R6=R7;				//New base
	R7=R7-5;			//Reserve space for local variables
	//////////////////////////////////
	// Start procedure call Factor 
	R7=R7-13;			//Reserve params space
	//Get R1
	R1=U(R6+8);			//Local variable value
	//Free R1
	U(R7+8)=R1;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=16;			//Save return label
	GT(13);				//Jump to subprogram Factor
L 16:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	//Get R1
	R1=U(R7+8);			//Get value parameter 1
	U(R6+8)=R1;			//Local variable value
	//Free R1
	//Get R1
	R1=I(R7+9);			//Get value parameter 2
	I(R6+9)=R1;			//Local variable value
	//Free R1
	R7=R7+13;			//Free params space
	// End procedure call Factor 
	//////////////////////////////////
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
L 17:				
	R6=R7;				//New base
	R7=R7-5;			//Reserve space for local variables
STAT(6)			
	STR(0x11fd3, "-");			
CODE(6)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=18;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fd3;			//String literal address
	GT(putfs_);			//Print string literal
L 18:				
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
	R0=19;				//Return label
	R1=0x11ff7;			//Format char address
	R2=U(R6+8);			//Local variable value wuuut : 0
	GT(putfi_);			//Print variable
L 19:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print variable 'c', scope 1
	//////////////////////////////////
STAT(7)			
	STR(0x11fd1, "-");			
CODE(7)			
	/////////////////////////
	// Print string literal
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=20;				//Return label
	R1=0x11ffd;			//Format string address
	R2=0x11fd1;			//String literal address
	GT(putfs_);			//Print string literal
L 20:				
	R2=I(R7);			//R2 recovered
	R7=R7+4;			//Free space for register R2
	R1=I(R7);			//R1 recovered
	R7=R7+4;			//Free space for register R1
	R0=I(R7);			//R0 recovered
	R7=R7+4;			//Free space for register R0
	// End of Print string literal
	//////////////////////////////////
	//////////////////////////////////
	// Start procedure call Termino 
	R7=R7-13;			//Reserve params space
	//Get R1
	R1=U(R6+8);			//Local variable value
	//Free R1
	U(R7+8)=R1;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=21;			//Save return label
	GT(15);				//Jump to subprogram Termino
L 21:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	//Get R1
	R1=U(R7+8);			//Get value parameter 1
	U(R6+8)=R1;			//Local variable value
	//Free R1
	//Get R1
	R1=I(R7+9);			//Get value parameter 2
	I(R6+9)=R1;			//Local variable value
	//Free R1
	R7=R7+13;			//Free params space
	// End procedure call Termino 
	//////////////////////////////////
	R7=R6;				//Free local variables
	R6=P(R7+4);			//Recover base
	R7=R7-4;			//Save space for register R5
	I(R7)=R5;			//R5 saved
	R5=P(R7+4);			//Get return label
	GT(R5);				//Return!
	// End procedure Expresion 
	//////////////////////////////////
STAT(8)			
	DAT(0x11fd0,U,0);	//Var 'c', scope 0 
	DAT(0x11fcc,I,0);	//Var 'resultado', scope 0 
CODE(8)
L 0:
	R6=R7;			//Initialize R6
STAT(9)			
	DAT(0x11fcb,U,'y');	//Literal ''y'', scope 0 
CODE(9)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	//Get R1
	R1=U(0x11fcb);		//Load value right side (static)
	U(0x11fd0)=R1;		//Save value right side into variable (static)
	//Free R1
	//////////////////////////////////
	// Open while loop -> L:22
L 22:				
STAT(10)			
	DAT(0x11fca,U,'n');	//Literal ''n'', scope 0 
CODE(10)			
	//////////////////////////////////
	// Relation evaluation
	//Get R1
	R1=U(0x11fca);		//Load value right expression result
	//Get R2
	R2=U(0x11fd0);		//Load value left expression result
	IF(R2!=R1) GT(24);	//Jump if true
	R1=0;			//Set as False
	GT(25);	//Jump to end
L 24:				
	R1=1;			//Set as True
L 25:				
	// End of evaluation
	//Free R2
	//////////////////////////////////
	// Evaluate while loop -> L:22
	IF(R1==0) GT(23);	//Jump if 0
	//////////////////////////////////
	// Get variable 'c', scope 0
	R7=R7-4;			//Save space for register R0
	I(R7)=R0;			//R0 saved
	R7=R7-4;			//Save space for register R1
	I(R7)=R1;			//R1 saved
	R7=R7-4;			//Save space for register R2
	I(R7)=R2;			//R2 saved
	R0=26;			//Return label
	R2=0x11fd0;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 26:				
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
	//Get R2
	R2=U(0x11fd0);		//Static variable value
	//Free R2
	U(R7+8)=R2;			//Pass value parameter 1
	//No need to pass value parameter 2. resultado is of out type. 1 address
	P(R7+4)=R6;			//Save active base
	P(R7)=27;			//Save return label
	GT(17);				//Jump to subprogram Expresion
L 27:				
	R5=I(R7);			//R5 recovered
	R7=R7+4;			//Free space for register R5
	//Get R2
	R2=U(R7+8);			//Get value parameter 1
	U(0x11fd0)=R2;		//Static variable value
	//Free R2
	//Get R2
	R2=I(R7+9);			//Get value parameter 2
	I(0x11fcc)=R2;		//Static variable value
	//Free R2
	R7=R7+13;			//Free params space
	// End procedure call Expresion 
	//////////////////////////////////
	//////////////////////////////////
	// Close while loop -> L:22
	GT(22);			//Evaluate loop again
L 23:				//Exit while loop
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
