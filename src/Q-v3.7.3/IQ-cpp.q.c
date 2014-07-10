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



 R1=U(0x11fd5);

 R2=U(R6+8);
 IF(R2>R1) GT(13);
 R1=0;
 GT(14);
L 13:
 R1=1;
L 14:


STAT(6)
 DAT(0x11fd4,U,'9');
CODE(6)



 R2=U(0x11fd4);

 R3=U(R6+8);
 IF(R3<R2) GT(15);
 R2=0;
 GT(16);
L 15:
 R2=1;
L 16:




 R1=R1*R2;



 IF(R1==0) GT(12);
STAT(7)
 DAT(0x11fd0,I,10);
CODE(7)



 R2=I(R6+9);

 R3=I(0x11fd0);
 R2=R3*R2;




 R3=U(R6+8);

 R2=R2+R3;

STAT(8)
 DAT(0x11fcf,U,'0');
CODE(8)



 R3=U(0x11fcf);

 R2=R2-R3;



 I(R6+9)=R2;



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



 R2=I(0x11fcb);
 I(R6+9)=R2;



STAT(10)
 DAT(0x11fca,U,'(');
CODE(10)



 R2=U(0x11fca);

 R3=U(R6+8);
 IF(R3==R2) GT(20);
 R2=0;
 GT(21);
L 20:
 R2=1;
L 21:




 IF(R2==0) GT(19);


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

 R3=U(R6+8);

 U(R7+8)=R3;

 P(R7+4)=R6;
 P(R7)=23;
 GT(0);
L 23:
 R6=P(R7+4);

 R3=U(R7+8);
 U(R6+8)=R3;


 R3=I(R7+8);
 I(R6+9)=R3;

 R7=R7+8;




STAT(11)
 DAT(0x11fc9,U,')');
CODE(11)



 R3=U(0x11fc9);

 R4=U(R6+8);
 IF(R4==R3) GT(25);
 R3=0;
 GT(26);
L 25:
 R3=1;
L 26:




 IF(R3==0) GT(24);


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





 R4=U(R6+8);
 U(R6+8)=R4;



 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=34;
 R2=R6+8;
 R1=0x11ff7;
 GT(-16);
L 34:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-13;

 R4=U(R6+8);

 U(R7+8)=R4;

 P(R7+4)=R6;
 P(R7)=35;
 GT(18);
L 35:
 R6=P(R7+4);

 R4=U(R7+8);
 U(R6+8)=R4;


 R4=I(R7+9);
 I(R6+8)=R4;

 R7=R7+13;




STAT(13)
 DAT(0x11fba,U,'*');
CODE(13)



 R4=U(0x11fba);

 R5=U(R6+8);
 IF(R5==R4) GT(37);
 R4=0;
 GT(38);
L 37:
 R4=1;
L 38:




 IF(R4==0) GT(36);



 R5=I(R6+8);

 R7=R7-4;
 I(R7)=R0;
 R0=I(R6+9);
 R0=R0*R5;

 R0=I(R7);
 R7=R7+4;


 I(R6+9)=R5;



L 36:


STAT(14)
 DAT(0x11fb9,U,'/');
CODE(14)



 R5=U(0x11fb9);

 R7=R7-4;
 I(R7)=R0;
 R0=U(R6+8);
 IF(R0==R5) GT(40);
 R5=0;
 GT(41);
L 40:
 R5=1;
L 41:


 R0=I(R7);
 R7=R7+4;


 IF(R5==0) GT(39);



 R7=R7-4;
 I(R7)=R0;
 R0=I(R6+8);

 R7=R7-4;
 I(R7)=R1;
 R1=I(R6+9);
 R0=R1/R0;

 R1=I(R7);
 R7=R7+4;


 I(R6+9)=R0;

 R0=I(R7);
 R7=R7+4;


L 39:
 R7=R6;
 R6=P(R7);
 GT(R6);




L 42:
 R6=R7;
 R7=R7-0;
STAT(15)
 STR(0x11fb7, "-");
CODE(15)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=43;
 R1=0x11ffd;
 R2=0x11fb7;
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
 R1=0x11ff7;
 R2=U(R6+8);
 GT(-12);
L 44:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(16)
 STR(0x11fb5, "-");
CODE(16)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=45;
 R1=0x11ffd;
 R2=0x11fb5;
 GT(-13);
L 45:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 R7=R6;
 R6=P(R7);
 GT(R6);


STAT(17)
 DAT(0x11fb4,U,0);
 DAT(0x11fb0,I,0);
CODE(17)
L 0:
 R6=R7;
STAT(18)
 DAT(0x11faf,U,'y');
CODE(18)



 R7=R7-4;
 I(R7)=R0;
 R0=U(0x11faf);
 U(0x11fb4)=R0;

 R0=I(R7);
 R7=R7+4;


L 46:
STAT(19)
 DAT(0x11fae,U,'n');
CODE(19)



 R7=R7-4;
 I(R7)=R0;
 R0=U(0x11fae);

 R7=R7-4;
 I(R7)=R1;
 R1=U(0x11fb4);
 IF(R1!=R0) GT(48);
 R0=0;
 GT(49);
L 48:
 R0=1;
L 49:


 R1=I(R7);
 R7=R7+4;


 IF(R0==0) GT(47);


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=50;
 R2=0x11fb4;
 R1=0x11ff7;
 GT(-16);
L 50:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-13;

 R7=R7-4;
 I(R7)=R1;
 R1=U(0x11fb4);

 R1=I(R7);
 R7=R7+4;
 U(R7+8)=R1;

 P(R7+4)=R6;
 P(R7)=51;
 GT(42);
L 51:
 R6=P(R7+4);

 R7=R7-4;
 I(R7)=R1;
 R1=U(R7+8);
 U(0x11fb4)=R1;

 R1=I(R7);
 R7=R7+4;

 R7=R7-4;
 I(R7)=R1;
 R1=I(R7+9);
 I(0x11fb0)=R1;

 R1=I(R7);
 R7=R7+4;
 R7=R7+13;


 GT(46);


L 47:
 R0=0;
 GT(-2);
END
