#include "Q.h"
# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "<stdin>"
# 1 "Qlib.h" 1
# 2 "<stdin>" 2

BEGIN
STAT(0)
 STR(0x11ffd,"%s");
 STR(0x11ffa,"%d");
 STR(0x11ff7,"%c");
 STR(0x11ff4,"%d");
 STR(0x11ff1,"%c");
 STR(0x11fee,"\n");
CODE(0)


L 1:
 R6=R7;
 R7=R7-8;
STAT(1)
 STR(0x11fde, "This is B -> c:");
CODE(1)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=2;
 R1=0x11ffd;
 R2=0x11fde;
 GT(-13);
L 2:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=3;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
L 3:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R0=4;
 R1=0x11fee;
 GT(-14);
L 4:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(2)
 DAT(0x11fda,U,'b');
CODE(2)



 R0=U(0x11fda);
 U(R6+8)=R0;

STAT(3)
 STR(0x11fca, "This is B -> c:");
CODE(3)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=5;
 R1=0x11ffd;
 R2=0x11fca;
 GT(-13);
L 5:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=6;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
L 6:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R0=7;
 R1=0x11fee;
 GT(-14);
L 7:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 R7=R6;
 R6=P(R7);
 GT(R6);




L 8:
 R6=R7;
 R7=R7-8;
STAT(4)
 STR(0x11fba, "This is A -> c:");
CODE(4)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=9;
 R1=0x11ffd;
 R2=0x11fba;
 GT(-13);
L 9:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=10;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
L 10:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R0=11;
 R1=0x11fee;
 GT(-14);
L 11:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(5)
 DAT(0x11fb6,U,'a');
CODE(5)



 R0=U(0x11fb6);
 U(R6+8)=R0;



 R7=R7-16;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=12;
 GT(1);
L 12:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6+12)=R0;

 R7=R7+16;


STAT(6)
 STR(0x11fa6, "This is A -> c:");
CODE(6)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=13;
 R1=0x11ffd;
 R2=0x11fa6;
 GT(-13);
L 13:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=14;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
L 14:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R0=15;
 R1=0x11fee;
 GT(-14);
L 15:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 R7=R6;
 R6=P(R7);
 GT(R6);


STAT(7)
 DAT(0x11fa2,U,0);
 DAT(0x11f9e,U,0);
 DAT(0x11f9a,I,0);
CODE(7)
L 0:
 R6=R7;
STAT(8)
 DAT(0x11f96,U,'e');
CODE(8)



 R0=U(0x11f96);
 U(0x11fa2)=R0;



 R7=R7-16;

 R0=U(0x11fa2);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=16;
 GT(8);
L 16:
 R6=P(R7+4);

 R0=U(R7+8);
 U(0x11fa2)=R0;


 R0=I(R7+12);
 I(0x11f9a)=R0;

 R7=R7+16;


 R0=0;
 GT(-2);
END
