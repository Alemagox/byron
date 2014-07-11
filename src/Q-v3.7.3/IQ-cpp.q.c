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
 R0=2;
 R1=0x11ffd;
 R2=0x11fd0;
 GT(-13);
L 2:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 R7=R6;
 R6=P(R7);
 GT(R6);




L 3:
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
 IF(R1<R0) GT(5);
 R0=0;
 GT(6);
L 5:
 R0=1;
L 6:


STAT(4)
 DAT(0x11fc4,U,'9');
CODE(4)



 R1=U(0x11fc4);

 R2=U(R6+8);
 IF(R2>R1) GT(7);
 R1=0;
 GT(8);
L 7:
 R1=1;
L 8:




 R0=R0+R1;




 IF(R0==0) GT(9);


 R7=R7-8;
 P(R7+4)=R6;
 P(R7)=10;
 GT(1);
L 10:
 R6=P(R7+4);
 R7=R7+8;


STAT(5)
 STR(0x11fbb, "Numero: ");
CODE(5)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=11;
 R1=0x11ffd;
 R2=0x11fbb;
 GT(-13);
L 11:
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
 R0=12;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
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
 R0=13;
 R1=0x11fee;
 GT(-14);
L 13:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(4);


L 9:
L 4:




L 14:
STAT(6)
 DAT(0x11fb7,U,'0');
CODE(6)



 R0=U(0x11fb7);

 R1=U(R6+8);
 IF(R1>R0) GT(16);
 R0=0;
 GT(17);
L 16:
 R0=1;
L 17:


STAT(7)
 DAT(0x11fb3,U,'9');
CODE(7)



 R1=U(0x11fb3);

 R2=U(R6+8);
 IF(R2<R1) GT(18);
 R1=0;
 GT(19);
L 18:
 R1=1;
L 19:




 R0=R0*R1;




 IF(R0==0) GT(15);
STAT(8)
 DAT(0x11faf,I,10);
CODE(8)



 R0=I(R6+12);

 R1=I(0x11faf);
 R0=R1*R0;




 R1=U(R6+8);

 R0=R0+R1;

STAT(9)
 DAT(0x11fab,U,'0');
CODE(9)



 R1=U(0x11fab);

 R0=R0-R1;



 I(R6+12)=R0;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=20;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 20:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(14);


L 15:
 R7=R6;
 R6=P(R7);
 GT(R6);




L 21:
 R6=R7;
 R7=R7-0;
STAT(10)
 DAT(0x11fa7,I,0);
CODE(10)



 R0=I(0x11fa7);
 I(R6+12)=R0;



STAT(11)
 DAT(0x11fa3,U,'(');
CODE(11)



 R0=U(0x11fa3);

 R1=U(R6+8);
 IF(R1==R0) GT(23);
 R0=0;
 GT(24);
L 23:
 R0=1;
L 24:





 IF(R0==0) GT(25);


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=26;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 26:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-8;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=27;
 GT(0);
L 27:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+8);
 I(R6+12)=R0;

 R7=R7+8;




STAT(12)
 DAT(0x11f9f,U,')');
CODE(12)



 R0=U(0x11f9f);

 R1=U(R6+8);
 IF(R1==R0) GT(29);
 R0=0;
 GT(30);
L 29:
 R0=1;
L 30:





 IF(R0==0) GT(31);


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=32;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 32:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(28);


L 31:




 R7=R7-8;
 P(R7+4)=R6;
 P(R7)=33;
 GT(1);
L 33:
 R6=P(R7+4);
 R7=R7+8;


STAT(13)
 STR(0x11f96, "Factor: ");
CODE(13)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=34;
 R1=0x11ffd;
 R2=0x11f96;
 GT(-13);
L 34:
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
 R0=35;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
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
 R0=36;
 R1=0x11fee;
 GT(-14);
L 36:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


L 28:


 GT(22);


L 25:




 R7=R7-16;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=37;
 GT(3);
L 37:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6+12)=R0;

 R7=R7+16;


L 22:


 R7=R6;
 R6=P(R7);
 GT(R6);




L 38:
 R6=R7;
 R7=R7-8;


 R7=R7-16;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=39;
 GT(21);
L 39:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6+12)=R0;

 R7=R7+16;




L 40:
STAT(14)
 DAT(0x11f92,U,'*');
CODE(14)



 R0=U(0x11f92);

 R1=U(R6+8);
 IF(R1==R0) GT(42);
 R0=0;
 GT(43);
L 42:
 R0=1;
L 43:


