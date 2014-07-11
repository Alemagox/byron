#include "Q.h"
# 1 "<stdin>"
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


L 2:
 R6=R7;
 R7=R7-0;
STAT(1)
 STR(0x11fd0, "Expresion erronea. Last car: ");
CODE(1)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=3;
 R1=0x11ffd;
 R2=0x11fd0;
 GT(-13);
L 3:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 R7=R6;
 R6=P(R7);
 GT(R6);




L 4:
 R6=R7;
 R7=R7-0;
STAT(2)
 DAT(0x11fcc,I,0);
CODE(2)



 R0=I(0x11fcc);
 I(R6+12)=R0;



STAT(3)
 DAT(0x11fc8,U,'0');
CODE(3)



 R0=U(0x11fc8);

 R1=U(R6+8);
 IF(R1<R0) GT(6);
 R0=0;
 GT(7);
L 6:
 R0=1;
L 7:


STAT(4)
 DAT(0x11fc4,U,'9');
CODE(4)



 R1=U(0x11fc4);

 R2=U(R6+8);
 IF(R2>R1) GT(8);
 R1=0;
 GT(9);
L 8:
 R1=1;
L 9:




 R0=R0+R1;




 IF(R0==0) GT(10);


 R7=R7-8;
 P(R7+4)=R6;
 P(R7)=11;
 GT(2);
L 11:
 R6=P(R7+4);
 R7=R7+8;


STAT(5)
 STR(0x11fba, "Numero: '");
CODE(5)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=12;
 R1=0x11ffd;
 R2=0x11fba;
 GT(-13);
L 12:
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
 R0=13;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
L 13:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(6)
 STR(0x11fb6, "'\n");
CODE(6)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=14;
 R1=0x11ffd;
 R2=0x11fb6;
 GT(-13);
L 14:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(5);


L 10:
L 5:




L 15:
STAT(7)
 DAT(0x11fb2,U,'0');
CODE(7)



 R0=U(0x11fb2);

 R1=U(R6+8);
 IF(R1>R0) GT(17);
 R0=0;
 GT(18);
L 17:
 R0=1;
L 18:


STAT(8)
 DAT(0x11fae,U,'9');
CODE(8)



 R1=U(0x11fae);

 R2=U(R6+8);
 IF(R2<R1) GT(19);
 R1=0;
 GT(20);
L 19:
 R1=1;
L 20:




 R0=R0*R1;




 IF(R0==0) GT(16);
STAT(9)
 DAT(0x11faa,I,10);
CODE(9)



 R0=I(R6+12);

 R1=I(0x11faa);
 R0=R1*R0;




 R1=U(R6+8);

 R0=R0+R1;

STAT(10)
 DAT(0x11fa6,U,'0');
CODE(10)



 R1=U(0x11fa6);

 R0=R0-R1;



 I(R6+12)=R0;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=21;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 21:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(15);


L 16:
 R7=R6;
 R6=P(R7);
 GT(R6);




L 22:
 R6=R7;
 R7=R7-0;


STAT(11)
 DAT(0x11fa2,U,'(');
CODE(11)



 R0=U(0x11fa2);

 R1=U(R6+8);
 IF(R1==R0) GT(24);
 R0=0;
 GT(25);
L 24:
 R0=1;
L 25:





 IF(R0==0) GT(26);


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=27;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 27:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-16;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=28;
 GT(1);
L 28:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6+12)=R0;

 R7=R7+16;




STAT(12)
 DAT(0x11f9e,U,')');
CODE(12)



 R0=U(0x11f9e);

 R1=U(R6+8);
 IF(R1==R0) GT(30);
 R0=0;
 GT(31);
L 30:
 R0=1;
L 31:





 IF(R0==0) GT(32);


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=33;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 33:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(29);


L 32:




 R7=R7-8;
 P(R7+4)=R6;
 P(R7)=34;
 GT(2);
L 34:
 R6=P(R7+4);
 R7=R7+8;


STAT(13)
 STR(0x11f94, "Factor: '");
CODE(13)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=35;
 R1=0x11ffd;
 R2=0x11f94;
 GT(-13);
