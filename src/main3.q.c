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
	DAT(0x11fe8,U,'k');	//Literal ''k'', scope 0 
CODE(1)			
	//////////////////////////////////
	// Assignment to variable 'c', scope 0
	R1=U(0x11fe8);		//Load value right side
	U(0x11fe9)=R1;		//Save value right side into variable
	//////////////////////////////////
	// Print variable 'c', scope 0
	R0=1;			//Return label
	R1=0x11ff7;		//Format char address
	R2=U(0x11fe9);		//Variable value
	GT(putfi_);		//Print variable
L 1:				
	//////////////////////////////////
	// Print New_Line
	R0=2;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 2:				
STAT(2)			
	DAT(0x11fe4,I,3);	//Literal '3', scope 0 
	DAT(0x11fe0,I,4);	//Literal '4', scope 0 
CODE(2)			
	//////////////////////////////////
	// Multiply factors
	R1=I(0x11fe4);		//Load value left factor
	R0=I(0x11fe0);		//Load value right factor
	R0=R1*R0;		//Multiply factors
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	R1=R0;		//Load value right side
	I(0x11fea)=R1;		//Save value right side into variable
	/////////////////////////
	// Print string literal
	R0=3;			//Return label
	R1=7;			//String length
	GT(new_);		//Assign heap space for string literal
L 3:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x33;		//'3'
	R3=R3+1;		
	U(R3)=0x2a;		//'*'
	R3=R3+1;		
	U(R3)=0x34;		//'4'
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
	R0=4;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 4:				
	R0=5;			//Return label
	R1=-6;			//String length
	GT(free_);		//Free heap space for string literal
L 5:				
	//////////////////////////////////
	// Print variable 'i', scope 0
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
STAT(3)			
	DAT(0x11fdc,I,2);	//Literal '2', scope 0 
CODE(3)			
	//////////////////////////////////
	// Multiply factors
	R1=I(0x11fea);		//Load value left factor
	R0=I(0x11fdc);		//Load value right factor
	R0=R1/R0;		//Multiply factors
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	R1=R0;		//Load value right side
	I(0x11fea)=R1;		//Save value right side into variable
	/////////////////////////
	// Print string literal
	R0=8;			//Return label
	R1=8;			//String length
	GT(new_);		//Assign heap space for string literal
L 8:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x31;		//'1'
	R3=R3+1;		
	U(R3)=0x32;		//'2'
	R3=R3+1;		
	U(R3)=0x2f;		//'/'
	R3=R3+1;		
	U(R3)=0x32;		//'2'
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
	R0=9;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 9:				
	R0=10;			//Return label
	R1=-7;			//String length
	GT(free_);		//Free heap space for string literal
L 10:				
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=11;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 11:				
	//////////////////////////////////
	// Print New_Line
	R0=12;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 12:				
STAT(4)			
	DAT(0x11fd8,I,1);	//Literal '1', scope 0 
	DAT(0x11fd4,I,7);	//Literal '7', scope 0 
CODE(4)			
	//////////////////////////////////
	// Add terms
	R1=I(0x11fd8);		//Load value left term
	R0=I(0x11fd4);		//Load value right term
	R0=R1+R0;		//Add terms
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	R1=R0;		//Load value right side
	I(0x11fea)=R1;		//Save value right side into variable
	/////////////////////////
	// Print string literal
	R0=13;			//Return label
	R1=7;			//String length
	GT(new_);		//Assign heap space for string literal
L 13:				
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
	R0=14;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 14:				
	R0=15;			//Return label
	R1=-6;			//String length
	GT(free_);		//Free heap space for string literal
L 15:				
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=16;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 16:				
	//////////////////////////////////
	// Print New_Line
	R0=17;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 17:				
STAT(5)			
	DAT(0x11fd0,I,3);	//Literal '3', scope 0 
CODE(5)			
	//////////////////////////////////
	// Add terms
	R1=I(0x11fea);		//Load value left term
	R0=I(0x11fd0);		//Load value right term
	R0=R1-R0;		//Add terms
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	R1=R0;		//Load value right side
	I(0x11fea)=R1;		//Save value right side into variable
	/////////////////////////
	// Print string literal
	R0=18;			//Return label
	R1=7;			//String length
	GT(new_);		//Assign heap space for string literal
L 18:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x38;		//'8'
	R3=R3+1;		
	U(R3)=0x2d;		//'-'
	R3=R3+1;		
	U(R3)=0x33;		//'3'
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
	R0=19;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 19:				
	R0=20;			//Return label
	R1=-6;			//String length
	GT(free_);		//Free heap space for string literal
L 20:				
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=21;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 21:				
	//////////////////////////////////
	// Print New_Line
	R0=22;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 22:				
