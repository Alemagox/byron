%{
// bison sintacticAnalizer.y 
// bison -d syntacticAnalyzer.y -o compiler.tab.c

//declaraciones en C
#include <stdio.h>


extern FILE *yyin; 	// Input stream , declared by lexical analyzer
extern int line;   	// Read line, values are given by lexical analyzer

int yydebug=1; 		// Debu mode if -t is passed
FILE *yyout;		// Compiled file

%}
//Declaraciones de Bison

// Data returned by token or non terminal 
%union {int integer; char string[50];}

///////////////////////////
// Tokens declaration
%token AND
%token ARRAY
%token BEGIN_	// It created conflict with BEGIN from flex :(
%token BODY
%token CASE
%token CONSTANT
%token DO
%token ELSE
%token ELSIF
%token END
%token END_LINE
%token FUNCTION
%token IF
%token IDENTIFIER
%token IS
%token LOOP
%token NOT
%token NULL_	// It created conflict with NULL from flex :(
%token OF
%token OR
%token OTHERS
%token OUT
%token PROCEDURE
%token RECORD
%token RETURN
%token THEN
%token TYPE
%token WHEN
%token WHILE

// Operators without precence
%token ARROW       		// =>
%token ASSIGNATION_OP	// :=
%token NOT_EQUAL_OP		// /=
%token GREATER_EQUAL_OP // >=
%token LESSER_EQUAL_OP	// <=

// Setting operators precedence
%left '+'
%left '-'
%left '*'
%left POWER_OP			// **
%left AND
%left OR

// Built in functions
%token PUT
%token GET
%token LENGTH
%token NEW_LINE
%token CONCAT

// Type tokens
%token <integer> INTEGER_TYPE
%token REAL_TYPE
%token CHARACTER_TYPE
%token BOOLEAN_TYPE

// Literal tokens
%token INTEGER_LITERAL
%token FLOAT_LITERAL
%token CHARACTER_LITERAL
%token STRING_LITERAL
%token BOOLEAN_LITERAL

// End of tokens declaration
///////////////////////////////

%%
//Reglas gramaticales

main : PROCEDURE IDENTIFIER IS BEGIN_ END IDENTIFIER;
//main : PROCEDURE ;

%%
//Codigo C adicional
int main(int argc, char** argv){
	if (argc>1){
		yyin=fopen(argv[1], "r");
		yyparse();
	}
	else printf("There's no file to open in the arguments.");
}

void yyerror(char* message){
	printf("Error ocurred in line %i: %s\n", line, message);
}
