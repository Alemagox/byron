%{
// bison sintacticAnalizer.y 

//declaraciones en C

extern FILE *yyin; // Input stream , declared by lexical analyzer
extern int line;   // Read line, declared by lexical analyzer

%}
//Declaraciones de Bison

// Tokens

%%
//Reglas gramaticales

%%
//Codigo C adicional