STAT(6)			
	DAT(0x11fcc,I,2);	//Literal '2', scope 0 
	DAT(0x11fc8,I,2);	//Literal '2', scope 0 
CODE(6)			
	//////////////////////////////////
	// Multiply factors
	R1=I(0x11fcc);		//Load value left factor
	R0=I(0x11fc8);		//Load value right factor
	R0=R1*R0;		//Multiply factors
STAT(7)			
	DAT(0x11fc4,I,2);	//Literal '2', scope 0 
CODE(7)			
	//////////////////////////////////
	// Add terms
	R1=R0;		//Load value left term
	R0=I(0x11fc4);		//Load value right term
	R0=R1+R0;		//Add terms
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	R1=R0;		//Load value right side
	I(0x11fea)=R1;		//Save value right side into variable
	/////////////////////////
	// Print string literal
	R0=23;			//Return label
	R1=9;			//String length
	GT(new_);		//Assign heap space for string literal
L 23:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x32;		//'2'
	R3=R3+1;		
	U(R3)=0x2a;		//'*'
	R3=R3+1;		
	U(R3)=0x32;		//'2'
	R3=R3+1;		
	U(R3)=0x2b;		//'+'
	R3=R3+1;		
	U(R3)=0x32;		//'2'
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
	R0=24;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 24:				
	R0=25;			//Return label
	R1=-8;			//String length
	GT(free_);		//Free heap space for string literal
L 25:				
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=26;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 26:				
	//////////////////////////////////
	// Print New_Line
	R0=27;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 27:				
STAT(8)			
	DAT(0x11fc0,I,2);	//Literal '2', scope 0 
	DAT(0x11fbc,I,2);	//Literal '2', scope 0 
	DAT(0x11fb8,I,2);	//Literal '2', scope 0 
CODE(8)			
	//////////////////////////////////
	// Add terms
	R1=I(0x11fbc);		//Load value left term
	R0=I(0x11fb8);		//Load value right term
	R0=R1+R0;		//Add terms
	//////////////////////////////////
	// Multiply factors
	R1=I(0x11fc0);		//Load value left factor
	R0=I(0x0);		//Load value right factor
	R0=R1*R0;		//Multiply factors
	//////////////////////////////////
	// Assignment to variable 'i', scope 0
	R1=R0;		//Load value right side
	I(0x11fea)=R1;		//Save value right side into variable
	/////////////////////////
	// Print string literal
	R0=28;			//Return label
	R1=11;			//String length
	GT(new_);		//Assign heap space for string literal
L 28:				
	R3=R0;			//Save the address in the heap of the string literal
	//Start assigning string to heap
	U(R3)=0x32;		//'2'
	R3=R3+1;		
	U(R3)=0x2a;		//'*'
	R3=R3+1;		
	U(R3)=0x28;		//'('
	R3=R3+1;		
	U(R3)=0x32;		//'2'
	R3=R3+1;		
	U(R3)=0x2b;		//'+'
	R3=R3+1;		
	U(R3)=0x32;		//'2'
	R3=R3+1;		
	U(R3)=0x29;		//')'
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
	R0=29;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 29:				
	R0=30;			//Return label
	R1=-10;			//String length
	GT(free_);		//Free heap space for string literal
L 30:				
	//////////////////////////////////
	// Print variable 'i', scope 0
	R0=31;			//Return label
	R1=0x11ffa;		//Format int address
	R2=I(0x11fea);		//Variable value
	GT(putfi_);		//Print variable
L 31:				
	//////////////////////////////////
	// Print New_Line
	R0=32;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 32:				
	/////////////////////////
	// Print string literal
	R0=33;			//Return label
	R1=28;			//String length
	GT(new_);		//Assign heap space for string literal
L 33:				
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
	R0=34;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 34:				
	R0=35;			//Return label
	R1=-27;			//String length
	GT(free_);		//Free heap space for string literal
L 35:				
	//////////////////////////////////
	// Get variable 'c', scope 0
	R0=36;			//Return label
	R2=0x11fe9;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 36:				
	//////////////////////////////////
	// Open while loop -> L:37
L 37:				
STAT(9)			
	DAT(0x11fb7,U,'n');	//Literal ''n'', scope 0 
CODE(9)			
	//////////////////////////////////
	// Relation evaluation
	R3=R1;			//Save R1 (should use heap)
	R1=U(0x11fe9);		//Load value left side
	R2=U(0x11fb7);		//Load value right side
	R0=1;			//True
	IF(R1 != R2) GT(39);	//Jump if true
	R0=0;			//False
