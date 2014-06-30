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
	DAT(0x11fe5,I,90);	//Literal '90', scope 0 
	DAT(0x11fe1,I,7);	//Literal '7', scope 0 
CODE(1)			
	//////////////////////////////////
	// Add terms
	R1=I(0x11fe1);		//Load value right term
	R0=I(0x11fe5);		//Load value left term
	R0=R0-R1;		//Add terms
STAT(2)			
	DAT(0x11fdd,I,1);	//Literal '1', scope 0 
CODE(2)			
	//////////////////////////////////
	// Add terms
	R1=I(0x11fdd);		//Load value right term
	R0=R0+R1;		//Add terms
STAT(3)			
	DAT(0x11fd9,I,2);	//Literal '2', scope 0 
CODE(3)			
	//////////////////////////////////
	// Add terms
	R1=I(0x11fd9);		//Load value right term
	R0=R0+R1;		//Add terms
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	R1=R0;		//Load value right side
	I(0x11fea)=R1;		//Save value right side into variable
	/////////////////////////
	// Print string literal
	R0=1;			//Return label
	R1=7;			//String length
	GT(new_);		//Assign heap space for string literal
L 1:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x31;		//'1'
	R3=R3+1;		
	U(R3)=0x2b;		//'+'
	R3=R3+1;		
	U(R3)=0x37;		//'7'
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
	R1=-6;			//String length
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
