#include "Q.h"

BEGIN				//Start
STAT(0)			
	STR(0x11ffd,"%s");	//Format Put string 
	STR(0x11ffa,"%d");	//Format Put integer
	STR(0x11ff7,"%c");	//Format Put char
	STR(0x11ff4,"%d");	//Format Get integer
	STR(0x11ff1,"%c");	//Format Get char
	STR(0x11fee,"\n");	//Format New_Line
	DAT(0x11fed,U,0);	//Var 'c', scope 0 
CODE(0)
L 0:
	/////////////////////////
	// Print string literal
	R0=1;			//Return label
	R1=28;			//String length
	GT(new_);		//Assign heap space for string literal
L 1:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x45;		//'E'
	R3=R3+1;		
	U(R3)=0x6e;		//'n'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x72;		//'r'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x6c;		//'l'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x72;		//'r'
	R3=R3+1;		
	U(R3)=0x28;		//'('
	R3=R3+1;		
	U(R3)=0x6e;		//'n'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x78;		//'x'
	R3=R3+1;		
	U(R3)=0x69;		//'i'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x29;		//')'
	R3=R3+1;		
	U(R3)=0x3a;		//':'
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
	R1=-27;			//String length
	GT(free_);		//Free heap space for string literal
L 3:				
	//////////////////////////////////
	// Get variable 'c', scope 0
	R0=4;			//Return label
	R2=0x11fed;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 4:				
	//////////////////////////////////
	// Open while loop -> L:5
L 5:				
STAT(1)			
	DAT(0x11fec,U,'n');	//Literal ''n'', scope 0 
CODE(1)			
	//////////////////////////////////
	// Relation evaluation
	R1=U(0x11fed);		//Load value left side
	R2=U(0x11fec);		//Load value right side
	R0=1;			//True
	IF(R1 != R2) GT(7);	//Jump if true
	R0=0;			//False
L 7:				
	//////////////////////////////////
	// Evaluate while loop -> L:5
	IF(R0 == 0) GT(6);	//Jump if 0
	/////////////////////////
	// Print string literal
	R0=8;			//Return label
	R1=28;			//String length
	GT(new_);		//Assign heap space for string literal
L 8:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x45;		//'E'
	R3=R3+1;		
	U(R3)=0x6e;		//'n'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x72;		//'r'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x6c;		//'l'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x72;		//'r'
	R3=R3+1;		
	U(R3)=0x28;		//'('
	R3=R3+1;		
	U(R3)=0x6e;		//'n'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x78;		//'x'
	R3=R3+1;		
	U(R3)=0x69;		//'i'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x29;		//')'
	R3=R3+1;		
	U(R3)=0x3a;		//':'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x0;		//'\0'
	//Finished assigning string to heap
	R2=R0;			//String literal address
	R0=9;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 9:				
	R0=10;			//Return label
	R1=-27;			//String length
	GT(free_);		//Free heap space for string literal
L 10:				
	//////////////////////////////////
	// Get variable 'c', scope 0
	R0=11;			//Return label
	R2=0x11fed;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 11:				
	//////////////////////////////////
	// Close while loop -> L:5
	GT(5);			//Evaluate loop again
L 6:				//Exit while loop
	/////////////////////////
	// Print string literal
	R0=12;			//Return label
	R1=12;			//String length
	GT(new_);		//Assign heap space for string literal
L 12:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x59;		//'Y'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x75;		//'u'
	R3=R3+1;		
	U(R3)=0x27;		//'''
	R3=R3+1;		
	U(R3)=0x72;		//'r'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x75;		//'u'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x21;		//'!'
	R3=R3+1;		
	U(R3)=0x0;		//'\0'
	//Finished assigning string to heap
	R2=R0;			//String literal address
	R0=13;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 13:				
	R0=14;			//Return label
	R1=-11;			//String length
	GT(free_);		//Free heap space for string literal
L 14:				
	//////////////////////////////////
	// Print New_Line
	R0=15;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 15:				
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