STAT(15)
 DAT(0x11f8e,U,'/');
CODE(15)



 R1=U(0x11f8e);

 R2=U(R6+8);
 IF(R2==R1) GT(44);
 R1=0;
 GT(45);
L 44:
 R1=1;
L 45:




 R0=R0+R1;




 IF(R0==0) GT(41);



 R0=U(R6+8);
 U(R6-4)=R0;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=46;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 46:
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
 P(R7)=47;
 GT(21);
L 47:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6-8)=R0;

 R7=R7+16;




STAT(16)
 DAT(0x11f8a,U,'*');
CODE(16)



 R0=U(0x11f8a);

 R1=U(R6-4);
 IF(R1==R0) GT(49);
 R0=0;
 GT(50);
L 49:
 R0=1;
L 50:





 IF(R0==0) GT(51);



 R0=I(R6-8);

 R1=I(R6+12);
 R0=R1*R0;



 I(R6+12)=R0;

 GT(48);


L 51:
L 48:




STAT(17)
 DAT(0x11f86,U,'/');
CODE(17)



 R0=U(0x11f86);

 R1=U(R6-4);
 IF(R1==R0) GT(53);
 R0=0;
 GT(54);
L 53:
 R0=1;
L 54:





 IF(R0==0) GT(55);



 R0=I(R6-8);

 R1=I(R6+12);
 R0=R1/R0;



 I(R6+12)=R0;

 GT(52);


L 55:
L 52:


 GT(40);


L 41:
 R7=R6;
 R6=P(R7);
 GT(R6);




L 56:
 R6=R7;
 R7=R7-8;


STAT(18)
 DAT(0x11f82,U,'+');
CODE(18)



 R0=U(0x11f82);

 R1=U(R6+8);
 IF(R1==R0) GT(58);
 R0=0;
 GT(59);
L 58:
 R0=1;
L 59:


STAT(19)
 DAT(0x11f7e,U,'-');
CODE(19)



 R1=U(0x11f7e);

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
 GT(38);
L 64:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6+12)=R0;

 R7=R7+16;




STAT(20)
 DAT(0x11f7a,U,'-');
CODE(20)



 R0=U(0x11f7a);

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
STAT(21)
 DAT(0x11f76,U,'+');
CODE(21)



 R0=U(0x11f76);

 R1=U(R6+8);
 IF(R1==R0) GT(71);
 R0=0;
 GT(72);
L 71:
 R0=1;
L 72:


STAT(22)
 DAT(0x11f72,U,'-');
CODE(22)



 R1=U(0x11f72);

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
 GT(38);
L 76:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+12);
 I(R6-8)=R0;

 R7=R7+16;




STAT(23)
 DAT(0x11f6e,U,'+');
CODE(23)



 R0=U(0x11f6e);

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




STAT(24)
 DAT(0x11f6a,U,'-');
CODE(24)



 R0=U(0x11f6a);

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


STAT(25)
 DAT(0x11f66,U,0);
 DAT(0x11f62,U,0);
 DAT(0x11f5e,I,0);
CODE(25)
L 0:
 R6=R7;
STAT(26)
 DAT(0x11f5a,U,'y');
CODE(26)



 R0=U(0x11f5a);
 U(0x11f62)=R0;



L 85:
STAT(27)
 DAT(0x11f56,U,'n');
CODE(27)



 R0=U(0x11f56);

 R1=U(0x11f62);
 IF(R1!=R0) GT(87);
 R0=0;
 GT(88);
L 87:
 R0=1;
L 88:





 IF(R0==0) GT(86);
STAT(28)
 STR(0x11f40, "Put your expression: ");
CODE(28)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=89;
 R1=0x11ffd;
 R2=0x11f40;
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
 R2=0x11f62;
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

 R0=U(0x11f62);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=91;
 GT(56);
L 91:
 R6=P(R7+4);

 R0=U(R7+8);
 U(0x11f62)=R0;


 R0=I(R7+12);
 I(0x11f5e)=R0;

 R7=R7+16;


STAT(29)
 STR(0x11f34, "Result is: ");
CODE(29)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=92;
 R1=0x11ffd;
 R2=0x11f34;
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
 R2=I(0x11f5e);
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


STAT(30)
 STR(0x11f1d, "New expression?(y/n): ");
CODE(30)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=95;
 R1=0x11ffd;
 R2=0x11f1d;
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
 R2=0x11f62;
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
 R2=0x11f66;
 R1=0x11ff7;
 GT(-16);
L 97:
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
