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
STAT(1)
 STR(0x11fdf, "Character is: ");
CODE(1)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=2;
 R1=0x11ffd;
 R2=0x11fdf;
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
 R2=U(0x0);
 GT(-12);
L 3:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(2)
 DAT(0x11fdb,I,0);
 DAT(0x11fda,U,0);
CODE(2)
L 0:
STAT(3)
 STR(0x11fd0, "Result = ");
CODE(3)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=4;
 R1=0x11ffd;
 R2=0x11fd0;
 GT(-13);
L 4:
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
 R0=5;
 R1=0x11fee;
 GT(-14);
L 5:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 R0=0;
 GT(-2);
END
