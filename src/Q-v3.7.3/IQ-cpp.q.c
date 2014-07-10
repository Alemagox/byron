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
 STR(0x11fdc, "Expresion erronea");
CODE(1)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=2;
 R1=0x11ffd;
 R2=0x11fdc;
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
 R0=3;
 R1=0x11fee;
 GT(-14);
L 3:
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
 DAT(0x11fd8,I,0);
CODE(2)



 R0=I(0x11fd8);
 I(R6+9)=R0;



STAT(3)
 DAT(0x11fd7,U,'0');
CODE(3)



 R0=U(0x11fd7);

 R1=U(R6+8);
 IF(R1<R0) GT(6);
 R0=0;
 GT(7);
L 6:
 R0=1;
L 7:


STAT(4)
 DAT(0x11fd6,U,'9');
CODE(4)



 R1=U(0x11fd6);

 R2=U(R6+8);
 IF(R2>R1) GT(8);
 R1=0;
 GT(9);
L 8:
 R1=1;
L 9:




 R0=R0+R1;




 IF(R0==0) GT(5);


 R7=R7-8;
 P(R7+4)=R6;
 P(R7)=10;
 GT(1);
L 10:
 R6=P(R7+4);
 R7=R7+8;





L 5:


L 11:
STAT(5)
 DAT(0x11fd5,U,'0');
CODE(5)



 R5=U(0x11fd5);

 R0=U(R6+8);
 IF(R0>R5) GT(13);
 R5=0;
 GT(14);
L 13:
 R5=1;
L 14:


STAT(6)
 DAT(0x11fd4,U,'9');
CODE(6)



 R0=U(0x11fd4);

 R1=U(R6+8);
 IF(R1<R0) GT(15);
 R0=0;
 GT(16);
L 15:
 R0=1;
L 16:




 R0=R5*R0;



 IF(R5==0) GT(12);
STAT(7)
 DAT(0x11fd0,I,10);
CODE(7)



 R0=I(R6+9);

 R1=I(0x11fd0);
 R0=R1*R0;




 R1=U(R6+8);

 R0=R0+R1;

STAT(8)
 DAT(0x11fcf,U,'0');
CODE(8)



 R1=U(0x11fcf);

 R0=R0-R1;



 I(R6+9)=R0;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=17;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 17:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(11);


L 12:
 R7=R6;
 R6=P(R7);
 GT(R6);




L 18:
 R6=R7;
 R7=R7-0;
STAT(9)
 DAT(0x11fcb,I,0);
CODE(9)



 R0=I(0x11fcb);
 I(R6+9)=R0;



STAT(10)
 DAT(0x11fca,U,'(');
CODE(10)



 R0=U(0x11fca);

 R1=U(R6+8);
 IF(R1==R0) GT(20);
 R0=0;
 GT(21);
L 20:
 R0=1;
L 21:





 IF(R0==0) GT(19);


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=22;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 22:
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
 P(R7)=23;
 GT(0);
L 23:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+8);
 I(R6+9)=R0;

 R7=R7+8;




STAT(11)
 DAT(0x11fc9,U,')');
CODE(11)



 R0=U(0x11fc9);

 R1=U(R6+8);
 IF(R1==R0) GT(25);
 R0=0;
 GT(26);
L 25:
 R0=1;
L 26:





 IF(R0==0) GT(24);


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





L 24:




 R7=R7-8;
 P(R7+4)=R6;
 P(R7)=28;
 GT(1);
L 28:
 R6=P(R7+4);
 R7=R7+8;





L 19:


STAT(12)
 STR(0x11fbb, "Paso a numero");
CODE(12)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=29;
 R1=0x11ffd;
 R2=0x11fbb;
 GT(-13);
L 29:
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
 R0=30;
 R1=0x11fee;
 GT(-14);
L 30:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-13;

 R4=U(R6+8);

 U(R7+8)=R4;

 P(R7+4)=R6;
 P(R7)=31;
 GT(4);
L 31:
 R6=P(R7+4);

 R4=U(R7+8);
 U(R6+8)=R4;


 R4=I(R7+9);
 I(R6+9)=R4;

 R7=R7+13;


 R7=R6;
 R6=P(R7);
 GT(R6);




