/* Defining varaibles */
%{
void error(char*); //Function to display error

int line=1;
int integerValue;

%}

/* Definitions Section */
character			[a-zA-Z]
digit					[0-9]
alphanumeric	{character}|{digit}

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
Character	{return "CHARACTER_TYPE";}
Boolean		{return "BOOLEAN_TYPE";}

/*  */

\n 				{line++; return "END_LINE";}

%%
/* User Code Section */
void error(char* errorMessage) {
	printf("\n\tLexical analisis failed, Line: %i. Error: %s. Character:%c.\n",line,errorMessage, yytext[0]);
}