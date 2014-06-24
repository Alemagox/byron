%{
//////////////////////////////////////////////////////////////////////////////////////
// Instructions of use:
//  - Remember to run bison to generate tokens and symbols table before running flex.
//  - flex lexicalAnalyzer.l 
//  - gcc lex.yy.c compiler.tab.c -lfl -o compiler
#include "symbolsTable.h" 
#include "compiler.tab.h"  // We need the tokens expressed in .tab.h 
#include <stdio.h>

/* Defining variables */
void error(char*); //Function to display error 

int line=1;
int column=1;

%}

/************************************************************
  Definitions section 
   - To test regex quickly -> http://gskinner.com/RegExr/
*/
character		[a-zA-Z]
digit			[0-9]
numeral			({digit}+)(_{digit}+)*
alphanumeric	{character}|{digit}
exponent_pos    E"+"?{numeral}
exponent_neg    E"-"{numeral}
exponent 		{exponent_neg}|{exponent_pos}


%%
	/* Rules Section */
	/* Reserverd words*/
and				{ column=column+strlen(yytext); return AND;}
array			{ column=column+strlen(yytext); return ARRAY;}
begin			{ column=column+strlen(yytext); return BEGIN_;}
case			{ column=column+strlen(yytext); return CASE;}
constant		{ column=column+strlen(yytext); return CONSTANT;}
 /*do 				{ column=column+strlen(yytext); return DO;}*/
else			{ column=column+strlen(yytext); return ELSE;}
elsif			{ column=column+strlen(yytext); return ELSIF;}
end				{ column=column+strlen(yytext); return END;}
function 		{ column=column+strlen(yytext); return FUNCTION;}
if 				{ column=column+strlen(yytext); return IF;}
in 				{ column=column+strlen(yytext); return IN;}
is				{ column=column+strlen(yytext); return IS;}
loop			{ column=column+strlen(yytext); return LOOP;}
not 			{ column=column+strlen(yytext); return NOT;}
null			{ column=column+strlen(yytext); return NULL_;}
of				{ column=column+strlen(yytext); return OF;}
or 				{ column=column+strlen(yytext); return OR;}
others			{ column=column+strlen(yytext); return OTHERS;}
out				{ column=column+strlen(yytext); return OUT;}
procedure		{ column=column+strlen(yytext); return PROCEDURE;}
record			{ column=column+strlen(yytext); return RECORD;}
return			{ column=column+strlen(yytext); return RETURN;}
then			{ column=column+strlen(yytext); return THEN;}
type			{ column=column+strlen(yytext); return TYPE;}
when			{ column=column+strlen(yytext); return WHEN;}
while			{ column=column+strlen(yytext); return WHILE;}
 
	/* Basic data types */
Integer		{ column=column+strlen(yytext); return INTEGER_TYPE;}	
Real		{ column=column+strlen(yytext); return REAL_TYPE;}
Character	{ column=column+strlen(yytext); return CHARACTER_TYPE;}
Boolean		{ column=column+strlen(yytext); return BOOLEAN_TYPE;}

	/* Data literals */

{numeral}({exponent_pos})?			{ column=column+strlen(yytext); return INTEGER_LITERAL;}
{numeral}{exponent_neg}				{ column=column+strlen(yytext); return FLOAT_LITERAL;}
{numeral}"."{numeral}{exponent}?	{ column=column+strlen(yytext); return FLOAT_LITERAL;}
\'.\'								{ column=column+strlen(yytext); return CHARACTER_LITERAL;} 	/* ' */
\"({alphanumeric}|" "|.)*\"   		{ column=column+strlen(yytext); return STRING_LITERAL;}   	/* " */
True								{ column=column+strlen(yytext); return BOOLEAN_LITERAL;}
False								{ column=column+strlen(yytext); return BOOLEAN_LITERAL;}

	/* Special characters */
"="|"<"|">"|"-"|"+"|"*"|"/"|"("|")"|"["|"]"|":"|"."|","|";"|"|" {column=column+strlen(yytext); return yytext[0];}
"=>" 	{ column=column+strlen(yytext); return ARROW; }
"**"	{ column=column+strlen(yytext); return POWER_OP;}
":="	{ column=column+strlen(yytext); return ASSIGNMENT_OP;}
"/="	{ column=column+strlen(yytext); return NOT_EQUAL_OP;}
">="	{ column=column+strlen(yytext); return GREATER_EQUAL_OP;}
"<="	{ column=column+strlen(yytext); return LESSER_EQUAL_OP;}


	/* Comments */
"--".* 			{column=column+strlen(yytext);/* ignore  line */}
'--*'.*'*--'	{column=column+strlen(yytext);/* ignore lines*/}

	/* Built in functions */
Put			{ column=column+strlen(yytext); return PUT; }
Get			{ column=column+strlen(yytext); return GET; }
\'Length	{ column=column+strlen(yytext); return LENGTH; }	/* ' */
New_Line 	{ column=column+strlen(yytext); return NEW_LINE; }
"++"		{ column=column+strlen(yytext); return CONCAT; }


{character}({alphanumeric}|_)*	{column=column+strlen(yytext);
	                             strcpy(yylval.string, yytext); 
	                             return IDENTIFIER;}

	/* Non printable characters */
	/* Fix column problem: 
	   - Add another int var which name is increment
	   - In increment you'll put the size of the token just read
	   - Before reading the token, add to column the previous increment
	   - After that, update the increment value to the current token
	   - Example: [ ] { column+=increment; increment = 1; -*ignore spaces *- }
	*/
[ ]			{column++;/*ignore spaces*/}
\t 			{column=column+4;/* ignore tabs*/}
\n 			{line++; column=1;/*return  END_LINE;*/}
<<EOF>>		{return 0; /* by default */}

	/* Unknown characters */
.			{error("Unknown character");}

%%
	/* User Code Section */
void error(char* errorMessage) {
	printf("\n\tLexical analisis failed, Line: _%i_. Column: _%i_ Error: _%s_. Character: _%c_.\n",line, column, errorMessage, yytext[0]);
}