L 32:
 R6=R7;
 R7=R7-5;


 R7=R7-13;

 R4=U(R6+8);

 U(R7+8)=R4;

 P(R7+4)=R6;
 P(R7)=33;
 GT(18);
L 33:
 R6=P(R7+4);

 R4=U(R7+8);
 U(R6+8)=R4;


 R4=I(R7+9);
 I(R6+9)=R4;

 R7=R7+13;


STAT(13)
 STR(0x11fac, "Sale de factor");
CODE(13)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=34;
 R1=0x11ffd;
 R2=0x11fac;
 GT(-13);
L 34:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




L 35:
STAT(14)
 DAT(0x11fab,U,'*');
CODE(14)



 R4=U(0x11fab);

 R5=U(R6+8);
 IF(R5==R4) GT(37);
 R4=0;
 GT(38);
L 37:
 R4=1;
L 38:


STAT(15)
 DAT(0x11faa,U,'/');
CODE(15)



 R5=U(0x11faa);

 R0=U(R6+8);
 IF(R0==R5) GT(39);
 R5=0;
 GT(40);
L 39:
 R5=1;
L 40:




 R4=R4+R5;



 IF(R4==0) GT(36);



 R5=U(R6+8);
 U(R6+8)=R5;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=41;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 41:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-13;

 R5=U(R6+8);

 U(R7+8)=R5;

 P(R7+4)=R6;
 P(R7)=42;
 GT(18);
L 42:
 R6=P(R7+4);

 R5=U(R7+8);
 U(R6+8)=R5;


 R5=I(R7+9);
 I(R6+8)=R5;

 R7=R7+13;




STAT(16)
 DAT(0x11fa9,U,'*');
CODE(16)



 R5=U(0x11fa9);

 R0=U(R6+8);
 IF(R0==R5) GT(44);
 R5=0;
 GT(45);
L 44:
 R5=1;
L 45:





 IF(R5==0) GT(43);



 R5=I(R6+8);

 R0=I(R6+9);
 R0=R0*R5;



 I(R6+9)=R5;




L 43:


STAT(17)
 DAT(0x11fa8,U,'/');
CODE(17)



 R4=U(0x11fa8);

 R5=U(R6+8);
 IF(R5==R4) GT(47);
 R4=0;
 GT(48);
L 47:
 R4=1;
L 48:





 IF(R4==0) GT(46);



 R4=I(R6+8);

 R5=I(R6+9);
 R4=R5/R4;



 I(R6+9)=R4;




L 46:
 GT(35);


L 36:
 R7=R6;
 R6=P(R7);
 GT(R6);




L 49:
 R6=R7;
 R7=R7-5;
STAT(18)
 STR(0x11fa6, "-");
CODE(18)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=50;
 R1=0x11ffd;
 R2=0x11fa6;
 GT(-13);
L 50:
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
 R0=51;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
L 51:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(19)
 STR(0x11fa4, "-");
CODE(19)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=52;
 R1=0x11ffd;
 R2=0x11fa4;
 GT(-13);
L 52:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




STAT(20)
 DAT(0x11fa3,U,'+');
CODE(20)



 R3=U(0x11fa3);

 R4=U(R6+8);
 IF(R4==R3) GT(54);
 R3=0;
 GT(55);
L 54:
 R3=1;
L 55:


STAT(21)
 DAT(0x11fa2,U,'-');
CODE(21)



 R4=U(0x11fa2);

 R5=U(R6+8);
 IF(R5==R4) GT(56);
 R4=0;
 GT(57);
L 56:
 R4=1;
L 57:




 R3=R3+R4;




 IF(R3==0) GT(53);



 R3=U(R6+8);
 U(R6+8)=R3;

STAT(22)
 STR(0x11f9f, "Op");
CODE(22)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=58;
 R1=0x11ffd;
 R2=0x11f9f;
 GT(-13);
L 58:
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
 R0=59;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 59:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;





L 53:


 R7=R7-13;

 R2=U(R6+8);

 U(R7+8)=R2;

 P(R7+4)=R6;
 P(R7)=60;
 GT(32);
L 60:
 R6=P(R7+4);

 R2=U(R7+8);
 U(R6+8)=R2;


 R2=I(R7+9);
 I(R6+9)=R2;

 R7=R7+13;




STAT(23)
 DAT(0x11f9e,U,'-');
