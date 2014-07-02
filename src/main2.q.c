#include "Q.h"

BEGIN				//Start
STAT(0)			
	STR(0x11ffd,"%s");	//Format Put string 
	STR(0x11ffa,"%d");	//Format Put integer
	STR(0x11ff7,"%c");	//Format Put char
	STR(0x11ff4,"%d");	//Format Get integer
	STR(0x11ff1,"%c");	//Format Get char
	STR(0x11fee,"\n");	//Format New_Line
	DAT(0x11fea,I,0);	//Var 'i', scope 0 
	DAT(0x11fe9,U,0);	//Var 'c', scope 0 
CODE(0)
L 0:
STAT(1)			
	DAT(0x11fe5,I,2);	//Literal '2', scope 0 
	DAT(0x11fe1,I,12);	//Literal '12', scope 0 
CODE(1)			
	//////////////////////////////////
	// Multilply factors
	R0=I(0x11fe1);		//Load value right factor
	R1=I(0x11fe5);		//Load value left factor
	R0=R1*R0;		//Multiply factors
STAT(2)			
	DAT(0x11fdd,I,2);	//Literal '2', scope 0 
	DAT(0x11fd9,I,5);	//Literal '5', scope 0 
	DAT(0x11fd5,I,5);	//Literal '5', scope 0 
CODE(2)			
	//////////////////////////////////
	// Add terms
	R1=I(0x11fd5);		//Load value right term
	R2=I(0x11fd9);		//Load value left term
	R1=R2+R1;		//Add terms
	//////////////////////////////////
	// Multilply factors
	//Right factor already in R1
	R2=I(0x11fdd);		//Load value left factor
	R1=R2*R1;		//Multiply factors
STAT(3)			
	DAT(0x11fd1,I,2);	//Literal '2', scope 0 
	DAT(0x11fcd,I,1);	//Literal '1', scope 0 
CODE(3)			
	//////////////////////////////////
	// Add terms
	R2=I(0x11fcd);		//Load value right term
	R3=I(0x11fd1);		//Load value left term
	R2=R3-R2;		//Add terms
	//////////////////////////////////
	// Multilply factors
	//Right factor already in R2
	//Left factor already in R1
	R1=R1/R2;		//Multiply factors
	//////////////////////////////////
	// Add terms
	//Right factor already in R1
	//Left term already in R0
	R0=R0-R1;		//Add terms
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	R1=R0;		//Load value right side
	I(0x11fea)=R1;		//Save value right side into variable
	/////////////////////////
	// Print string literal
	R0=1;			//Return label
	R1=10;			//String length
	GT(new_);		//Assign heap space for string literal
L 1:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x52;		//'R'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x73;		//'s'
	R3=R3+1;		
	U(R3)=0x75;		//'u'
	R3=R3+1;		
	U(R3)=0x6c;		//'l'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x3d;		//'='
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x0;		//'\0'
	//Finished assigning string to heap
	R2=R0;			//String literal address
	R0=2;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 2:				
	R0=3;			//Return label
	R1=-9;			//String length
	GT(free_);		//Free heap space for string literal
L 3:				
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=4;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 4:				
	//////////////////////////////////
	// Print New_Line
	R0=5;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 5:				
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
