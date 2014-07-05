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
 DAT(0x11fea,I,0);
 DAT(0x11fe9,U,0);
CODE(0)
L 0:
STAT(1)
 DAT(0x11fe5,I,1);
 DAT(0x11fe1,I,4);
CODE(1)


 R0=I(0x11fe1);
 R1=I(0x11fe5);
 IF(R1>R0) GT(1);
 R0=0;
 GT(2);
L 1:
 R0=1;
L 2:

STAT(2)
 DAT(0x11fdd,I,2);
 DAT(0x11fd9,I,3);
CODE(2)


 R1=I(0x11fd9);
 R2=I(0x11fdd);
 IF(R2<R1) GT(3);
 R1=0;
 GT(4);
L 3:
 R1=1;
L 4:



 R0=R0+R1;
STAT(3)
 DAT(0x11fd5,I,1);
 DAT(0x11fd1,I,4);
CODE(3)


 R1=I(0x11fd1);
 R2=I(0x11fd5);
 IF(R2>R1) GT(5);
 R1=0;
 GT(6);
L 5:
 R1=1;
L 6:



 R0=R0*R1;


 I(0x11fea)=R0;
STAT(4)
 STR(0x11fc7, "Result = ");
CODE(4)


 R0=7;
 R1=0x11ffd;
 R2=0x11fc7;
 GT(-13);
L 7:




 R0=8;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 8:




 R0=9;
 R1=0x11fee;
 GT(-14);
L 9:


 R0=0;
 GT(-2);
END
