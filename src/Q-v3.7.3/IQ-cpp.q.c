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
 DAT(0x11fed,U,0);
CODE(0)
L 0:


 R0=1;
 R1=28;
 GT(-11);
L 1:
 R3=R0;

 U(R3)=0x45;
 R3=R3+1;
 U(R3)=0x6e;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x72;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x61;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x6c;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x72;
 R3=R3+1;
 U(R3)=0x28;
 R3=R3+1;
 U(R3)=0x6e;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x78;
 R3=R3+1;
 U(R3)=0x69;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x29;
 R3=R3+1;
 U(R3)=0x3a;
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
 R1=-27;
 GT(-17);
L 3:


 R0=4;
 R2=0x11fed;
 R1=0x11ff7;
 GT(-16);
L 4:


L 5:
STAT(1)
 DAT(0x11fec,U,'n');
CODE(1)


 R3=R1;
 R1=U(0x11fed);
 R2=U(0x11fec);
 R0=1;
 IF(R1 != R2) GT(7);
 R0=0;
L 7:
 R1=R3;


 IF(R0 == 0) GT(6);


STAT(2)
 DAT(0x11feb,U,'a');
CODE(2)


 R3=R1;
 R1=U(0x11fed);
 R2=U(0x11feb);
 R0=1;
 IF(R1 == R2) GT(9);
 R0=0;
L 9:
 R1=R3;


 IF(R0 == 0) GT(8);


 R0=10;
 R1=10;
 GT(-11);
L 10:
 R3=R0;

 U(R3)=0x4d;
 R3=R3+1;
 U(R3)=0x75;
 R3=R3+1;
 U(R3)=0x61;
 R3=R3+1;
 U(R3)=0x68;
 R3=R3+1;
 U(R3)=0x61;
 R3=R3+1;
 U(R3)=0x68;
 R3=R3+1;
 U(R3)=0x61;
 R3=R3+1;
 U(R3)=0x68;
 R3=R3+1;
 U(R3)=0x61;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=11;
 R1=0x11ffd;
 GT(-13);
L 11:
 R0=12;
 R1=-9;
 GT(-17);
L 12:


 R0=13;
 R1=0x11fee;
 GT(-14);
L 13:


L 8:


STAT(3)
 DAT(0x11fea,U,'3');
CODE(3)


 R3=R1;
 R1=U(0x11fed);
 R2=U(0x11fea);
 R0=1;
 IF(R1 == R2) GT(15);
 R0=0;
L 15:
 R1=R3;
 R1=R0;
STAT(4)
 DAT(0x11fe9,U,'7');
CODE(4)


 R3=R1;
 R1=U(0x11fed);
 R2=U(0x11fe9);
 R0=1;
 IF(R1 == R2) GT(16);
 R0=0;
L 16:
 R1=R3;
 R0=R0 + R1;
 R1=R0;
STAT(5)
 DAT(0x11fe8,U,'8');
CODE(5)


 R3=R1;
 R1=U(0x11fed);
 R2=U(0x11fe8);
 R0=1;
 IF(R1 <= R2) GT(17);
 R0=0;
L 17:
 R1=R3;
 R0=R0 * R1;


 IF(R0 == 0) GT(14);


 R0=18;
 R1=9;
 GT(-11);
L 18:
 R3=R0;

 U(R3)=0x4e;
 R3=R3+1;
 U(R3)=0x75;
 R3=R3+1;
 U(R3)=0x6d;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x72;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x3a;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=19;
 R1=0x11ffd;
 GT(-13);
L 19:
 R0=20;
 R1=-8;
 GT(-17);
L 20:


 R0=21;
 R1=0x11ff7;
 R2=U(0x11fed);
 GT(-12);
L 21:


 R0=22;
 R1=0x11fee;
 GT(-14);
L 22:


L 14:


 R0=23;
 R1=28;
 GT(-11);
L 23:
 R3=R0;

 U(R3)=0x45;
 R3=R3+1;
 U(R3)=0x6e;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x72;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x61;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x6c;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x72;
 R3=R3+1;
 U(R3)=0x28;
 R3=R3+1;
 U(R3)=0x6e;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x78;
 R3=R3+1;
 U(R3)=0x69;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x29;
 R3=R3+1;
 U(R3)=0x3a;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=24;
 R1=0x11ffd;
 GT(-13);
L 24:
 R0=25;
 R1=-27;
 GT(-17);
L 25:


 R0=26;
 R2=0x11fed;
 R1=0x11ff7;
 GT(-16);
L 26:


 GT(5);
L 6:


 R0=27;
 R1=12;
 GT(-11);
L 27:
 R3=R0;

 U(R3)=0x59;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x75;
 R3=R3+1;
 U(R3)=0x27;
 R3=R3+1;
 U(R3)=0x72;
 R3=R3+1;
 U(R3)=0x65;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x6f;
 R3=R3+1;
 U(R3)=0x75;
 R3=R3+1;
 U(R3)=0x74;
 R3=R3+1;
 U(R3)=0x21;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=28;
 R1=0x11ffd;
 GT(-13);
L 28:
 R0=29;
 R1=-11;
 GT(-17);
L 29:


 R0=30;
 R1=0x11fee;
 GT(-14);
L 30:
 R0=0;
 GT(-2);
END