CODE(23)



 R2=U(0x11f9e);

 R3=U(R6+8);
 IF(R3==R2) GT(62);
 R2=0;
 GT(63);
L 62:
 R2=1;
L 63:





 IF(R2==0) GT(61);



 R2=I(R6+9);
 I(R6+9)=R2;




L 61:


L 64:
STAT(24)
 DAT(0x11f9d,U,'+');
CODE(24)



 R1=U(0x11f9d);

 R2=U(R6+8);
 IF(R2==R1) GT(66);
 R1=0;
 GT(67);
L 66:
 R1=1;
L 67:


STAT(25)
 DAT(0x11f9c,U,'-');
CODE(25)



 R2=U(0x11f9c);

 R3=U(R6+8);
 IF(R3==R2) GT(68);
 R2=0;
 GT(69);
L 68:
 R2=1;
L 69:




 R1=R1+R2;



 IF(R1==0) GT(65);



 R2=U(R6+8);
 U(R6+8)=R2;

STAT(26)
 STR(0x11f98, "Op2");
CODE(26)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=70;
 R1=0x11ffd;
 R2=0x11f98;
 GT(-13);
L 70:
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
 R0=71;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 71:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-13;

 R2=U(R6+8);

 U(R7+8)=R2;

 P(R7+4)=R6;
 P(R7)=72;
 GT(32);
L 72:
 R6=P(R7+4);

 R2=U(R7+8);
 U(R6+8)=R2;


 R2=I(R7+9);
 I(R6+8)=R2;

 R7=R7+13;




STAT(27)
 DAT(0x11f97,U,'+');
CODE(27)



 R2=U(0x11f97);

 R3=U(R6+8);
 IF(R3==R2) GT(74);
 R2=0;
 GT(75);
L 74:
 R2=1;
L 75:





 IF(R2==0) GT(73);



 R2=I(R6+8);

 R3=I(R6+9);
 R2=R3+R2;



 I(R6+9)=R2;




L 73:


STAT(28)
 DAT(0x11f96,U,'-');
CODE(28)



 R1=U(0x11f96);

 R2=U(R6+8);
 IF(R2==R1) GT(77);
 R1=0;
 GT(78);
L 77:
 R1=1;
L 78:





 IF(R1==0) GT(76);



 R1=I(R6+8);

 R2=I(R6+9);
 R1=R2-R1;



 I(R6+9)=R1;




L 76:
 GT(64);


L 65:
 R7=R6;
 R6=P(R7);
 GT(R6);


STAT(29)
 DAT(0x11f95,U,0);
 DAT(0x11f91,I,0);
CODE(29)
L 0:
 R6=R7;
STAT(30)
 DAT(0x11f90,U,'y');
CODE(30)



 R0=U(0x11f90);
 U(0x11f95)=R0;



L 79:
STAT(31)
 DAT(0x11f8f,U,'n');
CODE(31)



 R0=U(0x11f8f);

 R1=U(0x11f95);
 IF(R1!=R0) GT(81);
 R0=0;
 GT(82);
L 81:
 R0=1;
L 82:




 IF(R0==0) GT(80);


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=83;
 R2=0x11f95;
 R1=0x11ff7;
 GT(-16);
L 83:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-13;

 R1=U(0x11f95);

 U(R7+8)=R1;

 P(R7+4)=R6;
 P(R7)=84;
 GT(49);
L 84:
 R6=P(R7+4);

 R1=U(R7+8);
 U(0x11f95)=R1;


 R1=I(R7+9);
 I(0x11f91)=R1;

 R7=R7+13;


STAT(32)
 STR(0x11f83, "Result is: ");
CODE(32)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=85;
 R1=0x11ffd;
 R2=0x11f83;
 GT(-13);
L 85:
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
 R0=86;
 R1=0x11ffa;
 R2=I(0x11f91);
 GT(-12);
L 86:
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
 R0=87;
 R1=0x11fee;
 GT(-14);
L 87:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(33)
 STR(0x11f6c, "New expression?(y/n): ");
CODE(33)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=88;
 R1=0x11ffd;
 R2=0x11f6c;
 GT(-13);
L 88:
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
 R0=89;
 R2=0x11f95;
 R1=0x11ff7;
 GT(-16);
L 89:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(79);


L 80:
 R0=0;
 GT(-2);
END
