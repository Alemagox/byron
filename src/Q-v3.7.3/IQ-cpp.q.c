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
 DAT(0x11fe8,U,'k');
CODE(1)


 R1=U(0x11fe8);
 U(0x11fe9)=R1;


 R0=1;
 R1=0x11ff7;
 R2=U(0x11fe9);
 GT(-12);
L 1:


 R0=2;
 R1=0x11fee;
 GT(-14);
L 2:
STAT(2)
 DAT(0x11fe4,I,3);
 DAT(0x11fe0,I,4);
CODE(2)


 R1=I(0x11fe4);
 R0=I(0x11fe0);
 R0=R1*R0;


 R1=R0;
 I(0x11fea)=R1;


 R0=3;
 R1=7;
 GT(-11);
L 3:
 R3=R0;

 U(R3)=0x33;
 R3=R3+1;
 U(R3)=0x2a;
 R3=R3+1;
 U(R3)=0x34;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x3d;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=4;
 R1=0x11ffd;
 GT(-13);
L 4:
 R0=5;
 R1=-6;
 GT(-17);
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
STAT(3)
 DAT(0x11fdc,I,2);
CODE(3)


 R1=I(0x11fea);
 R0=I(0x11fdc);
 R0=R1/R0;


 R1=R0;
 I(0x11fea)=R1;


 R0=8;
 R1=8;
 GT(-11);
L 8:
 R3=R0;

 U(R3)=0x31;
 R3=R3+1;
 U(R3)=0x32;
 R3=R3+1;
 U(R3)=0x2f;
 R3=R3+1;
 U(R3)=0x32;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x3d;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=9;
 R1=0x11ffd;
 GT(-13);
L 9:
 R0=10;
 R1=-7;
 GT(-17);
L 10:


 R0=11;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 11:


 R0=12;
 R1=0x11fee;
 GT(-14);
L 12:
STAT(4)
 DAT(0x11fd8,I,1);
 DAT(0x11fd4,I,7);
CODE(4)


 R1=I(0x11fd8);
 R0=I(0x11fd4);
 R0=R1+R0;


 R1=R0;
 I(0x11fea)=R1;


 R0=13;
 R1=7;
 GT(-11);
L 13:
 R3=R0;

 U(R3)=0x31;
 R3=R3+1;
 U(R3)=0x2b;
 R3=R3+1;
 U(R3)=0x37;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x3d;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=14;
 R1=0x11ffd;
 GT(-13);
L 14:
 R0=15;
 R1=-6;
 GT(-17);
L 15:


 R0=16;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 16:


 R0=17;
 R1=0x11fee;
 GT(-14);
L 17:
STAT(5)
 DAT(0x11fd0,I,3);
CODE(5)


 R1=I(0x11fea);
 R0=I(0x11fd0);
 R0=R1-R0;


 R1=R0;
 I(0x11fea)=R1;


 R0=18;
 R1=7;
 GT(-11);
L 18:
 R3=R0;

 U(R3)=0x38;
 R3=R3+1;
 U(R3)=0x2d;
 R3=R3+1;
 U(R3)=0x33;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x3d;
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
 R1=-6;
 GT(-17);
L 20:


 R0=21;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 21:


 R0=22;
 R1=0x11fee;
 GT(-14);
L 22:
STAT(6)
 DAT(0x11fcc,I,2);
 DAT(0x11fc8,I,2);
CODE(6)


 R1=I(0x11fcc);
 R0=I(0x11fc8);
 R0=R1*R0;
STAT(7)
 DAT(0x11fc4,I,2);
CODE(7)


 R1=R0;
 R0=I(0x11fc4);
 R0=R1+R0;


 R1=R0;
 I(0x11fea)=R1;


 R0=23;
 R1=9;
 GT(-11);
L 23:
 R3=R0;

 U(R3)=0x32;
 R3=R3+1;
 U(R3)=0x2a;
 R3=R3+1;
 U(R3)=0x32;
 R3=R3+1;
 U(R3)=0x2b;
 R3=R3+1;
 U(R3)=0x32;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x3d;
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
 R1=-8;
 GT(-17);
L 25:


 R0=26;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 26:


 R0=27;
 R1=0x11fee;
 GT(-14);
L 27:
STAT(8)
 DAT(0x11fc0,I,2);
 DAT(0x11fbc,I,2);
 DAT(0x11fb8,I,2);
