// Qlib.c 3.7.3     BIBLIOTECA DE Q

// Se permite su modificacion, en cuyo caso ha de recompilarse IQ (ver Qman.txt)

// Conservar la siguiente l�nea
#include "Q.h"

// Definiciones auxiliares (rutinas, variables, ...)

/* inv_str() permite invertir el orden de las strings en Q para       
acomodarlo al de las rutinas de la biblioteca de C, y reinv_str()     
realiza la operaci�n inversa, para lo cual precisa de los punteros de 
comienzo y final */                                                   

void reinv_str(unsigned char *p, unsigned char *r) {             
  while (p<r) {
    unsigned char t=*p;
    *p++=(unsigned char)*r;
    *r--=(unsigned char)t; 
  }
}                                                                     
                                                                      
unsigned char *inv_str(unsigned char *r) {
  unsigned char *p=(unsigned char *)r;                    
  while (*p) p--;    // va al '\0'
  reinv_str(p,r);    // invierte                                    
  return p;                                                           
}                                                                     


/* Rutinas de biblioteca de Q
*****************************

Utilizables tanto para c�digo Q compilado como interpretado.
Segmentos de c�digo Q sin restricciones (podemos usar construcciones
C) que implementan las distintas rutinas.  No tienen por qu� seguir
el mismo esquema de paso de argumentos que nuestro c�digo generado.
Se apoyan en las anteriores (y extendibles) definiciones
auxiliares.

Mant�ngase el esquema BEGINLIB {etiqueta: codigo-C} ENDLIB

Opcionalmente, def�nanse macros para etiquetas en Qlib.h
*/
 

BEGINLIB

// void exit(int)                    
// Entrada: R0=c�digo de salida
// No retorna
L exit_: exit(R0);  // termina el programa con c�digo en R0

// void* new(int_size)           
// Entrada: R0=etiqueta de retorno
//          R1=tama�o (>=0)
// Salida: R0=puntero al tramo de memoria asignado 
// S�lo modifica R0                            
L new_: {//entre llaves por usar variable local
         int r=R0;
         IF(R1<0) GT(exit_);         // no permite tama�os negativos
         NH(R1);                     // reserva tramo de memoria en heap   
         R0=HP;                      // devuelve direcci�n m�s baja del tramo 
         GT(r);                      // retorna                  
        }                            

// void putfi(const unsigned char*, int)
// Entrada: R0=etiqueta de retorno
//          R1=direcci�n de la ristra de formato
//          R2=valor entero a visualizar (opcional seg�n formato)
// No modifica ning�n registro ni la ristra de formato
L putfi_: {unsigned char *p=inv_str(&U(R1)); // invierte: nva. dir. real 1er char
    printf((char*)p,R2);             // trasladar            
    
    reinv_str(p,&U(R1));        // re-invierte         
	  GT(R0);                           // retorna
	}

// void putfs(const unsigned char*, int)
// Entrada: R0=etiqueta de retorno
//          R1=direcci�n de la ristra de formato
//          R2=direccion string a visualizar (opcional seg�n formato)
// No modifica ning�n registro ni la ristra de formato
L putfs_: {unsigned char *p=inv_str(&U(R1)); // invierte: nva. dir. real 1er char
    unsigned char *p2=inv_str(&U(R2)); // invierte: nva. dir. real 1er char
    printf((char*)p,(char*)p2);             // trasladar
    //printf((char*)p,R2);             // trasladar

    reinv_str(p,&U(R1));        // re-invierte   
    reinv_str(p2,&U(R2));                 
    GT(R0);                           // retorna
  }

// void putnl(const unsigned char*, int)
// Entrada: R0=etiqueta de retorno
//          R1=direcci�n de la ristra de formato
//          R2=direccion string a visualizar (opcional seg�n formato)
// No modifica ning�n registro ni la ristra de formato
L putnl_: {unsigned char *p=inv_str(&U(R1)); // invierte: nva. dir. real 1er char
    printf("%s", (char*)p);             // trasladar     
    reinv_str(p,&U(R1));        // re-invierte         
    GT(R0);                           // retorna
  }


// void getfi(const unsigned char*, int)
// Entrada: R0=etiqueta de retorno
//          R1=direcci�n de la ristra de formato
//          R2=valor entero a visualizar (opcional seg�n formato)
// No modifica ning�n registro ni la ristra de formato
L getfi_: {unsigned char *p=inv_str(&U(R1)); // invierte: nva. dir. real 1er char
    int i;
    char c;
    scanf((char*)p, &i);            // leer
    
    I(R2)=i;                        // guardar
    if(i != '\n')
      scanf("%c", &c);              // catch enter

    reinv_str(p,&U(R1));        // re-invierte           
    GT(R0);                           // retorna
  }

// void getfc(const unsigned char*, int)
// Entrada: R0=etiqueta de retorno
//          R1=direcci�n de la ristra de formato
//          R2=direcci�n caracter a obtener (opcional seg�n formato)
// No modifica ning�n registro ni la ristra de formato
L getfc_: {
    unsigned char *p=inv_str(&U(R1)); // invierte: nva. dir. real 1er char
    
    /*
    char i = getchar();
    if(i=='\n') i = getchar();

    U(R2)=i;                        // guardar
    */

    char i;
    char c;

    //scanf((char*)p, &i);            // leer
    i=getc(stdin);


    U(R2)=i;                        // guardar
    //if(i != '\n')
    //  scanf("%c", &c);              // catch enter

    reinv_str(p,&U(R1));        // re-invierte           
    GT(R0);                           // retorna
  }

// void* free(int_size)           
// Entrada: R0=etiqueta de retorno
//          R1=tama�o (<=0)
// Salida: R0=puntero al tramo de memoria asignado 
// S�lo modifica R0                            
L free_: {//entre llaves por usar variable local
         int r=R0;
         IF(R1>0) GT(exit_);         // no permite tama�os positivos
         NH(R1);                     // libera tramo de memoria en heap   
         R0=HP;                      // devuelve direcci�n 
         GT(r);                      // retorna                  
        }  

ENDLIB
