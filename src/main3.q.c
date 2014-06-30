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
	R3=R1;			//Save R1 (should use heap)
	R1=U(0x11fed);		//Load value left side
	R2=U(0x11fec);		//Load value right side
	R0=1;			//True
	IF(R1 != R2) GT(7);	//Jump if true
	R0=0;			//False
L 7:				
	R1=R3;			//Recover R1 (should use heap)
	//////////////////////////////////
	// Evaluate while loop -> L:5
	IF(R0 == 0) GT(6);	//Jump if 0
	//////////////////////////////////
	// Open if block 
STAT(2)			
	DAT(0x11feb,U,'a');	//Literal ''a'', scope 0 
CODE(2)			
	//////////////////////////////////
	// Relation evaluation
	R3=R1;			//Save R1 (should use heap)
	R1=U(0x11fed);		//Load value left side
	R2=U(0x11feb);		//Load value right side
	R0=1;			//True
	IF(R1 == R2) GT(9);	//Jump if true
	R0=0;			//False
L 9:				
	R1=R3;			//Recover R1 (should use heap)
	//////////////////////////////////
	// Evaluate if block 
	IF(R0 == 0) GT(8);	//Jump if 0
	/////////////////////////
	// Print string literal
	R0=10;			//Return label
	R1=10;			//String length
	GT(new_);		//Assign heap space for string literal
L 10:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x4d;		//'M'
	R3=R3+1;		
	U(R3)=0x75;		//'u'
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x68;		//'h'
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x68;		//'h'
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x68;		//'h'
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x0;		//'\0'
	//Finished assigning string to heap
	R2=R0;			//String literal address
	R0=11;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 11:				
	R0=12;			//Return label
	R1=-9;			//String length
	GT(free_);		//Free heap space for string literal
L 12:				
	//////////////////////////////////
	// Print New_Line
	R0=13;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 13:				
	//////////////////////////////////
	// Close if block 
L 8:				
	//////////////////////////////////
	// Open if block 
STAT(3)			
	DAT(0x11fea,U,'3');	//Literal ''3'', scope 0 
CODE(3)			
	//////////////////////////////////
	// Relation evaluation
	R3=R1;			//Save R1 (should use heap)
	R1=U(0x11fed);		//Load value left side
	R2=U(0x11fea);		//Load value right side
	R0=1;			//True
	IF(R1 == R2) GT(15);	//Jump if true
	R0=0;			//False
L 15:				
	R1=R3;			//Recover R1 (should use heap)
	R1=R0;			//Saving R0 for relation call
STAT(4)			
	DAT(0x11fe9,U,'7');	//Literal ''7'', scope 0 
CODE(4)			
	//////////////////////////////////
	// Relation evaluation
	R3=R1;			//Save R1 (should use heap)
	R1=U(0x11fed);		//Load value left side
	R2=U(0x11fe9);		//Load value right side
	R0=1;			//True
	IF(R1 == R2) GT(16);	//Jump if true
	R0=0;			//False
L 16:				
	R1=R3;			//Recover R1 (should use heap)
	R0=R0 + R1;	// or generated
	//////////////////////////////////
	// Evaluate if block 
	IF(R0 == 0) GT(14);	//Jump if 0
	/////////////////////////
	// Print string literal
	R0=17;			//Return label
	R1=9;			//String length
	GT(new_);		//Assign heap space for string literal
L 17:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x4e;		//'N'
	R3=R3+1;		
	U(R3)=0x75;		//'u'
	R3=R3+1;		
	U(R3)=0x6d;		//'m'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x72;		//'r'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x3a;		//':'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x0;		//'\0'
	//Finished assigning string to heap
	R2=R0;			//String literal address
	R0=18;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 18:				
	R0=19;			//Return label
	R1=-8;			//String length
	GT(free_);		//Free heap space for string literal
L 19:				
	//////////////////////////////////
	// Print variable 'c', scope 0
	R0=20;			//Return label
	R1=0x11ff7;		//Format char address
	R2=U(0x11fed);		//Variable value
	GT(putfi_);		//Print variable
L 20:				
	//////////////////////////////////
	// Print New_Line
	R0=21;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 21:				
	//////////////////////////////////
	// Close if block 