L 35:
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
 R0=36;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
L 36:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(14)
 STR(0x11f90, "'\n");
CODE(14)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=37;
 R1=0x11ffd;
 R2=0x11f90;
 GT(-13);
L 37:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


L 29:


 GT(23);


L 26:




 R7=R7-16;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=38;
 GT(4);
L 38:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6+12)=R0;

 R7=R7+16;


L 23:


 R7=R6;
 R6=P(R7);
 GT(R6);




L 39:
 R6=R7;
 R7=R7-8;


 R7=R7-16;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=40;
 GT(22);
L 40:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6+12)=R0;

 R7=R7+16;




L 41:
STAT(15)
 DAT(0x11f8c,U,'*');
CODE(15)



 R0=U(0x11f8c);

 R1=U(R6+8);
 IF(R1==R0) GT(43);
 R0=0;
 GT(44);
L 43:
 R0=1;
L 44:


STAT(16)
 DAT(0x11f88,U,'/');
CODE(16)



 R1=U(0x11f88);

 R2=U(R6+8);
 IF(R2==R1) GT(45);
 R1=0;
 GT(46);
L 45:
 R1=1;
L 46:




 R0=R0+R1;




 IF(R0==0) GT(42);



 R0=U(R6+8);
 U(R6-4)=R0;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=47;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 47:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-16;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=48;
 GT(22);
L 48:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6-8)=R0;

 R7=R7+16;




STAT(17)
 DAT(0x11f84,U,'*');
CODE(17)



 R0=U(0x11f84);

 R1=U(R6-4);
 IF(R1==R0) GT(50);
 R0=0;
 GT(51);
L 50:
 R0=1;
L 51:





 IF(R0==0) GT(52);



 R0=I(R6-8);

 R1=I(R6+12);
 R0=R1*R0;



 I(R6+12)=R0;

 GT(49);


L 52:
L 49:




STAT(18)
 DAT(0x11f80,U,'/');
CODE(18)



 R0=U(0x11f80);

 R1=U(R6-4);
 IF(R1==R0) GT(54);
 R0=0;
 GT(55);
L 54:
 R0=1;
L 55:





 IF(R0==0) GT(56);



 R0=I(R6-8);

 R1=I(R6+12);
 R0=R1/R0;



 I(R6+12)=R0;

 GT(53);


L 56:
L 53:


 GT(41);


L 42:
 R7=R6;
 R6=P(R7);
 GT(R6);




L 1:
 R6=R7;
 R7=R7-8;


STAT(19)
 DAT(0x11f7c,U,'+');
CODE(19)



 R0=U(0x11f7c);

 R1=U(R6+8);
 IF(R1==R0) GT(58);
 R0=0;
 GT(59);
L 58:
 R0=1;
L 59:


STAT(20)
 DAT(0x11f78,U,'-');
CODE(20)



 R1=U(0x11f78);

 R2=U(R6+8);
 IF(R2==R1) GT(60);
 R1=0;
 GT(61);
L 60:
 R1=1;
L 61:




 R0=R0+R1;




 IF(R0==0) GT(62);



 R0=U(R6+8);
 U(R6-4)=R0;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=63;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 63:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(57);


L 62:
L 57:




 R7=R7-16;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=64;
 GT(39);
L 64:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6+12)=R0;

 R7=R7+16;




STAT(21)
 DAT(0x11f74,U,'-');
CODE(21)



 R0=U(0x11f74);

 R1=U(R6-4);
 IF(R1==R0) GT(66);
 R0=0;
 GT(67);
L 66:
 R0=1;
L 67:





 IF(R0==0) GT(68);



 R0=I(R6+12);
 I(R6+12)=R0;

 GT(65);


L 68:
L 65:




L 69:
STAT(22)
 DAT(0x11f70,U,'+');
CODE(22)



 R0=U(0x11f70);

 R1=U(R6+8);
 IF(R1==R0) GT(71);
 R0=0;
 GT(72);
L 71:
 R0=1;
L 72:


STAT(23)
 DAT(0x11f6c,U,'-');
