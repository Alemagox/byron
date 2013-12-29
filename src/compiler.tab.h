/* A Bison parser, made by GNU Bison 3.0.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_COMPILER_TAB_H_INCLUDED
# define YY_YY_COMPILER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AND = 258,
    ARRAY = 259,
    BEGIN_ = 260,
    BODY = 261,
    CASE = 262,
    CONSTANT = 263,
    DO = 264,
    ELSE = 265,
    ELSIF = 266,
    END = 267,
    END_LINE = 268,
    FUNCTION = 269,
    IF = 270,
    IDENTIFIER = 271,
    IS = 272,
    LOOP = 273,
    NOT = 274,
    NULL_ = 275,
    OF = 276,
    OR = 277,
    OTHERS = 278,
    OUT = 279,
    PROCEDURE = 280,
    RECORD = 281,
    RETURN = 282,
    THEN = 283,
    TYPE = 284,
    WHEN = 285,
    WHILE = 286,
    ARROW = 287,
    ASSIGNATION_OP = 288,
    NOT_EQUAL_OP = 289,
    GREATER_EQUAL_OP = 290,
    LESSER_EQUAL_OP = 291,
    POWER_OP = 292,
    PUT = 293,
    GET = 294,
    LENGTH = 295,
    NEW_LINE = 296,
    CONCAT = 297,
    INTEGER_TYPE = 298,
    REAL_TYPE = 299,
    CHARACTER_TYPE = 300,
    BOOLEAN_TYPE = 301,
    INTEGER_LITERAL = 302,
    FLOAT_LITERAL = 303,
    CHARACTER_LITERAL = 304,
    STRING_LITERAL = 305,
    BOOLEAN_LITERAL = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 19 "syntacticAnalyzer.y" /* yacc.c:1909  */
int integer; char string[50];

#line 109 "compiler.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */
