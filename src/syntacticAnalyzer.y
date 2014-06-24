%{
///////////////////////////////////////////////////
// Instructions of use:
//  - bison sintacticAnalizer.y 
//  - bison -d syntacticAnalyzer.y -o compiler.tab.c

/////////////////////////////
// C declarations
#include <stdio.h> 
#include "symbolsTable.h" 

extern FILE *yyin; 	// Input stream , declared by lexical analyzer
extern int line;   	// Read line, values are given by lexical analyzer
extern int column;  // Read column, values are given by lexical analyzer
extern char* yytext;
extern YYABORT;

//#define  YYDEBUG 1  // Debug mode if -t is passed
int yydebug=1;
FILE *yyout;		// Compiled file

/////////////////////////////////////////////
// Variables used to work with symbols table
symbolsTable sT;
registerStruct *auxRegister, *auxRegisterList;
int errorCode, nRegisters;
int stackScope;
int anonymousId = 0;
char anonymousIdString[500];
char errorString[500];
char string1[15], string2[15];
int nOthers;


/////////////////////////////////////////////
// Methods
void generateAnonymousId();

%}
///////////////////////////////////////////
// Bison declarations

////////////////////////////////////////////
// Data returned by token or non terminal 
%union {
	int integer; 
	char op;
	char string[50];
	registerStruct* regStruct;
	symbolType typeSymbol;
	symbolsTable symbolsList;
	variableType typeVariable;
}

///////////////////////////
// Tokens declaration
%token AND
%token ARRAY
%token BEGIN_	// It created conflict with BEGIN from flex :(
%token CASE
%token CONSTANT
//%token DO
%token ELSE
%token ELSIF
%token END
//%token END_LINE  //In byron we can directly ignore new lines
%token FUNCTION
%token IF
%token <string> IDENTIFIER
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
// Non terminals which return a value

// End of non terminals which return a value
%type <regStruct>			assignment_statement
%type <regStruct>		 	binary_adding_list
%type <op>						binary_adding_operator
%type <regStruct>			discrete_choice
%type <regStruct>			discrete_choice_list
%type <regStruct>			expression
%type <regStruct>			factor
%type <regStruct>			formal_part
%type <regStruct>			function_specification
%type <typeSymbol>		mode
%type <regStruct>			primary 
%type <regStruct>			procedure_specification 
%type <regStruct>			relation
%type <regStruct>			relation_list
%type <regStruct>			simple_expression
%type <regStruct>			subprogram_body
%type <regStruct>			subprogram_specification
%type <regStruct>			term
%type <typeVariable>	type_definition
%type <regStruct>			variable

///////////////////////////////

%%
// Grammar rules, after main all non-terminals are ordered alphabetically
/////////////////////////////////////////////////////////////////////////
//
//
//
//
/////////////////////////////////////////////////////////////////////////


main :
	PROCEDURE IDENTIFIER IS
       	/*declarative_part_*/
		declarative_part
	BEGIN_
   	sequence_of_statements
	END IDENTIFIER ';'
	; 


actual_parameter_list : 
	expression expression_list
	;


actual_parameter_part : 
	'(' ')' { auxRegisterList = NULL; $<regStruct>$ = auxRegisterList;  }
	| '(' actual_parameter_list ')' { $<regStruct>$ = auxRegisterList;  }
	;


array_type_definition : 
	ARRAY '(' expression expression_list ')' OF type_definition
	;


assign_expression : 
	ASSIGNMENT_OP expression 
	| /* empty */
	;