CODE(8)


 R1=I(0x11fbc);
 R0=I(0x11fb8);
 R0=R1+R0;


 R1=I(0x11fc0);
 R0=I(0x0);
 R0=R1*R0;


 R1=R0;
 I(0x11fea)=R1;


 R0=28;
 R1=11;
 GT(-11);
L 28:
 R3=R0;

 U(R3)=0x32;
 R3=R3+1;
 U(R3)=0x2a;
 R3=R3+1;
 U(R3)=0x28;
 R3=R3+1;
 U(R3)=0x32;
 R3=R3+1;
 U(R3)=0x2b;
 R3=R3+1;
 U(R3)=0x32;
 R3=R3+1;
 U(R3)=0x29;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x3d;
 R3=R3+1;
 U(R3)=0x20;
 R3=R3+1;
 U(R3)=0x0;

 R2=R0;
 R0=29;
 R1=0x11ffd;
 GT(-13);
L 29:
 R0=30;
 R1=-10;
 GT(-17);
L 30:


 R0=31;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 31:


 R0=32;
 R1=0x11fee;
 GT(-14);
L 32:


 R0=33;
 R1=28;
 GT(-11);
L 33:
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
 R0=34;
 R1=0x11ffd;
 GT(-13);
L 34:
 R0=35;
 R1=-27;
 GT(-17);
L 35:


 R0=36;
 R2=0x11fe9;
 R1=0x11ff7;
 GT(-16);
L 36:


L 37:
STAT(9)
 DAT(0x11fb7,U,'n');
CODE(9)


 R3=R1;
 R1=U(0x11fe9);
 R2=U(0x11fb7);
 R0=1;
 IF(R1 != R2) GT(39);
 R0=0;
L 39:
 R1=R3;


 IF(R0 == 0) GT(38);


STAT(10)
 DAT(0x11fb6,U,'a');
CODE(10)


 R3=R1;
 R1=U(0x11fe9);
 R2=U(0x11fb6);
 R0=1;
 IF(R1 == R2) GT(41);
 R0=0;
L 41:
 R1=R3;


 IF(R0 == 0) GT(40);


 R0=42;
 R1=10;
 GT(-11);
L 42:
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
 R0=43;
 R1=0x11ffd;
 GT(-13);
L 43:
 R0=44;
 R1=-9;
 GT(-17);
L 44:


 R0=45;
 R1=0x11fee;
 GT(-14);
L 45:


L 40:


STAT(11)
 DAT(0x11fb5,U,'3');
CODE(11)


 R3=R1;
 R1=U(0x11fe9);
 R2=U(0x11fb5);
 R0=1;
 IF(R1 == R2) GT(47);
 R0=0;
L 47:
 R1=R3;
 R1=R0;
STAT(12)
 DAT(0x11fb4,U,'7');
CODE(12)


 R3=R1;
 R1=U(0x11fe9);
 R2=U(0x11fb4);
 R0=1;
 IF(R1 == R2) GT(48);
 R0=0;
L 48:
 R1=R3;
 R0=R0 + R1;


 IF(R0 == 0) GT(46);


 R0=49;
 R1=9;
 GT(-11);
L 49:
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
 R0=50;
 R1=0x11ffd;
 GT(-13);
L 50:
 R0=51;
 R1=-8;
 GT(-17);
L 51:


 R0=52;
 R1=0x11ff7;
 R2=U(0x11fe9);
 GT(-12);
L 52:


 R0=53;
 R1=0x11fee;
 GT(-14);
L 53:


L 46:


 R0=54;
 R1=28;
 GT(-11);
L 54:
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
 R0=55;
 R1=0x11ffd;
 GT(-13);
L 55:
 R0=56;
 R1=-27;
 GT(-17);
L 56:


 R0=57;
 R2=0x11fe9;
 R1=0x11ff7;
 GT(-16);
L 57:


 GT(37);
L 38:


 R0=58;
 R1=12;
 GT(-11);
L 58:
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
 R0=59;
 R1=0x11ffd;
 GT(-13);
L 59:
 R0=60;
 R1=-11;
 GT(-17);
L 60:


 R0=61;
 R1=0x11fee;
 GT(-14);
L 61:
 R0=0;
 GT(-2);
END