L 39:				
	R1=R3;			//Recover R1 (should use heap)
	//////////////////////////////////
	// Evaluate while loop -> L:37
	IF(R0 == 0) GT(38);	//Jump if 0
	//////////////////////////////////
	// Open if block 
STAT(10)			
	DAT(0x11fb6,U,'a');	//Literal ''a'', scope 0 
CODE(10)			
	//////////////////////////////////
	// Relation evaluation
	R3=R1;			//Save R1 (should use heap)
	R1=U(0x11fe9);		//Load value left side
	R2=U(0x11fb6);		//Load value right side
	R0=1;			//True
	IF(R1 == R2) GT(41);	//Jump if true
	R0=0;			//False
L 41:				
	R1=R3;			//Recover R1 (should use heap)
	//////////////////////////////////
	// Evaluate if block 
	IF(R0 == 0) GT(40);	//Jump if 0
	/////////////////////////
	// Print string literal
	R0=42;			//Return label
	R1=10;			//String length
	GT(new_);		//Assign heap space for string literal
L 42:				
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
	R0=43;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 43:				
	R0=44;			//Return label
	R1=-9;			//String length
	GT(free_);		//Free heap space for string literal
L 44:				
	//////////////////////////////////
	// Print New_Line
	R0=45;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 45:				
	//////////////////////////////////
	// Close if block 
L 40:				
	//////////////////////////////////
	// Open if block 
STAT(11)			
	DAT(0x11fb5,U,'3');	//Literal ''3'', scope 0 
CODE(11)			
	//////////////////////////////////
	// Relation evaluation
	R3=R1;			//Save R1 (should use heap)
	R1=U(0x11fe9);		//Load value left side
	R2=U(0x11fb5);		//Load value right side
	R0=1;			//True
	IF(R1 == R2) GT(47);	//Jump if true
	R0=0;			//False
L 47:				
	R1=R3;			//Recover R1 (should use heap)
	R1=R0;			//Saving R0 for relation call
STAT(12)			
	DAT(0x11fb4,U,'7');	//Literal ''7'', scope 0 
CODE(12)			
	//////////////////////////////////
	// Relation evaluation
	R3=R1;			//Save R1 (should use heap)
	R1=U(0x11fe9);		//Load value left side
	R2=U(0x11fb4);		//Load value right side
	R0=1;			//True
	IF(R1 == R2) GT(48);	//Jump if true
	R0=0;			//False
L 48:				
	R1=R3;			//Recover R1 (should use heap)
	R0=R0 + R1;	// or generated
	//////////////////////////////////
	// Evaluate if block 
	IF(R0 == 0) GT(46);	//Jump if 0
	/////////////////////////
	// Print string literal
	R0=49;			//Return label
	R1=9;			//String length
	GT(new_);		//Assign heap space for string literal
L 49:				
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
	R0=50;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 50:				
	R0=51;			//Return label
	R1=-8;			//String length
	GT(free_);		//Free heap space for string literal
L 51:				
	//////////////////////////////////
	// Print variable 'c', scope 0
	R0=52;			//Return label
	R1=0x11ff7;		//Format char address
	R2=U(0x11fe9);		//Variable value
	GT(putfi_);		//Print variable
L 52:				
	//////////////////////////////////
	// Print New_Line
	R0=53;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 53:				
	//////////////////////////////////
	// Close if block 
L 46:				
	/////////////////////////
	// Print string literal
	R0=54;			//Return label
	R1=28;			//String length
	GT(new_);		//Assign heap space for string literal
L 54:				
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
	R0=55;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 55:				
	R0=56;			//Return label
	R1=-27;			//String length
	GT(free_);		//Free heap space for string literal
L 56:				
	//////////////////////////////////
	// Get variable 'c', scope 0
	R0=57;			//Return label
	R2=0x11fe9;		//Variable address
	R1=0x11ff7;		//Format char address
	GT(getfc_);		//Get variable
L 57:				
	//////////////////////////////////
	// Close while loop -> L:37
	GT(37);			//Evaluate loop again
L 38:				//Exit while loop
	/////////////////////////
	// Print string literal
	R0=58;			//Return label
	R1=12;			//String length
	GT(new_);		//Assign heap space for string literal
L 58:				
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
	R0=59;			//Return label
	R1=0x11ffd;		//Format string address
	GT(putfs_);		//Print string literal
L 59:				
	R0=60;			//Return label
	R1=-11;			//String length
	GT(free_);		//Free heap space for string literal
L 60:				
	//////////////////////////////////
	// Print New_Line
	R0=61;			//Return label
	R1=0x11fee;		//Format New_Line address
	GT(putnl_);		//Print variable
L 61:				
	R0=0;			//Succesful state
	GT(-2);			//Finish
END