assignment_statement :
	variable ASSIGNMENT_OP expression ';'
	{ 
		errorCode = checkAssignmentType($1, $3);

		if (errorCode == -1){
			getSymbolTypeName( string1, $1->typeSymbol );

			sprintf(errorString,"Left side assignment isn't of variable type. Type is %s", string1);
			yyerror(errorString);
		
		} else if(errorCode == -2){
			getSymbolTypeName( string1, $1->typeSymbol );
			getSymbolTypeName( string2, $3->typeSymbol );

			sprintf(errorString,"Cannot assign right part of type %s", string2);
			yyerror(errorString);
		} else if(errorCode == -3){
			getVariableTypeName( string1, $1->typeVariable );
			getVariableTypeName( string2, $3->typeVariable );

			sprintf(errorString,"Cannot assign right part of typeVariable %s", string2);
			yyerror(errorString);
		} 

		if(errorCode) YYABORT;

		getVariableTypeName( string1, $1->typeVariable );
		getVariableTypeName( string2, $3->typeVariable );
		//printf("Assigning type %s := type %s.\n", string1, string2);
		// In code generation, force casting if variable types are different
	}
	;


binary_adding_list : 
	binary_adding_operator term
		{
			errorCode = checkIfNumeric(errorString, $<regStruct>2, 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for addition */
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType($<regStruct>-1, $2)
																	);	
			$$ = auxRegister;
		}
	| binary_adding_operator term { $<regStruct>$ = $2 ; } binary_adding_list
		{
			errorCode = checkIfNumeric(errorString, $<regStruct>2, 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for addition */
			generateAnonymousId();

			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType($<regStruct>-1, $4)
																	);	
			$$ = auxRegister;
		}
	;

binary_adding_operator : 
	'+' 	{	$<op>$ = '+'; }
	| '-'	{	$<op>$ = '-'; }
	;


case_statement : 
	CASE IDENTIFIER IS
		case_statement_alternative_list
	END CASE ';'
	{
		// Get register of the identifier
		auxRegister = getSymbol(&sT, $2, sT.currentScope);
		errorCode = checkIfNumeric(errorString, auxRegister, 5);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}
		nOthers = 0;
	}
	;


case_statement_alternative : 
	WHEN discrete_choice_list ARROW 
		sequence_of_statements
	{
		errorCode = checkIfNumeric(errorString, $2, 5);
		if(errorCode && $2->typeVariable!=Void){ // others have Void as varaible type
			yyerror(errorString);
			YYABORT;
		}
		
		if( $2->typeVariable == Void ){
			if ( nOthers > 0 ){
				yyerror("Duplicated others in case statement");
				YYABORT;
			}
			nOthers++;
		}
	}
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
	| subprogram_specification ';' { /*destroyRegister( $1 );*/ }
	| subprogram_body 
	  { markSubprogramAsDefined( $1 );
		//destroyRegister( $1 ); 
	  }
	; 

/*
declarative_part : 
	{ enterScope ( &sT ); } declarative_part_


declarative_part_	:
	 declarative_item declarative_part_
	| /* empty */ /*
	;
*/
declarative_part	:
	 declarative_item declarative_part
	| /* empty */ 
	;

discrete_choice : 
	primary
		{			
			errorCode = checkIfDiscreteChoice(errorString, $1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		}
	| OTHERS
		{
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			$$ = auxRegister;
		}
	;


discrete_choice_list :
	discrete_choice_list '|' discrete_choice
		{
			errorCode = checkIfOthers(errorString, $1, $3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		}
	| discrete_choice 
		{
			$$ = $1;
		}
	;


elsif_list : 
	elsif_list elsif_statement
	| /* empty */
	;


else_statement : 
	ELSE
		sequence_of_statements
	| /* empty */
	;


elsif_statement : 
	ELSIF '(' expression ')' THEN
		sequence_of_statements
	;


expression : 
	relation { $<regStruct>$ = $1; } relation_list {

		if($3->typeVariable == Void ){ // There's no list
			$$ = $1;
			destroyRegister($3);
		}else {
			$$ = $3;
		}
	}
	;

expression_list : 
	',' expression expression_list
	| /* empty */
	;


factor : 
	primary { $<regStruct>$ = $<regStruct>1; }
	| primary POWER_OP primary { yyerror("Incomplete factor"); $<regStruct>$ = $<regStruct>1; }
	| NOT primary { yyerror("Incomplete factor"); $<regStruct>$ = $<regStruct>2; }
	;


formal_part : 
	'(' parameter_specification parameter_specification_list ')' { $$ = auxRegisterList; }
	| /* empty */ { $$ = auxRegisterList; }
	;


function_call : 
	IDENTIFIER actual_parameter_part 
	| IDENTIFIER LENGTH // Identifier is an array variable
	;


function_specification : 
	FUNCTION IDENTIFIER formal_part RETURN type_definition
	{ auxRegister = createRegister( $2, sT.currentScope,  Function, $5 ); 
	  addRegister( &sT, auxRegister );
	  $<regStruct>$ = auxRegister; }
	;


identifier_list :
	',' IDENTIFIER identifier_list
	| /* empty */
	;


if_statement : 
	IF '(' expression ')' THEN
		sequence_of_statements
	elsif_list
	else_statement
	END IF ';'
	{
		errorCode = checkIfNumeric(errorString, $3, 3);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}
	}
	;


indexed_component : 
	IDENTIFIER '[' expression expression_list ']'
	;


logical_operator : 
	AND
	| OR
	;


loop_statement : 
	WHILE '(' expression ')' LOOP
		sequence_of_statements
	END LOOP ';'
	{
		errorCode = checkIfNumeric(errorString, $3, 4);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}
	}
	;


mode : 
	OUT { $$ = Out; }
	| IN OUT { $$ = InOut; }
	| IN { $$ = In; }
	| /* empty */ { $$ = In; }
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
	{ auxRegister = createRegister( $1, sT.currentScope,  Variable, $5 ); 
	  addRegister( &sT, auxRegister ); }
	;


parameter_specification : 
	IDENTIFIER identifier_list ':' mode type_definition assign_expression
	{ auxRegister = createRegister( $1, sT.currentScope,  $4, $5 ); 
	  addRegisterToList( &auxRegisterList, auxRegister ); }
	;


parameter_specification_list :
	';' parameter_specification parameter_specification_list 
	| /* empty */ 
	;


primary : 
	INTEGER_LITERAL { generateAnonymousId();

										auxRegister = createRegister( anonymousIdString, 
																									sT.currentScope, Literal, 
																									Integer
																								);	
										$$ = auxRegister;
									}
	| FLOAT_LITERAL			{ generateAnonymousId();

												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Real
																										);	
												$$ = auxRegister;
											}
	| CHARACTER_LITERAL { auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Character
																										);	
												$$ = auxRegister;
											}
	| BOOLEAN_LITERAL		{ generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Bool
																										);	
												$$ = auxRegister;
											}
	| NULL_ 						{	auxRegister = NULL; $$ = auxRegister;	}
	| STRING_LITERAL		{ generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											String
																										);	
												$$ = auxRegister;
											}
	| variable 					{	$$ = $1;	}
	| function_call			{	$$ = $<regStruct>1;	}
	| '(' expression ')' {	$$ = $2;	}
	;


procedure_call_statement : 
	IDENTIFIER actual_parameter_part ';'
	{ errorCode = searchProcedure( &sT, $1, sT.currentScope );
	  if ( errorCode!=0 ){
	  	yyerror("Procedure call error: %s", $1);
	  	YYABORT;
		} 

		// Check actual parameters against defined arguments
	}

	| PUT '(' STRING_LITERAL ')' ';'
		{

		}
	| PUT '(' variable ')' ';'
		{

		}
	| GET '(' variable ')' ';'
		{
			
		}
	| NEW_LINE ';'
	;


procedure_specification : 
	PROCEDURE IDENTIFIER formal_part 
	{ auxRegister = createRegister( $2, sT.currentScope,  Procedure, Void ); 
	  if ( addRegister( &sT, auxRegister ) ) { // Procedure has been already specified, but not defined
	  	free(auxRegister);
	  	auxRegister = getProcedure( &sT, $2, sT.currentScope );

	  	if( auxRegister->defined == 1 ) { // Defined procedure, error due to double definition
	      sprintf(errorString, "!! - Double definition of procedure '%s'\n", auxRegister->key.id);
	      yyerror(errorString);
	  	}

	  	// Check that specification and definition have same number 
	  	// and type of parameters,
	  	if( checkParametersSubprogram( $3, auxRegister ) ){
	  	  yyerror("CheckParameterSubprogram is incomplete");
	  	}

	  	addParametersToSubprogram( &sT, $3, auxRegister );
	  }
	  else{ // Adding the list of parameters
	  	//sT.currentScope = stackScope;
	  	auxRegister = getProcedure( &sT, $2, sT.currentScope );

	  	addParametersToSubprogram( &sT, $3, auxRegister );

	  	//enterScope ( &sT );

	  	auxRegisterList = NULL;
	  	//destroySymbolsTable( &auxRegisterList );
	  	//sT.currentScope = 0;
	  	//stackScope++;
	  }

	  $<regStruct>$ = auxRegister; }
	;


record_type_definition : 
	RECORD
		component_list
	END RECORD
	;


relation :
	simple_expression { $<regStruct>$ = $<regStruct>1; }
	|  simple_expression relational_operator simple_expression 
		{	//yyerror("Incomple simple expression");
			errorCode = checkIfNumeric(errorString, $<regStruct>1, 2);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			errorCode = checkIfNumeric(errorString, $<regStruct>3, 2);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for relation */


			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Literal, 
																		Bool
																	);	
			$$ = auxRegister;
		}
	;


relation_list :
	logical_operator relation { $<regStruct>$ = $2; } relation_list
	{
		errorCode = checkIfNumeric(errorString, $<regStruct>2, 3);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}

		/* Generate code for relation */

		generateAnonymousId();

		auxRegister = createRegister( anonymousIdString, 
																	sT.currentScope, Auxiliar, 
																	getFactorVariableType($<regStruct>-1, $2)
																);	
		$$ = auxRegister;
	}
	| /* empty */ 
		{
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			$$ = auxRegister; 
		}
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
	unary_adding_operator term { $<regStruct>$ = $2 ; } binary_adding_list 
		{ 
			errorCode = checkIfNumeric(errorString, $2, 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			/* Generate code for addition */

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType($2, $4)
																	);	
			$$ = auxRegister;
		}
	| unary_adding_operator term 
			{ 
				errorCode = checkIfNumeric(errorString, $<regStruct>2, 1);
				if(errorCode){
					yyerror(errorString);
					YYABORT;
				}

				/* Generate code for addition */

				generateAnonymousId();
				auxRegister = createRegister( anonymousIdString, 
																			sT.currentScope, Auxiliar, 
																			$2->typeVariable
																		);	
				$$ = auxRegister;
		 	}
	| term { $<regStruct>$ = $1 ; } binary_adding_list 
			{ 	
				errorCode = checkIfNumeric(errorString, $<regStruct>1, 1);
				if(errorCode){
					yyerror(errorString);
					YYABORT;
				}

				/* Generate code for addition */

				generateAnonymousId();
				auxRegister = createRegister( anonymousIdString, 
																			sT.currentScope, Auxiliar, 
																			getFactorVariableType($1, $3)
																		);	
				$$ = auxRegister;
			}
	| term { $$ = $1; }
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

		
subprogram_body_ :
	subprogram_specification IS {
		enterScope ( &sT );

		errorCode = addParametersToSymbolsTable(&sT, $<regStruct>1);
		if ( errorCode!=0 ){
	  	yyerror("Error adding parameters of subprogram %s", $<regStruct>1->key.id);
	  	YYABORT;
		}
	}
	;


subprogram_body : 
	subprogram_body_
		declarative_part
	BEGIN_
		sequence_of_statements
	END IDENTIFIER';' { exitScope ( &sT ); $<regStruct>$ = $<regStruct>1; }
|	subprogram_body_
		declarative_part
	BEGIN_
		sequence_of_statements
	END ';' { exitScope ( &sT ); $<regStruct>$ = $<regStruct>1; }
;


subprogram_specification : 
	procedure_specification { $<regStruct>$ = $1; }
	| function_specification { $<regStruct>$ = $1; }
	;


term : 
	factor { $$ = $<regStruct>1; }
	| term multiplying_operator factor 
		{ 
			errorCode = checkIfNumeric(errorString, $3, 0);
			if(errorCode) {
				printRegister(*$3);
				yyerror(errorString);
				YYABORT;
			}

			errorCode = checkIfNumeric(errorString, $1, 0);
			if(errorCode){
				printRegister(*$1);
				yyerror(errorString);
				YYABORT;
			} 

			getVariableTypeName(string1, $1->typeVariable);
  		getVariableTypeName(string2, $3->typeVariable);
  		//printf("4##########\n");
  		//printf("####%s - %s\n", string1, string2);

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType($1, $3)
																	);	
			$$ = auxRegister;
		}		
	;

type_declaration : 
	TYPE IDENTIFIER IS type_definition ';'
	;


type_definition : 
	INTEGER_TYPE 	{ $$ = Integer; }
	| REAL_TYPE		{ $$ = Real; }
	| CHARACTER_TYPE	{ $$ = Character; }
	| BOOLEAN_TYPE		{ $$ = Bool; }
	| array_type_definition		{ $$ = ArrayVariable; }
	| record_type_definition 	{ $$ = Record; }
	| IDENTIFIER
		{ 
			auxRegister = getSymbol(&sT, $1, sT.currentScope);

		 	/* check if type really exists */
			if(auxRegister == NULL){
				sprintf(errorString, "Type '%s' not found in symbols table", $1);
				yyerror(errorString);
				YYABORT; // Serious compiler error
			}

			$$ = CustomType; 
		} // Custom type, must be defined before
	;


unary_adding_operator : 
	'+'
	| '-'
	;

variable :  
	IDENTIFIER { auxRegister = getSymbol(&sT, $1, sT.currentScope);
							 /* check if variable really exists */
							if(auxRegister == NULL){
								sprintf(errorString, "Variable '%s' not found in symbols table", $1);
								yyerror(errorString);
								YYABORT; // Serious compiler error
							}
							$$ = auxRegister; }
	| indexed_component   { yyerror("Incomplete!"); $<regStruct>$ = auxRegister; }
	| selected_component  { yyerror("Incomplete!"); $<regStruct>$ = auxRegister; }
	;

%%

//Codigo C adicional

void generateAnonymousId(){
  sprintf(anonymousIdString, "%d", anonymousId++);
}

int main(int argc, char** argv){
	auxRegisterList = NULL;
	nOthers = 0; // Counter for case
	//nRegisters = 0;
	stackScope = 1;

	printf("-- Initializing symbols table\n\n");
    
  symbolsTableInit( &sT );

	if (argc>1){
		yyin=fopen(argv[1], "r");

		printf("-- Starting parsing.\n");

		yyparse();

		printf("-- Parsing finished.\n\n");
	}
	else printf("-- Please specify a file to compile\n\n");

///////
	
  printf("Starting hash table tests\n\n");

	printSymbolsTable( sT );
	printf("\n");
	
	destroySymbolsTable( &sT );
	printSymbolsTable( sT );
	printf("\n");
	
}

int yyerror(char* message){
	printf("-- Error ocurred in line %i, column %i: %s. Last read token is '%s'\n", line, column, message, yytext);

	//sprintf(errorString,"");
	return 0;
}
