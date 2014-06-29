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
CODE(0)
L 0:


 R0=1;
 R2=0x11fea;
 R1=0x11ffa;
 GT(-15);
L 1:


 R0=2;
 R1=11;
 GT(-11);
L 2:
 R3=R0;

 U(R3)=0x4e;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x6e;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x6e;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x6e;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x6e;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=3;
 R1=0x11ffd;
 GT(-13);
L 3:
 R0=4;
 R1=-10;
 GT(-17);
L 4:


 R0=5;
 R1=0x11fee;
 GT(-14);
L 5:


 R0=6;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 6:


 R0=7;
 R1=0x11fee;
 GT(-14);
L 7:
 R0=0;
 GT(-2);
END
