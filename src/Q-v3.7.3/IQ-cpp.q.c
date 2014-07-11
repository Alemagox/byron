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




 IF(R0==0) GT(10);


 R7=R7-8;
 P(R7+4)=R6;
 P(R7)=11;
 GT(1);
L 11:
 R6=P(R7+4);
 R7=R7+8;


 GT(5);


L 10:
L 5:




L 12:
STAT(5)
 DAT(0x11fd5,U,'0');
CODE(5)



 R0=U(0x11fd5);

 R1=U(R6+8);
 IF(R1>R0) GT(14);
 R0=0;
 GT(15);
L 14:
 R0=1;
L 15:


STAT(6)
 DAT(0x11fd4,U,'9');
CODE(6)



 R1=U(0x11fd4);

 R2=U(R6+8);
 IF(R2<R1) GT(16);
 R1=0;
 GT(17);
L 16:
 R1=1;
L 17:




 R0=R0*R1;




 IF(R0==0) GT(13);
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
 R0=18;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 18:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(12);


L 13:
 R7=R6;
 R6=P(R7);
 GT(R6);




L 19:
 R6=R7;
 R7=R7-5;


STAT(9)
 DAT(0x11fce,U,'+');
CODE(9)



 R0=U(0x11fce);

 R1=U(R6+8);
 IF(R1==R0) GT(21);
 R0=0;
 GT(22);
L 21:
 R0=1;
L 22:


STAT(10)
 DAT(0x11fcd,U,'-');
CODE(10)



 R1=U(0x11fcd);

 R2=U(R6+8);
 IF(R2==R1) GT(23);
 R1=0;
 GT(24);
L 23:
 R1=1;
L 24:




 R0=R0+R1;




 IF(R0==0) GT(25);
STAT(11)
 STR(0x11fc7, "Op is");
CODE(11)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=26;
 R1=0x11ffd;
 R2=0x11fc7;
 GT(-13);
L 26:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;





 R0=U(R6+8);
 U(R6-8)=R0;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=27;
 R1=0x11ff7;
 R2=U(R6-8);
 GT(-12);
L 27:
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
 R0=28;
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
L 28:
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
 R0=29;
 R1=0x11fee;
 GT(-14);
L 29:
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
 R0=30;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 30:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(20);


L 25:
L 20:




 R7=R7-13;

 R0=U(R6+8);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=31;
 GT(4);
L 31:
 R6=P(R7+4);

 R0=U(R7+8);
 U(R6+8)=R0;


 R0=I(R7+9);
 I(R6+9)=R0;

 R7=R7+13;




STAT(12)
 DAT(0x11fc6,U,'-');
CODE(12)



 R0=U(0x11fc6);

 R1=U(R6-8);
 IF(R1==R0) GT(33);
 R0=0;
 GT(34);
L 33:
 R0=1;
L 34:





 IF(R0==0) GT(35);



 R0=I(R6+9);
 I(R6+9)=R0;

 GT(32);


L 35:
L 32:


 R7=R6;
 R6=P(R7);
 GT(R6);


STAT(13)
 DAT(0x11fc5,U,0);
 DAT(0x11fc4,U,0);
 DAT(0x11fc0,I,0);
CODE(13)
L 0:
 R6=R7;
STAT(14)
 DAT(0x11fbf,U,'y');
CODE(14)



 R0=U(0x11fbf);
 U(0x11fc5)=R0;



L 36:
STAT(15)
 DAT(0x11fbe,U,'n');
CODE(15)



 R0=U(0x11fbe);

 R1=U(0x11fc5);
 IF(R1!=R0) GT(38);
 R0=0;
 GT(39);
L 38:
 R0=1;
L 39:





 IF(R0==0) GT(37);
STAT(16)
 STR(0x11fa9, "La bola de cristal: ");
CODE(16)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=40;
 R1=0x11ffd;
 R2=0x11fa9;
 GT(-13);
L 40:
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
 R0=41;
 R2=0x11fc4;
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

 R0=U(0x11fc4);

 U(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=42;
 GT(19);
L 42:
 R6=P(R7+4);

 R0=U(R7+8);
 U(0x11fc4)=R0;


 R0=I(R7+9);
 I(0x11fc0)=R0;

 R7=R7+13;


STAT(17)
 STR(0x11f9d, "Resultado: ");
CODE(17)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=43;
 R1=0x11ffd;
 R2=0x11f9d;
 GT(-13);
L 43:
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
 R0=44;
 R1=0x11ffa;
 R2=I(0x11fc0);
 GT(-12);
L 44:
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
 R0=45;
 R1=0x11fee;
 GT(-14);
L 45:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(18)
 STR(0x11f93, "Put y: \n");
CODE(18)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=46;
 R1=0x11ffd;
 R2=0x11f93;
 GT(-13);
L 46:
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
 R0=47;
 R2=0x11fc5;
 R1=0x11ff7;
 GT(-16);
L 47:
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
 R0=48;
 R1=0x11fee;
 GT(-14);
L 48:
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
 R0=49;
 R2=0x11fc4;
 R1=0x11ff7;
 GT(-16);
L 49:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 GT(36);


L 37:
STAT(19)
 STR(0x11f90, "Ok");
CODE(19)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=50;
 R1=0x11ffd;
 R2=0x11f90;
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
 R0=51;
 R1=0x11fee;
 GT(-14);
L 51:
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 R0=0;
 GT(-2);
END
