
%{
// flex lexicalAnalizer.l 
// gcc lex.yy.c -lfl -o lexAnalizer	


/* Defining variables */
void error(char*); //Function to display erro r 

int line=1;

%}

	/* Definitions Section */

	/* To test regex quickly -> http://gskinner.com/RegExr/ */
character		[a-zA-Z]
digit			[0-9]
bu 				[bu]
numeral			({digit}+)(_{digit}+)*
alphanumeric	{character}|{digit}
exponent_pos    E"+"?{numeral}
exponent_neg    E"-"{numeral}
exponent 		{exponent_neg}|{exponent_pos}


%%
	/* Rules Section */
	/* Reserverd words*/
and				{printf("AND");}
array			{printf("ARRAY");}
begin			{printf("BEGIN");}
body			{printf("BODY");}
case			{printf("CASE");}
constant		{printf("CONSTANT");}
do 				{printf("DO");}
else			{printf("ELSE");}
elsif			{printf("ELSIF");}
end				{printf("END");}
function 		{printf("FUNCTION");}
if 				{printf("IF");}
is				{printf("IS");}
loop			{printf("LOOP");}
not 			{printf("NOT");}
null			{printf("NULL");}
of				{printf("OF");}
or 				{printf("OR");}
others			{printf("OTHERS");}
out				{printf("OUT");}
procedure		{printf("PROCEDURE");}
record			{printf("RECORD");}
return			{printf("RETURN");}
then			{printf("THEN");}
type			{printf("TYPE");}
when			{printf("WHEN");}
while			{printf("WHILE");}
 
	/* Basic data types */
Integer		{printf("INTEGER_TYPE");}	
Real		{printf("REAL_TYPE");}
Character	{printf("CHARACTER_TYPE");}
Boolean		{printf("BOOLEAN_TYPE");}

	/* Data literals */

{numeral}({exponent_pos})?			{printf("INTEGER_LITERAL");}
{numeral}{exponent_neg}				{printf("FLOAT_LITERAL");}
{numeral}"."{numeral}{exponent}?	{printf("FLOAT_LITERAL");}
\'.\'								{printf("CHARACTER_LITERAL");} 	/* ' */
\"({alphanumeric}|" ")*\"    				{printf("STRING_LITERAL");}   	/* " */
TRUE								{printf("BOOLEAN_LITERAL");}
FALSE								{printf("BOOLEAN_LITERAL");}

	/* Special characters */
"="|"<"|">"|"-"|"+"|"*"|"/"|"("|")"|":"|"."|","|";" {printf("%c",yytext[0]);}
"=>" 	{ printf("ARROW"); }
"**"	{ printf("POWER_OP");}
":="	{ printf("ASSIGNATION_OP");}
"/="	{ printf("NOT_EQUAL_OP");}
">="	{ printf("GREATER_EQUAL_OP");}
"<="	{ printf("LESSER_EQUAL_OP");}

{character}({alphanumeric}|_)*	{printf("IDENTIFIER");}

	/* Comments */
"--".* 					{/* ignore  line */}
'--*'.*'*--'	{/* ignore lines*/}

	/* Built in functions */
'Put'		{printf("PUT");}
'Get' 		{printf("GET");}
\'Length	{printf("LENGTH");}				/* ' */
'New_Line'	{printf("NEW_LINE");}
"++"		{printf("CONCAT");}

	/* Non printable characters */
[ ]			{printf(" ");}
\t 			{/* ignore tabs*/}
\n 			{line++; printf(" END_LINE\n");}
<<EOF>>		{return 0; /* by default */}

	/* Unknown characters */
.			{error("Unknown character");}

%%
	/* User Code Section */
void error(char* errorMessage) {
	printf("\n\tLexical analisis failed, Line: _%i_. Error: _%s_. Character: _%c_.\n",line,errorMessage, yytext[0]);
}