#include "Q.h"

BEGIN				//Start
STAT(0)			
	STR(0x11ffc,"%s\n");	//Format string for strings
	STR(0x11ff8,"%d\n");	//Format string for integers
CODE(0)			
L 0:
	R0=1;			//Return label
	R1=11;			//String length
	GT(new_);		//Assign heap space for string literal
L 1:				
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
	R0=2;			//Return label
	R1=0x11ffc;		//Format string address
	GT(putf_);		//Print string literal
L 2:				
	R0=3;			//Return label
	R1=-10;			//String length
	GT(free_);		//Free heap space for string literal
L 3:				
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
