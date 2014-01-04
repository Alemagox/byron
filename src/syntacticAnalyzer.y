%{
// bison sintacticAnalizer.y 
// bison -d syntacticAnalyzer.y -o compiler.tab.c

//declaraciones en C
#include <stdio.h>


extern FILE *yyin; 	// Input stream , declared by lexical analyzer
extern int line;   	// Read line, values are given by lexical analyzer
extern int column;  // Read column, values are given by lexical analyzer
extern char* yytext;

#define  YYDEBUG 1  // Debug mode if -t is passed
int yydebug=1;
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
%token CASE
%token CONSTANT
%token DO
%token ELSE
%token ELSIF
%token END
//%token END_LINE  //In byron we can directly ignore new lines
%token FUNCTION
%token IF
%token IDENTIFIER
%token IN
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
%token ASSIGNMENT_OP	// :=
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
// Grammar rules, after main all non-terminals are ordered alphabetically

main :
	PROCEDURE IDENTIFIER IS
       	declarative_part
	BEGIN_
	   	sequence_of_statements
	END IDENTIFIER ';'
	; 


actual_parameter_list : 
	expression expression_list
	;


actual_parameter_part : 
	'(' ')' 
	| '(' actual_parameter_list ')' 
	;


array_type_definition : 
	ARRAY '(' expression expression_list ')' OF type_definition
	;


assign_expression : 
	ASSIGNMENT_OP expression 
	| /* empty */
	;


assignment_statement :
	variable ASSIGNMENT_OP expression ';' // In semantics be careful
									  // to not to assign in a function call
	;


binary_adding_list : 
	binary_adding_operator term
	| binary_adding_operator term binary_adding_list 
	;


binary_adding_operator : 
	'+'
	| '-'
	;


case_statement : 
	CASE IDENTIFIER IS
		case_statement_alternative_list
	END CASE ';'
	;


case_statement_alternative : 
	WHEN discrete_choice_list ARROW 
		sequence_of_statements
	;


case_statement_alternative_list : 
	case_statement_alternative_list case_statement_alternative
	| /* empty */
	;


component_item : 
	IDENTIFIER identifier_list ':' type_definition assign_expression ';'
	;


component_list : 
	component_list component_item
	| /* empty */
	;


compound_statement : 
	if_statement
	| loop_statement
	| case_statement
	| assignment_statement
	;


constant : 
	CONSTANT
	| /* empty */
	;


declarative_item :  
	type_declaration
	| object_declaration
	| subprogram_specification ';'
	| subprogram_body 
	; 


declarative_part : 	
	declarative_item declarative_part
	| /* empty */
	;


discrete_choice : 
	expression
	| INTEGER_TYPE
	| OTHERS
	;


discrete_choice_list :
	discrete_choice_list '|' discrete_choice
	| discrete_choice
	| /* emtpy */
	;


elsif_list : 
	elsif_list elsif_statement
	| /* empty */
	;


else_statement : 
	ELSE expression THEN
		sequence_of_statements
	| /* empty */
	;


elsif_statement : 
	ELSIF expression THEN
		sequence_of_statements
	;


expression : 
	relation relation_list
	;


expression_list : 
	',' expression expression_list
	| /* empty */
	;


factor : 
	primary
	| primary POWER_OP primary
	| NOT primary
	;


formal_part : 
	'(' parameter_specification parameter_specification_list ')'
	| /* empty */ 
	;


function_call : 
	IDENTIFIER actual_parameter_part 
	;


function_specification : 
	FUNCTION IDENTIFIER formal_part RETURN type_definition
	;


identifier_list :
	identifier_list ',' IDENTIFIER
	| IDENTIFIER
	| /* empty */
	;


if_statement : 
	IF expression THEN
		sequence_of_statements
	elsif_list
	else_statement
	END IF ';'
	;


indexed_component : 
	IDENTIFIER '[' expression expression_list ']'
	;


logical_operator : 
	AND
	| OR
	;


loop_statement : 
	WHILE expression LOOP
		sequence_of_statements
	END LOOP ';'
	;


mode : 
	OUT
	| IN OUT
	| /* empty */
	;


multiplying_operator : 
	'*'
	| '/'
	;


null_statement : 
	NULL_ ';'
	;


object_declaration : 
	IDENTIFIER identifier_list ':' constant type_definition assign_expression ';'
	;


parameter_specification : 
	IDENTIFIER identifier_list ':' mode type_definition assign_expression
	;


parameter_specification_list :
	';' parameter_specification parameter_specification_list  
	| /* empty */ 
	;


primary : 
	INTEGER_LITERAL
	| FLOAT_LITERAL
	| CHARACTER_LITERAL
	| BOOLEAN_LITERAL
	| NULL_
	| STRING_LITERAL
	| variable
	| function_call
	| '(' expression ')' 
	;


procedure_call_statement : 
	IDENTIFIER actual_parameter_part ';'
	;


procedure_specification : 
	PROCEDURE IDENTIFIER formal_part 
	;


record_type_definition : 
	RECORD
		component_list
	END RECORD
	;


relation :
	simple_expression
	| simple_expression relational_operator simple_expression
	;


relation_list :
	logical_operator relation relation_list
	| /* empty */
	;


relational_operator : 
	'='
	| '<'
	| '>'
	| NOT_EQUAL_OP
	| LESSER_EQUAL_OP
	| GREATER_EQUAL_OP
	;


return_statement : 
	RETURN ';'
	| RETURN simple_expression ';'
	;


selected_component : 
	variable '.' IDENTIFIER // Original rule was 
						// name '.' IDENTIFIER 
						// which allowed select directly from a function
	;


sequence_of_statements : 
	statement 
	| statement sequence_of_statements
	;


simple_expression : 
	unary_adding_operator term binary_adding_list
	| unary_adding_operator term 
	| term binary_adding_list
	| term 
	;


simple_statement : 
	null_statement
	| return_statement
	| procedure_call_statement
	;


statement : 
	simple_statement
	| compound_statement
	;


subprogram_body : 
		subprogram_specification IS
			declarative_part
		BEGIN_
			sequence_of_statements
		END IDENTIFIER';'

	|	subprogram_specification IS
			declarative_part
		BEGIN_
			sequence_of_statements
		END ';'
	;


subprogram_specification : 
	procedure_specification 
	| function_specification
	;


term : 
	factor
	| multiplying_operator term
	;

type_declaration : 
	TYPE IDENTIFIER IS type_definition ';'
	;


type_definition : 
	INTEGER_TYPE
	| REAL_TYPE
	| CHARACTER_TYPE
	| BOOLEAN_TYPE
	| array_type_definition
	| record_type_definition
	;


unary_adding_operator : 
	'+'
	| '-'
	;

variable :  
	IDENTIFIER
	| indexed_component
	| selected_component
	;

%%
//Codigo C adicional
int main(int argc, char** argv){
	if (argc>1){
		yyin=fopen(argv[1], "r");

		printf("-- Starting parsing.\n");

		yyparse();

		printf("-- Parsing finished.\n");
	}
	else printf("-- Please specify a file to compile\n");
}

void yyerror(char* message){
	printf("-- Error ocurred in line %i, column %i: %s. Last read token read '%s'\n", line, column, message, yytext);
}
