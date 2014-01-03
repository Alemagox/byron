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
# define YYDEBUG 1
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
    CASE = 261,
    CONSTANT = 262,
    DO = 263,
    ELSE = 264,
    ELSIF = 265,
    END = 266,
    FUNCTION = 267,
    IF = 268,
    IDENTIFIER = 269,
    IN = 270,
    IS = 271,
    LOOP = 272,
    NOT = 273,
    NULL_ = 274,
    OF = 275,
    OR = 276,
    OTHERS = 277,
    OUT = 278,
    PROCEDURE = 279,
    RECORD = 280,
    RETURN = 281,
    THEN = 282,
    TYPE = 283,
    WHEN = 284,
    WHILE = 285,
    ARROW = 286,
    ASSIGNMENT_OP = 287,
    NOT_EQUAL_OP = 288,
    GREATER_EQUAL_OP = 289,
    LESSER_EQUAL_OP = 290,
    POWER_OP = 291,
    PUT = 292,
    GET = 293,
    LENGTH = 294,
    NEW_LINE = 295,
    CONCAT = 296,
    INTEGER_TYPE = 297,
    REAL_TYPE = 298,
    CHARACTER_TYPE = 299,
    BOOLEAN_TYPE = 300,
    INTEGER_LITERAL = 301,
    FLOAT_LITERAL = 302,
    CHARACTER_LITERAL = 303,
    STRING_LITERAL = 304,
    BOOLEAN_LITERAL = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 22 "syntacticAnalyzer.y" /* yacc.c:1909  */
int integer; char string[50];

#line 108 "compiler.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILER_TAB_H_INCLUDED  */