L 14:				
STAT(5)			
	DAT(0x11fe8,U,'z');	//Literal ''z'', scope 0 
CODE(5)			
	/////////////////////////
	// Print string literal
	R0=22;			//Return label
	R1=16;			//String length
	GT(new_);		//Assign heap space for string literal
L 22:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x57;		//'W'
	R3=R3+1;		
	U(R3)=0x68;		//'h'
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x5a;		//'Z'
	R3=R3+1;		
	U(R3)=0x5a;		//'Z'
	R3=R3+1;		
	U(R3)=0x5a;		//'Z'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x6d;		//'m'
	R3=R3+1;		
	U(R3)=0x62;		//'b'
	R3=R3+1;		
	U(R3)=0x69;		//'i'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x0;		//'\0'
	//Finished assigning string to heap
	R2=R0;			//String literal address
	R0=23;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 23:				
	R0=24;			//Return label
	R1=-15;			//String length
	GT(free_);		//Free heap space for string literal
L 24:				
STAT(6)			
	DAT(0x11fe7,U,'c');	//Literal ''c'', scope 0 
CODE(6)			
	/////////////////////////
	// Print string literal
	R0=25;			//Return label
	R1=22;			//String length
	GT(new_);		//Assign heap space for string literal
L 25:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x57;		//'W'
	R3=R3+1;		
	U(R3)=0x68;		//'h'
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x43;		//'C'
	R3=R3+1;		
	U(R3)=0x43;		//'C'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x6d;		//'m'
	R3=R3+1;		
	U(R3)=0x62;		//'b'
	R3=R3+1;		
	U(R3)=0x6f;		//'o'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x62;		//'b'
	R3=R3+1;		
	U(R3)=0x72;		//'r'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x6b;		//'k'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x72;		//'r'
	R3=R3+1;		
	U(R3)=0x0;		//'\0'
	//Finished assigning string to heap
	R2=R0;			//String literal address
	R0=26;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 26:				
	R0=27;			//Return label
	R1=-21;			//String length
	GT(free_);		//Free heap space for string literal
L 27:				
	/////////////////////////
	// Print string literal
	R0=28;			//Return label
	R1=13;			//String length
	GT(new_);		//Assign heap space for string literal
L 28:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x57;		//'W'
	R3=R3+1;		
	U(R3)=0x68;		//'h'
	R3=R3+1;		
	U(R3)=0x61;		//'a'
	R3=R3+1;		
	U(R3)=0x74;		//'t'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x76;		//'v'
	R3=R3+1;		
	U(R3)=0x65;		//'e'
	R3=R3+1;		
	U(R3)=0x72;		//'r'
	R3=R3+1;		
	U(R3)=0x2e;		//'.'
	R3=R3+1;		
	U(R3)=0x2e;		//'.'
	R3=R3+1;		
	U(R3)=0x2e;		//'.'
	R3=R3+1;		
	U(R3)=0x20;		//' '
	R3=R3+1;		
	U(R3)=0x0;		//'\0'
	//Finished assigning string to heap
	R2=R0;			//String literal address
	R0=29;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 29:				
	R0=30;			//Return label
	R1=-12;			//String length
	GT(free_);		//Free heap space for string literal
L 30:				
	//////////////////////////////////
	// Print New_Line
	R0=31;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 31:				
	/////////////////////////
	// Print string literal
	R0=32;			//Return label
	R1=28;			//String length
	GT(new_);		//Assign heap space for string literal
L 32:				
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
	R0=33;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 33:				
	R0=34;			//Return label
	R1=-27;			//String length
	GT(free_);		//Free heap space for string literal
L 34:				
	//////////////////////////////////
	// Get variable 'c', scope 0
	R0=35;			//Return label
	R2=0x11fed;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 35:				
	//////////////////////////////////
	// Close while loop -> L:5
	GT(5);			//Evaluate loop again
L 6:				//Exit while loop
	/////////////////////////
	// Print string literal
	R0=36;			//Return label
	R1=12;			//String length
	GT(new_);		//Assign heap space for string literal
L 36:				
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
	R0=37;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 37:				
	R0=38;			//Return label
	R1=-11;			//String length
	GT(free_);		//Free heap space for string literal
L 38:				
	//////////////////////////////////
	// Print New_Line
	R0=39;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 39:				
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