CODE(23)



 R1=U(0x11f6c);

 R2=U(R6+8);
 IF(R2==R1) GT(73);
 R1=0;
 GT(74);
L 73:
 R1=1;
L 74:




 R0=R0+R1;




 IF(R0==0) GT(70);



 R0=U(R6+8);
 U(R6-4)=R0;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=75;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 75:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-16;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=76;
 GT(39);
L 76:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6-8)=R0;

 R7=R7+16;




STAT(24)
 DAT(0x11f68,U,'+');
CODE(24)



 R0=U(0x11f68);

 R1=U(R6-4);
 IF(R1==R0) GT(78);
 R0=0;
 GT(79);
L 78:
 R0=1;
L 79:





 IF(R0==0) GT(80);



 R0=I(R6-8);

 R1=I(R6+12);
 R0=R1+R0;



 I(R6+12)=R0;

 GT(77);


L 80:
L 77:




STAT(25)
 DAT(0x11f64,U,'-');
CODE(25)



 R0=U(0x11f64);

 R1=U(R6-4);
 IF(R1==R0) GT(82);
 R0=0;
 GT(83);
L 82:
 R0=1;
L 83:





 IF(R0==0) GT(84);



 R0=I(R6-8);

 R1=I(R6+12);
 R0=R1-R0;



 I(R6+12)=R0;

 GT(81);


L 84:
L 81:


 GT(69);


L 70:
 R7=R6;
 R6=P(R7);
 GT(R6);


STAT(26)
 DAT(0x11f60,U,0);
 DAT(0x11f5c,U,0);
 DAT(0x11f58,I,0);
CODE(26)
L 0:
 R6=R7;
STAT(27)
 DAT(0x11f54,U,'y');
CODE(27)



 R0=U(0x11f54);
 U(0x11f5c)=R0;



L 85:
STAT(28)
 DAT(0x11f50,U,'n');
CODE(28)



 R0=U(0x11f50);

 R1=U(0x11f5c);
 IF(R1!=R0) GT(87);
 R0=0;
 GT(88);
L 87:
 R0=1;
L 88:





 IF(R0==0) GT(86);
STAT(29)
 STR(0x11f3a, "Put your expression: ");
CODE(29)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=89;
 R1=0x11ffd;
 R2=0x11f3a;
 GT(-13);
L 89:
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
 R0=90;
 R2=0x11f5c;
 R1=0x11ff7;
 GT(-16);
L 90:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-16;

 R0=U(0x11f5c);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=91;
 GT(1);
L 91:
 R6=P(R7+4);

 R0=U(R7+8);
 U(0x11f5c)=R0;


 R0=I(R7+12);
 I(0x11f58)=R0;

 R7=R7+16;


STAT(30)
 STR(0x11f2e, "Result is: ");
CODE(30)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=92;
 R1=0x11ffd;
 R2=0x11f2e;
 GT(-13);
L 92:
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
 R0=93;
 R1=0x11ffa;
 R2=I(0x11f58);
 GT(-12);
L 93:
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
 R0=94;
 R1=0x11fee;
 GT(-14);
L 94:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(31)
 STR(0x11f17, "New expression?(y/n): ");
CODE(31)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=95;
 R1=0x11ffd;
 R2=0x11f17;
 GT(-13);
L 95:
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
 R0=96;
 R2=0x11f5c;
 R1=0x11ff7;
 GT(-16);
L 96:
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
 R0=97;
 R2=0x11f60;
 R1=0x11ff7;
 GT(-16);
L 97:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




L 98:
STAT(32)
 DAT(0x11f13,U,';');
CODE(32)



 R0=U(0x11f13);

 R1=U(0x11f60);
 IF(R1!=R0) GT(100);
 R0=0;
 GT(101);
L 100:
 R0=1;
L 101:





 IF(R0==0) GT(99);


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=102;
 R2=0x11f60;
 R1=0x11ff7;
 GT(-16);
L 102:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(98);


L 99:


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=103;
 R2=0x11f60;
 R1=0x11ff7;
 GT(-16);
L 103:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(85);


L 86:
 R0=0;
 GT(-2);
END
