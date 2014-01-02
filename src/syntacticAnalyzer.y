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
%token BODY
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

main : {printf("Entered main\n");}
	PROCEDURE IDENTIFIER IS
       	declarative_part
	BEGIN_
	   	sequence_of_statements
	END IDENTIFIER ';'
	; 


actual_parameter_part : {printf("Entered actual_parameter_part\n");}
	'(' explicit_actual_parameter_list ')'
	;


after_end_program_name : {printf("Entered after_end_program_name\n");} // Simplify in semantic iteration
	/* empty */
	| IDENTIFIER
	;

assign_expression : {printf("Entered assign_expression\n");}
	/* empty */
	| ASSIGNMENT_OP expression 
	;


assignment_statement : {printf("Entered assignment_statement\n");}
	variable_name ASSIGNMENT_OP expression ';'
	;


basic_declarative_item : {printf("Entered basic_declarative_item\n");}
	type_declaration
	| object_declaration
	| subprogram_specification ';'
	;


binary_adding_list : {printf("Entered binary adding list\n");}
	/* empty */
	| binary_adding_operator term
	| binary_adding_operator term binary_adding_list
	;


binary_adding_operator : {printf("Entered binary_adding_operator\n");}
	'+'
	| '-'
	;


case_statement : {printf("Entered case_statement\n");}
	CASE IDENTIFIER IS
		case_statement_alternative_list
	END CASE ';'
	;


case_statement_alternative : {printf("Entered case_statement_alternative\n");}
	WHEN discrete_choice_list ARROW 
		sequence_of_statements
	;


case_statement_alternative_list : {printf("Entered case_statement_alternative_list\n");}
	case_statement_alternative
	| case_statement_alternative case_statement_alternative_list
	;


compound_statement : {printf("Entered compound_statement\n");}
	if_statement
	| loop_statement
	| case_statement
	;


constant : {printf("Entered constant\n");}
	/* empty */
	| CONSTANT
	;


declarative_item :  {printf("Entered declarative_item\n");}
	basic_declarative_item
	| subprogram_body
	; 


declarative_part : 	{printf("Entered declarative_part\n");}
	/*empty*/
	| declarative_item
	;


discrete_choice : {printf("Entered discrete_choice\n");}
	expression
	| INTEGER_TYPE
	| OTHERS
	;


discrete_choice_list : {printf("Entered discrete_choice_list\n");}
	discrete_choice
	| discrete_choice '|' discrete_choice_list
	;


elsif_list : {printf("Entered elsif_list\n");}
	/* empty */
	| elsif_statement
	| elsif_statement elsif_list 
	;


else_statement : {printf("Entered else\n");}
	/* empty */
	| ELSE expression THEN
		sequence_of_statements
	;


elsif_statement : {printf("Entered elsif_statement\n");}
	ELSIF expression THEN
		sequence_of_statements
	;


explicit_actual_parameter : {printf("Entered explicit_actual_parameter\n");}
	expression
	| name
	;


explicit_actual_parameter_list : {printf("Entered explicit_actual_parameter_list\n");}
	explicit_actual_parameter
	| explicit_actual_parameter ',' explicit_actual_parameter_list
	;


expression : {printf("Entered expression\n");}
	relation
	| relation logical_operator_list
	;


expression_list : {printf("Entered expression_list\n");}
	expression
	| expression ',' expression_list
	;


factor : {printf("Entered factor\n");}
	primary
	| primary POWER_OP primary
	| NOT primary
	;


formal_part : {printf("Entered formal_part\n");}
	/* vacio */
	'(' parameter_specification_list ')'
	;


function_call : {printf("Entered function_call\n");}
	IDENTIFIER
	| IDENTIFIER actual_parameter_part
	;


function_specification : {printf("Entered function_specification\n");}
	FUNCTION IDENTIFIER formal_part RETURN type_definition
	;


identifier_list : {printf("Entered identifier_list\n");}
	IDENTIFIER
	| IDENTIFIER ',' identifier_list
	;


if_statement : {printf("Entered if_statement\n");}
	IF expression THEN
		sequence_of_statements
	elsif_list
	else_statement
	END IF ';'
	;


