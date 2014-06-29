#include "Q.h"

BEGIN				//Start
STAT(0)			
	STR(0x11ffd,"%s");	//Format Put string 
	STR(0x11ffa,"%d");	//Format Put integer
	STR(0x11ff7,"%c");	//Format Put char
	STR(0x11ff4,"%d");	//Format Get integer
	STR(0x11ff1,"%c");	//Format Get char
	STR(0x11fee,"\n");	//Format New_Line
	DAT(0x11fea,I,0);	//Var 'a', scope 0 
CODE(0)
L 0:
	//////////////////////////////////
	// Get variable 'a', scope 0
	R0=1;			//Return label
	R2=0x11fea;		//Variable address
	R1=0x11ffa;		//Format int address
	GT(getfi_);		//Get variable
L 1:				
	/////////////////////////
	// Print string literal
	R0=2;			//Return label
	R1=11;			//String length
	GT(new_);		//Assign heap space for string literal
L 2:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x4e;		//'N'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x6e;		//'n'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x6e;		//'n'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x6e;		//'n'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x6e;		//'n'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x0;		//'\0'
	//Finished assigning string to heap
	R2=R0;			//String literal address
	R0=3;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 3:				
	R0=4;			//Return label
	R1=-10;			//String length
	GT(free_);		//Free heap space for string literal
L 4:				
	//////////////////////////////////
	// Print New_Line
	R0=5;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 5:				
	//////////////////////////////////
	// Print variable 'a', scope 0
	R0=6;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 6:				
	//////////////////////////////////
	// Print New_Line
	R0=7;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 7:				
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
