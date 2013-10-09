/* Defining varaibles */
%{
void error(char*); //Function to display erro r 

int line=1;
int integerValue;
int floatValue;

%}

/* Definitions Section */

/* To test regex quickly -> http://gskinner.com/RegExr/ */
character			[a-zA-Z]
digit					[0-9]
numeral				{digit}+(_({digit}+)+
alphanumeric	{character}|{digit}
exponent_int	E"+"?{numeral}
exponent 			{exponent_int}|E"-"{numeral}

%%
/* Rules Section */
/* Reserverd words*/
and				{return "AND";}
array			{return "ARRAY";}
begin			{return "BEGIN";}
body			{return "BODY";}
case			{return "CASE";}
constant	{return "CONSTANT";}
do 				{return "DO";}
else			{return "ELSE";}
elsif			{return "ELSIF";}
end				{return "END";}
function 	{return "FUNCTION";}
if 				{return "IF";}
is				{return "IS";}
loop			{return "LOOP";}
not 			{return "NOT";}
null			{return "NULL";}
of				{return "OF";}
or 				{return "OR";}
others		{return "OTHERS";}
out				{return "OUT";}
procedure	{return "PROCEDURE";}
record		{return "RECORD";}
return		{return "RETURN";}
then			{return "THEN";}
type			{return "TYPE";}
when			{return "WHEN";}
while			{return "WHILE";}
 
/* Basic data types */
Integer 	{return "INTEGER_TYPE";}	
Real			{return "REAL_TYPE"}
Character	{return "CHARACTER_TYPE";}
Boolean		{return "BOOLEAN_TYPE";}

/* Data literals */
{numeral}{exponent_int}?					{integerValue=atoi(yytext); return "INTEGER_LITERAL";}
{numeral}"."{numeral}{exponent}?	{floatValue=atof(yytext); return "FLOAT_LITERAL";}
\"{alphanumeric}*\"    						{return "STRING_LITERAL"}//"
TRUE															{integerValue=1; return "BOOLEAN_LITERAL";}
FALSE															{integerValue=0; return "BOOLEAN_LITERAL";}

/* Special characters */
"="|"<"|">"|"-"|"+"|"*"|"/"|"."|","|";" {return yytext[0];}
"=>" 	{ return "ARROW"; }
"**"	{ return "POWER_OP"; }
":="	{ return "ASSIGNATION_OP";}
"/="	{ return "NOT_EQUAL_OP";}
">="	{ return "GREATER_EQUAL_OP";}
"<="	{ return "LESSER_EQUAL_OP";}



/* Comments */
--.* 					{/* ignore  line */}
--"*".*"*"--	{/* ignore lines*/}

/* Non printable characters */
\t 					{/* ignore tabs*/}
\n 				{line++; return "END_LINE";}
<<EOF>>		{return 0; /* by default */}

%%
/* User Code Section */
void error(char* errorMessage) {
	printf("\n\tLexical analisis failed, Line: _%i_. Error: _%s_. Character: _%c_.\n",line,errorMessage, yytext[0]);
}