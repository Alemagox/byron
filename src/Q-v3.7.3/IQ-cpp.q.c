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
 DAT(0x11fe5,I,2);
 DAT(0x11fe1,I,12);
CODE(1)


 R0=I(0x11fe1);
 R1=I(0x11fe5);
 R0=R1*R0;
STAT(2)
 DAT(0x11fdd,I,2);
 DAT(0x11fd9,I,5);
 DAT(0x11fd5,I,5);
CODE(2)


 R1=I(0x11fd5);
 R2=I(0x11fd9);
 R1=R2+R1;



 R2=I(0x11fdd);
 R1=R2*R1;
STAT(3)
 DAT(0x11fd1,I,2);
 DAT(0x11fcd,I,1);
CODE(3)


 R2=I(0x11fcd);
 R3=I(0x11fd1);
 R2=R3-R2;




 R1=R1/R2;




 R0=R0-R1;


 R1=R0;
 I(0x11fea)=R1;


 R0=1;
 R1=10;
 GT(-11);
L 1:
 R3=R0;

 U(R3)=0x52;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x73;
 R3=R3+1;
 U(R3)=0x75;
 R3=R3+1;
 U(R3)=0x6c;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x3d;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=2;
 R1=0x11ffd;
 GT(-13);
L 2:
 R0=3;
 R1=-9;
 GT(-17);
L 3:


 R0=4;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 4:


 R0=5;
 R1=0x11fee;
 GT(-14);
L 5:
 R0=0;
 GT(-2);
END