indexed_component : {printf("Entered indexed_component\n");}
	IDENTIFIER '(' expression_list ')'
	;


initialization : {printf("Entered initialization\n");}
	/* empty */
	| ASSIGNMENT_OP expression
	;


logical_operator_list : {printf("Entered logical_operator_list\n");}
	AND relation
	| OR relation
	| AND relation logical_operator_list
	| OR relation logical_operator_list
	;


loop_statement : {printf("Entered loop_statement\n");}
	WHILE expression LOOP
		sequence_of_statements
	END LOOP ';'
	;


mode : {printf("Entered mode\n");}
	/* empty */
	| IN
	| OUT
	| IN OUT
	;


multiplying_operator_list : {printf("Entered multiplying_operator_list\n");}
	/* emtpy */
	'*'
	| '/'
	;

name : {printf("Entered name\n");}  // Or call it variable :)
	IDENTIFIER
	| indexed_component
	| selected_component
	| function_call
	;


null_statement : {printf("Entered null_statement\n");}
	NULL_ ';'
	;


object_declaration : {printf("Entered object_declaration\n");}
	identifier_list ':' constant type_definition assign_expression ';'
	;


parameter_specification : {printf("Entered parameter_specification\n");}
	identifier_list ':' mode type_definition initialization
	;


parameter_specification_list : {printf("Entered parameter_specification_list\n");}
	parameter_specification
	| parameter_specification parameter_specification_list
	;


primary : {printf("Entered primary\n");}
	INTEGER_LITERAL
	| FLOAT_LITERAL
	| BOOLEAN_LITERAL
	| NULL_
	| STRING_LITERAL
	| name
	| '(' expression ')'
	;


procedure_call_statement : {printf("Entered procedure_call_statement\n");}
	IDENTIFIER ';'
	| IDENTIFIER actual_parameter_part ';'
	;


procedure_specification : {printf("Entered procedure_specification\n");}
	PROCEDURE IDENTIFIER formal_part
	;


relation : {printf("Entered relation\n");}
	simple_expression
	| simple_expression relational_operator simple_expression
	;


relational_operator : {printf("Entered relational relational_operator\n");}
	'='
	| '<'
	| '>'
	| NOT_EQUAL_OP
	| LESSER_EQUAL_OP
	| GREATER_EQUAL_OP
	;


return_statement : {printf("Entered return_statement\n");}
	RETURN ';'
	| RETURN expression ';'
	;


selected_component : {printf("Entered selected_component\n");}
	name '.' IDENTIFIER
	;


sequence_of_statements : {printf("Entered sequence_of_statements\n");}
	statement 
	| statement sequence_of_statements
	;


simple_expression : {printf("Entered simple_expression\n");}
	unary_adding_operator term binary_adding_list
	;


simple_statement : {printf("Entered simple_statement\n");}
	null_statement
	| assignment_statement
	| return_statement
	| procedure_call_statement
	;


statement : {printf("Entered statement\n");}
	simple_statement
	|compound_statement
	;


subprogram_body : {printf("Entered subprogram_body\n");}
	subprogram_specification IS
		declarative_part
	BEGIN_
		sequence_of_statements
	END after_end_program_name
	;


subprogram_specification : {printf("Entered subprogram_specification\n");}
	procedure_specification
	| function_specification
	;


term : {printf("Entered term\n");}
	factor multiplying_operator_list
	;


unary_adding_operator : {printf("Entered unary_adding_operator\n");}
	/* empty */
	| '+'
	| '-'
	;


variable_name : {printf("Entered variable_name\n");}
	name 
	;

%%
//Codigo C adicional
int main(int argc, char** argv){
	if (argc>1){
		yyin=fopen(argv[1], "r");

		printf("Starting parsing.\n\n");

		yyparse();

		printf("Parsing finished successfully.\n");
	}
	else printf("Please specify a file to compile\n");
}

void yyerror(char* message){
	printf("Error ocurred in line %i, column %i: %s. Last read: '%s'-''\n", line, column, message, yytext);
}
