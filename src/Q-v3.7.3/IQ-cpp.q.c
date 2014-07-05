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


 R0=U(0x11fe8);
 U(0x11fe9)=R0;


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


 R0=I(0x11fe0);
 R1=I(0x11fe4);
 R0=R1*R0;


 I(0x11fea)=R0;
STAT(3)
 STR(0x11fd9, "3*4 = ");
CODE(3)


 R0=3;
 R1=0x11ffd;
 R2=0x11fd9;
 GT(-13);
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


STAT(4)
 DAT(0x11fd5,I,2);
CODE(4)


 R0=I(0x11fd5);
 R1=I(0x11fea);
 R0=R1/R0;


 I(0x11fea)=R0;
STAT(5)
 STR(0x11fcd, "12/2 = ");
CODE(5)


 R0=6;
 R1=0x11ffd;
 R2=0x11fcd;
 GT(-13);
L 6:




 R0=7;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 7:




 R0=8;
 R1=0x11fee;
 GT(-14);
L 8:


STAT(6)
 DAT(0x11fc9,I,1);
 DAT(0x11fc5,I,7);
CODE(6)


 R0=I(0x11fc5);
 R1=I(0x11fc9);
 R0=R1+R0;
STAT(7)
 DAT(0x11fc1,I,1);
CODE(7)


 R1=I(0x11fc1);

 R0=R0+R1;


 I(0x11fea)=R0;
STAT(8)
 STR(0x11fba, "1+7 = ");
CODE(8)


 R0=9;
 R1=0x11ffd;
 R2=0x11fba;
 GT(-13);
L 9:




 R0=10;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 10:




 R0=11;
 R1=0x11fee;
 GT(-14);
L 11:


STAT(9)
 DAT(0x11fb6,I,3);
CODE(9)


 R0=I(0x11fb6);
 R1=I(0x11fea);
 R0=R1-R0;


 I(0x11fea)=R0;
STAT(10)
 STR(0x11faf, "8-3 = ");
CODE(10)


 R0=12;
 R1=0x11ffd;
 R2=0x11faf;
 GT(-13);
L 12:




 R0=13;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 13:




 R0=14;
 R1=0x11fee;
 GT(-14);
L 14:


STAT(11)
 DAT(0x11fab,I,2);
 DAT(0x11fa7,I,2);
CODE(11)


 R0=I(0x11fa7);
 R1=I(0x11fab);
 R0=R1*R0;
STAT(12)
 DAT(0x11fa3,I,3);
CODE(12)


 R1=I(0x11fa3);

 R0=R0+R1;


 I(0x11fea)=R0;
STAT(13)
 STR(0x11f9a, "2*2+3 = ");
CODE(13)


 R0=15;
 R1=0x11ffd;
 R2=0x11f9a;
 GT(-13);
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


STAT(14)
 DAT(0x11f96,I,2);
 DAT(0x11f92,I,2);
 DAT(0x11f8e,I,3);
CODE(14)


 R0=I(0x11f8e);
 R1=I(0x11f92);
 R0=R1*R0;



 R1=I(0x11f96);
 R0=R1+R0;


 I(0x11fea)=R0;
STAT(15)
 STR(0x11f85, "2+2*3 = ");
CODE(15)


 R0=18;
 R1=0x11ffd;
 R2=0x11f85;
 GT(-13);
L 18:




 R0=19;
 R1=0x11ffa;
 R2=I(0x11fea);
 GT(-12);
L 19:




 R0=20;
 R1=0x11fee;
 GT(-14);
L 20:


STAT(16)
 STR(0x11f69, "Enter a letter(n to exit): ");
CODE(16)


 R0=21;
 R1=0x11ffd;
 R2=0x11f69;
 GT(-13);
L 21:




 R0=22;
 R2=0x11fe9;
 R1=0x11ff7;
 GT(-16);
L 22:




L 23:
STAT(17)
 DAT(0x11f68,U,'n');
CODE(17)


 R0=U(0x11f68);
 R1=U(0x11fe9);
 IF(R1!=R0) GT(25);
 R0=0;
 GT(26);
L 25:
 R0=1;
L 26:



 IF(R0==0) GT(24);


STAT(18)
 DAT(0x11f67,U,'a');
CODE(18)


 R1=U(0x11f67);
 R2=U(0x11fe9);
 IF(R2==R1) GT(28);
 R1=0;
 GT(29);
L 28:
 R1=1;
L 29:



 IF(R1==0) GT(27);
STAT(19)
 STR(0x11f5d, "Muahahaha");
CODE(19)


 R0=30;
 R1=0x11ffd;
 R2=0x11f5d;
 GT(-13);
L 30:




 R0=31;
 R1=0x11fee;
 GT(-14);
L 31:




L 27:


STAT(20)
 DAT(0x11f5c,U,'3');
CODE(20)


 R2=U(0x11f5c);
 R3=U(0x11fe9);
 IF(R3==R2) GT(33);
 R2=0;
 GT(34);
L 33:
 R2=1;
L 34:

STAT(21)
 DAT(0x11f5b,U,'7');
CODE(21)


 R3=U(0x11f5b);
 R4=U(0x11fe9);
 IF(R4<=R3) GT(35);
 R3=0;
 GT(36);
L 35:
 R3=1;
L 36:

STAT(22)
 DAT(0x11f5a,U,'5');
CODE(22)


 R4=U(0x11f5a);
 R5=U(0x11fe9);
 IF(R5>=R4) GT(37);
 R4=0;
 GT(38);
L 37:
 R4=1;
L 38:



 R3=R3*R4;


 R2=R2+R3;


 IF(R2==0) GT(32);
STAT(23)
 STR(0x11f51, "Numero: ");
CODE(23)


 R0=39;
 R1=0x11ffd;
 R2=0x11f51;
 GT(-13);
L 39:




 R0=40;
 R1=0x11ff7;
 R2=U(0x11fe9);
 GT(-12);
L 40:




 R0=41;
 R1=0x11fee;
 GT(-14);
L 41:




L 32:
STAT(24)
 STR(0x11f35, "Enter a letter(n to exit): ");
CODE(24)


 R0=42;
 R1=0x11ffd;
 R2=0x11f35;
 GT(-13);
L 42:




 R0=43;
 R2=0x11fe9;
 R1=0x11ff7;
 GT(-16);
L 43:




 GT(23);
L 24:
STAT(25)
 STR(0x11f29, "You're out!");
CODE(25)


 R0=44;
 R1=0x11ffd;
 R2=0x11f29;
 GT(-13);
L 44:




 R0=45;
 R1=0x11fee;
 GT(-14);
L 45:


 R0=0;
 GT(-2);
END
