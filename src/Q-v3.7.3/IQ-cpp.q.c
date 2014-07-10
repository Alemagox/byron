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
 R7=R7-12;


STAT(1)
 DAT(0x11fea,I,0);
CODE(1)



 R0=I(0x11fea);

 R1=I(R6+8);
 IF(R1==R0) GT(4);
 R0=0;
 GT(5);
L 4:
 R0=1;
L 5:


STAT(2)
 DAT(0x11fe6,I,1);
CODE(2)



 R1=I(0x11fe6);

 R2=I(R6+8);
 IF(R2==R1) GT(6);
 R1=0;
 GT(7);
L 6:
 R1=1;
L 7:




 R0=R0+R1;




 IF(R0==0) GT(2);
STAT(3)
 DAT(0x11fe2,I,1);
CODE(3)



 R0=I(0x11fe2);
 I(R6+12)=R0;

 GT(2);


L 2:


STAT(4)
 DAT(0x11fde,I,1);
CODE(4)



 R0=I(0x11fde);

 R1=I(R6+8);
 R0=R1-R0;



 I(R6-0)=R0;



 R7=R7-16;

 R0=I(R6-0);

 I(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=8;
 GT(1);
L 8:
 R6=P(R7+4);


 R0=I(R7+12);
 I(R6-0)=R0;

 R7=R7+16;


STAT(5)
 DAT(0x11fda,I,2);
CODE(5)



 R0=I(0x11fda);

 R1=I(R6+8);
 R0=R1-R0;



 I(R6-0)=R0;



 R7=R7-16;

 R0=I(R6-0);

 I(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=9;
 GT(1);
L 9:
 R6=P(R7+4);


 R0=I(R7+12);
 I(R6-0)=R0;

 R7=R7+16;





 R0=I(R6-0);

 R1=I(R6-0);
 R0=R1+R0;



 I(R6+12)=R0;

L 3:


 R7=R6;
 R6=P(R7);
 GT(R6);


STAT(6)
 DAT(0x11fd6,I,0);
 DAT(0x11fd2,I,0);
CODE(6)
L 0:
 R6=R7;
STAT(7)
 STR(0x11fa8, "Entra el numero de Fibonacci a calcular: ");
CODE(7)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=10;
 R1=0x11ffd;
 R2=0x11fa8;
 GT(-13);
L 10:
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
 R0=11;
 R2=0x11fd6;
 R1=0x11ffa;
 GT(-15);
L 11:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


STAT(8)
 STR(0x11f98, "El numero es : ");
CODE(8)


 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=12;
 R1=0x11ffd;
 R2=0x11f98;
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
 R1=0x11ffa;
 R2=I(0x11fd6);
 GT(-12);
L 13:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;




 R7=R7-16;

 R0=I(0x11fd6);

 I(R7+8)=R0;

 P(R7+4)=R6;
 P(R7)=14;
 GT(1);
L 14:
 R6=P(R7+4);


 R0=I(R7+12);
 I(0x11fd2)=R0;

 R7=R7+16;




 R7=R7-4;
 I(R7)=R0;
 R7=R7-4;
 I(R7)=R1;
 R7=R7-4;
 I(R7)=R2;
 R0=15;
 R1=0x11ffa;
 R2=I(0x11fd2);
 GT(-12);
L 15:
 R2=I(R7);
 R7=R7+4;
 R1=I(R7);
 R7=R7+4;
 R0=I(R7);
 R7=R7+4;


 R0=0;
 GT(-2);
END
