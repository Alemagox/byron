
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\syntacticAnalyzer.y"

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



/* Line 189 of yacc.c  */
#line 114 "syntacticAnalyzer.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AND = 258,
     ARRAY = 259,
     BEGIN_ = 260,
     CASE = 261,
     CONSTANT = 262,
     ELSE = 263,
     ELSIF = 264,
     END = 265,
     FUNCTION = 266,
     IF = 267,
     IDENTIFIER = 268,
     IN = 269,
     IS = 270,
     LOOP = 271,
     NOT = 272,
     NULL_ = 273,
     OF = 274,
     OR = 275,
     OTHERS = 276,
     OUT = 277,
     PROCEDURE = 278,
     RECORD = 279,
     RETURN = 280,
     THEN = 281,
     TYPE = 282,
     WHEN = 283,
     WHILE = 284,
     ARROW = 285,
     ASSIGNMENT_OP = 286,
     NOT_EQUAL_OP = 287,
     GREATER_EQUAL_OP = 288,
     LESSER_EQUAL_OP = 289,
     POWER_OP = 290,
     PUT = 291,
     GET = 292,
     LENGTH = 293,
     NEW_LINE = 294,
     CONCAT = 295,
     INTEGER_TYPE = 296,
     REAL_TYPE = 297,
     CHARACTER_TYPE = 298,
     BOOLEAN_TYPE = 299,
     INTEGER_LITERAL = 300,
     FLOAT_LITERAL = 301,
     CHARACTER_LITERAL = 302,
     STRING_LITERAL = 303,
     BOOLEAN_LITERAL = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 45 ".\\syntacticAnalyzer.y"

	int integer; 
	char op;
	char string[50];
	registerStruct* regStruct;
	symbolType typeSymbol;
	symbolsTable symbolsList;
	variableType typeVariable;



/* Line 214 of yacc.c  */
#line 211 "syntacticAnalyzer.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 223 "syntacticAnalyzer.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNRULES -- Number of states.  */
#define YYNSTATES  259

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      55,    56,    37,    35,    54,    36,    65,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    53,
      63,    62,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    13,    15,    19,    22,    23,    28,    36,
      39,    40,    45,    48,    49,    54,    56,    58,    66,    71,
      74,    75,    82,    85,    86,    88,    90,    92,    94,    96,
      97,    99,   101,   104,   106,   109,   110,   112,   114,   118,
     120,   123,   124,   127,   128,   135,   136,   140,   144,   145,
     147,   151,   154,   159,   160,   163,   166,   172,   176,   177,
     189,   195,   197,   199,   209,   211,   214,   216,   217,   219,
     221,   224,   232,   239,   243,   244,   246,   248,   250,   252,
     254,   256,   258,   260,   264,   268,   274,   280,   286,   289,
     293,   298,   300,   304,   305,   310,   311,   313,   315,   317,
     319,   321,   323,   326,   330,   334,   336,   339,   340,   345,
     348,   349,   353,   355,   357,   359,   361,   363,   365,   368,
     376,   383,   385,   387,   389,   393,   399,   401,   403,   405,
     407,   409,   411,   413,   415,   417,   419,   421
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      67,     0,    -1,    23,    13,    15,    85,     5,   119,    10,
      13,    53,    -1,    91,    -1,    68,    54,    91,    -1,    55,
      56,    -1,    -1,    55,    70,    68,    56,    -1,     4,    55,
      91,    93,    56,    19,   130,    -1,    31,    91,    -1,    -1,
     132,    31,    91,    53,    -1,    76,   128,    -1,    -1,    76,
     128,    75,    74,    -1,    35,    -1,    36,    -1,     6,    13,
      15,    79,    10,     6,    53,    -1,    28,    87,    30,   119,
      -1,    79,    78,    -1,    -1,    13,    98,    57,   130,    72,
      53,    -1,    81,    80,    -1,    -1,    99,    -1,   102,    -1,
      77,    -1,    73,    -1,     7,    -1,    -1,   129,    -1,   106,
      -1,   127,    53,    -1,   126,    -1,    84,    85,    -1,    -1,
     109,    -1,    21,    -1,    87,    58,    86,    -1,    86,    -1,
      88,    90,    -1,    -1,     8,   119,    -1,    -1,     9,    55,
      91,    56,    26,   119,    -1,    -1,   113,    92,   114,    -1,
      54,    91,    93,    -1,    -1,   109,    -1,   109,    38,   109,
      -1,    17,   109,    -1,    55,   107,   108,    56,    -1,    -1,
      13,    69,    -1,    13,    41,    -1,    11,    13,    95,    25,
     130,    -1,    54,    13,    98,    -1,    -1,    12,    55,    91,
      56,    26,   119,    88,    89,    10,    12,    53,    -1,    13,
      59,    91,    93,    60,    -1,     3,    -1,    20,    -1,    29,
      55,    91,    56,    16,   119,    10,    16,    53,    -1,    22,
      -1,    14,    22,    -1,    14,    -1,    -1,    37,    -1,    61,
      -1,    18,    53,    -1,    13,    98,    57,    83,   130,    72,
      53,    -1,    13,    98,    57,   103,   130,    72,    -1,    53,
     107,   108,    -1,    -1,    48,    -1,    49,    -1,    50,    -1,
      52,    -1,    18,    -1,    51,    -1,   132,    -1,    96,    -1,
      55,    91,    56,    -1,    13,    69,    53,    -1,    39,    55,
      51,    56,    53,    -1,    39,    55,   132,    56,    53,    -1,
      40,    55,   132,    56,    53,    -1,    42,    53,    -1,    23,
      13,    95,    -1,    24,    81,    10,    24,    -1,   120,    -1,
     120,   116,   120,    -1,    -1,   101,   113,   115,   114,    -1,
      -1,    62,    -1,    63,    -1,    64,    -1,    32,    -1,    34,
      -1,    33,    -1,    25,    53,    -1,    25,   120,    53,    -1,
     132,    65,    13,    -1,   124,    -1,   124,   119,    -1,    -1,
     131,   128,   121,    74,    -1,   131,   128,    -1,    -1,   128,
     122,    74,    -1,   128,    -1,   105,    -1,   117,    -1,   110,
      -1,   123,    -1,    82,    -1,   127,    15,    -1,   125,    85,
       5,   119,    10,    13,    53,    -1,   125,    85,     5,   119,
      10,    53,    -1,   111,    -1,    97,    -1,    94,    -1,   128,
     104,    94,    -1,    27,    13,    15,   130,    53,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    71,    -1,   112,
      -1,    13,    -1,    35,    -1,    36,    -1,    13,    -1,   100,
      -1,   118,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   164,   164,   173,   186,   222,   224,   224,   229,   234,
     235,   240,   275,   292,   292,   316,   317,   322,   339,   360,
     361,   366,   371,   372,   377,   378,   379,   380,   385,   386,
     391,   392,   393,   394,   411,   412,   416,   424,   437,   445,
     453,   454,   459,   461,   466,   472,   472,   484,   490,   497,
     498,   499,   504,   508,   513,   514,   519,   529,   530,   535,
     551,   556,   557,   562,   576,   577,   578,   579,   584,   585,
     590,   595,   604,   613,   614,   619,   627,   635,   641,   648,
     655,   662,   663,   664,   669,   695,   699,   709,   719,   724,
     761,   768,   769,   797,   797,   817,   829,   830,   831,   832,
     833,   834,   839,   840,   845,   852,   853,   858,   858,   877,
     897,   897,   918,   923,   924,   925,   930,   931,   936,   952,
     957,   966,   967,   972,   973,  1007,  1020,  1021,  1022,  1023,
    1024,  1025,  1026,  1043,  1044,  1048,  1056,  1057
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ARRAY", "BEGIN_", "CASE",
  "CONSTANT", "ELSE", "ELSIF", "END", "FUNCTION", "IF", "IDENTIFIER", "IN",
  "IS", "LOOP", "NOT", "NULL_", "OF", "OR", "OTHERS", "OUT", "PROCEDURE",
  "RECORD", "RETURN", "THEN", "TYPE", "WHEN", "WHILE", "ARROW",
  "ASSIGNMENT_OP", "NOT_EQUAL_OP", "GREATER_EQUAL_OP", "LESSER_EQUAL_OP",
  "'+'", "'-'", "'*'", "POWER_OP", "PUT", "GET", "LENGTH", "NEW_LINE",
  "CONCAT", "INTEGER_TYPE", "REAL_TYPE", "CHARACTER_TYPE", "BOOLEAN_TYPE",
  "INTEGER_LITERAL", "FLOAT_LITERAL", "CHARACTER_LITERAL",
  "STRING_LITERAL", "BOOLEAN_LITERAL", "';'", "','", "'('", "')'", "':'",
  "'|'", "'['", "']'", "'/'", "'='", "'<'", "'>'", "'.'", "$accept",
  "main", "actual_parameter_list", "actual_parameter_part", "$@1",
  "array_type_definition", "assign_expression", "assignment_statement",
  "binary_adding_list", "@2", "binary_adding_operator", "case_statement",
  "case_statement_alternative", "case_statement_alternative_list",
  "component_item", "component_list", "compound_statement", "constant",
  "declarative_item", "declarative_part", "discrete_choice",
  "discrete_choice_list", "elsif_list", "else_statement",
  "elsif_statement", "expression", "@3", "expression_list", "factor",
  "formal_part", "function_call", "function_specification",
  "identifier_list", "if_statement", "indexed_component",
  "logical_operator", "loop_statement", "mode", "multiplying_operator",
  "null_statement", "object_declaration", "parameter_specification",
  "parameter_specification_list", "primary", "procedure_call_statement",
  "procedure_specification", "record_type_definition", "relation",
  "relation_list", "@4", "relational_operator", "return_statement",
  "selected_component", "sequence_of_statements", "simple_expression",
  "@5", "@6", "simple_statement", "statement", "subprogram_body_",
  "subprogram_body", "subprogram_specification", "term",
  "type_declaration", "type_definition", "unary_adding_operator",
  "variable", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    43,    45,    42,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,    59,    44,    40,    41,    58,   124,    91,
      93,    47,    61,    60,    62,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    70,    69,    71,    72,
      72,    73,    74,    75,    74,    76,    76,    77,    78,    79,
      79,    80,    81,    81,    82,    82,    82,    82,    83,    83,
      84,    84,    84,    84,    85,    85,    86,    86,    87,    87,
      88,    88,    89,    89,    90,    92,    91,    93,    93,    94,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
     100,   101,   101,   102,   103,   103,   103,   103,   104,   104,
     105,   106,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   110,   110,   110,   111,
     112,   113,   113,   115,   114,   114,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   119,   119,   121,   120,   120,
     122,   120,   120,   123,   123,   123,   124,   124,   125,   126,
     126,   127,   127,   128,   128,   129,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   132,   132,   132
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     1,     3,     2,     0,     4,     7,     2,
       0,     4,     2,     0,     4,     1,     1,     7,     4,     2,
       0,     6,     2,     0,     1,     1,     1,     1,     1,     0,
       1,     1,     2,     1,     2,     0,     1,     1,     3,     1,
       2,     0,     2,     0,     6,     0,     3,     3,     0,     1,
       3,     2,     4,     0,     2,     2,     5,     3,     0,    11,
       5,     1,     1,     9,     1,     2,     1,     0,     1,     1,
       2,     7,     6,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     5,     5,     5,     2,     3,
       4,     1,     3,     0,     4,     0,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     1,     2,     0,     4,     2,
       0,     3,     1,     1,     1,     1,     1,     1,     2,     7,
       6,     1,     1,     1,     3,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    35,     0,    58,     0,     0,
      35,     0,   122,    31,   121,    35,    33,     0,    30,    53,
       0,     0,    53,     0,    34,     0,     0,   118,    32,     0,
       0,    58,    29,    89,     0,     0,     0,   135,     0,     0,
       0,     0,     0,     0,    27,    26,   117,    24,   136,    25,
     113,   115,   114,   137,     0,   116,   105,     0,     0,    58,
      74,     0,    57,    28,     0,     0,   132,    23,   126,   127,
     128,   129,   130,   131,     0,     0,     0,     6,     0,     0,
      70,   135,     0,    79,   133,   134,    75,    76,    77,    80,
      78,   102,     0,   123,    82,    49,     0,   112,     0,    81,
       0,     0,     0,    88,     0,   106,     0,     0,     0,     0,
       0,     0,    56,    10,     0,     0,   125,    20,     0,    45,
      91,     5,     0,    48,    84,    55,    54,    51,     0,     0,
     103,    68,    69,     0,     0,   109,     0,   135,     0,     0,
       0,     0,     0,   104,     0,    67,    74,    52,     0,     0,
      48,     0,    58,    22,     0,     0,    95,    99,   101,   100,
      96,    97,    98,     0,     0,     3,     0,     0,    83,    50,
     124,    15,    16,   111,     0,     0,     0,     0,     0,     0,
       2,    11,     0,   120,    66,    64,     0,    73,     9,    71,
       0,    90,     0,     0,     0,    19,     0,    61,    62,     0,
      46,    92,     0,     7,    48,    60,    12,   108,     0,    85,
      86,    87,   119,    65,    10,     0,     0,     0,    37,    39,
       0,    36,    41,    93,     4,    47,     0,     0,    72,     0,
      10,    17,     0,     0,    43,    95,    14,     0,     8,     0,
      18,    38,     0,     0,     0,    40,    94,     0,    21,    42,
       0,     0,    63,     0,     0,     0,    59,     0,    44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   164,    79,   122,    72,   149,    44,   173,   226,
     174,    45,   195,   154,   153,   115,    46,    64,    10,    11,
     219,   220,   234,   244,   245,   118,   156,   167,    93,    30,
      94,    12,    21,    47,    48,   199,    49,   186,   133,    50,
      13,    60,   111,    95,    51,    14,    73,   119,   200,   235,
     163,    52,    53,    54,   120,   175,   134,    55,    56,    15,
      16,    17,    97,    18,    74,    98,    99
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -187
static const yytype_int16 yypact[] =
{
      18,    16,    60,    58,  -187,   124,    76,    62,   105,   106,
     124,   119,  -187,  -187,  -187,   124,  -187,    -3,  -187,    65,
     112,    70,    65,   116,  -187,   183,   133,  -187,  -187,   127,
     123,    62,   143,  -187,    10,   139,    99,    15,   104,    30,
     103,   107,   113,   108,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,   159,  -187,   183,   -16,   183,    62,
     120,    10,  -187,  -187,    10,   121,  -187,  -187,  -187,  -187,
    -187,  -187,  -187,  -187,   122,   163,    51,   125,    51,   126,
    -187,   -23,   142,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,    51,  -187,  -187,   144,   131,   -10,    94,   134,
      51,     7,   167,  -187,   172,  -187,    51,   173,   178,   141,
     127,   147,  -187,   169,    51,    85,  -187,  -187,   148,  -187,
      59,  -187,    51,   151,  -187,  -187,  -187,  -187,   150,   142,
    -187,  -187,  -187,    94,   -14,    73,   153,   152,   154,     6,
      32,   160,   161,  -187,     0,    53,   120,  -187,    51,   162,
     151,   192,    62,  -187,     9,   193,    39,  -187,  -187,  -187,
    -187,  -187,  -187,    51,    40,  -187,    51,   158,  -187,  -187,
    -187,  -187,  -187,  -187,    94,   -14,   204,   168,   171,   174,
    -187,  -187,   175,  -187,   207,  -187,    10,  -187,  -187,  -187,
     170,  -187,   176,   224,   115,  -187,   183,  -187,  -187,    51,
    -187,  -187,    51,  -187,   151,  -187,    78,  -187,   183,  -187,
    -187,  -187,  -187,  -187,   169,   212,    10,   181,  -187,  -187,
     -13,  -187,  -187,  -187,  -187,  -187,   -14,   225,  -187,    10,
     169,  -187,   183,   115,    96,    39,  -187,   220,  -187,   184,
    -187,  -187,   183,   185,   228,  -187,  -187,   186,  -187,  -187,
      51,   229,  -187,   187,   189,   218,  -187,   183,  -187
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -187,  -187,  -187,   164,  -187,  -187,  -186,  -187,  -165,  -187,
    -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,  -187,    25,
      13,  -187,  -187,  -187,  -187,   -76,  -187,  -141,   114,   226,
    -187,  -187,   -20,  -187,  -187,  -187,  -187,  -187,  -187,  -187,
    -187,   140,   109,   -77,  -187,  -187,  -187,    50,    17,  -187,
    -187,  -187,  -187,   -55,   -33,  -187,  -187,  -187,  -187,  -187,
    -187,  -187,   -90,  -187,   -57,  -187,   -25
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -111
static const yytype_int16 yytable[] =
{
      57,   105,   123,   108,   112,   127,    96,   113,   135,   190,
     207,    62,    27,   182,    65,   106,   128,   232,   125,   193,
     137,   171,   172,    66,   136,  -110,  -110,   131,   228,     3,
     142,    57,    77,    57,    67,    24,    78,   194,   150,   109,
      26,     1,   197,    81,   239,   233,   165,    82,    83,   107,
      28,   132,   169,   183,    68,    69,    70,    71,   138,   198,
       4,   236,   178,   225,    81,    84,    85,   184,    82,    83,
      77,   107,   188,     5,    78,   185,   139,   140,    86,    87,
      88,    89,    90,    91,   206,    92,    84,    85,   179,    19,
     204,   157,   158,   159,   202,   151,   203,   107,   152,    86,
      87,    88,    89,    90,   242,   243,    92,    81,  -107,  -107,
     131,    82,    83,   -13,   -13,   131,    20,   221,    22,    23,
      29,   160,   161,   162,    25,    31,   224,    32,    81,   214,
     201,    34,   192,    83,   132,     6,   218,     7,    58,   132,
      59,   222,    86,    87,    88,    89,    90,     8,    61,    92,
      63,     9,    75,   227,    76,    81,   221,    80,   100,   230,
      83,   103,   101,    86,    87,    88,    89,    90,   102,   104,
      92,    57,   238,   110,   253,   116,   114,   240,   117,   124,
     137,   121,   129,    57,   130,   141,   143,   249,   144,    35,
      86,    87,    88,    89,    90,    36,    37,    92,   145,   107,
     148,    38,   258,   147,   155,   166,   168,    57,    39,   176,
     177,    78,    40,   180,   181,   189,   191,    57,   205,   196,
     208,   209,    41,    42,   210,    43,   215,   211,   212,   213,
     217,   229,    57,   216,   231,   237,   247,   248,   251,   252,
     250,   254,   256,   255,   257,   126,   241,   170,    33,   223,
     146,     0,   246,     0,     0,   187
};

static const yytype_int16 yycheck[] =
{
      25,    56,    78,    58,    61,    82,    39,    64,    98,   150,
     175,    31,    15,    13,     4,    31,    92,    30,    41,    10,
      13,    35,    36,    13,   100,    35,    36,    37,   214,    13,
     106,    56,    55,    58,    24,    10,    59,    28,   114,    59,
      15,    23,     3,    13,   230,    58,   122,    17,    18,    65,
      53,    61,   129,    53,    44,    45,    46,    47,    51,    20,
       0,   226,    56,   204,    13,    35,    36,    14,    17,    18,
      55,    65,   148,    15,    59,    22,   101,   102,    48,    49,
      50,    51,    52,    53,   174,    55,    35,    36,    56,    13,
     166,    32,    33,    34,    54,    10,    56,    65,    13,    48,
      49,    50,    51,    52,     8,     9,    55,    13,    35,    36,
      37,    17,    18,    35,    36,    37,    54,   194,    13,    13,
      55,    62,    63,    64,     5,    13,   202,    57,    13,   186,
     163,    15,   152,    18,    61,    11,    21,    13,     5,    61,
      13,   196,    48,    49,    50,    51,    52,    23,    25,    55,
       7,    27,    13,   208,    55,    13,   233,    53,    55,   216,
      18,    53,    55,    48,    49,    50,    51,    52,    55,    10,
      55,   196,   229,    53,   250,    53,    55,   232,    15,    53,
      13,    56,    38,   208,    53,    13,    13,   242,    10,     6,
      48,    49,    50,    51,    52,    12,    13,    55,    57,    65,
      31,    18,   257,    56,    56,    54,    56,   232,    25,    56,
      56,    59,    29,    53,    53,    53,    24,   242,    60,    26,
      16,    53,    39,    40,    53,    42,    56,    53,    53,    22,
       6,    19,   257,    57,    53,    10,    16,    53,    10,    53,
      55,    12,    53,    56,    26,    81,   233,   133,    22,   199,
     110,    -1,   235,    -1,    -1,   146
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    67,    13,     0,    15,    11,    13,    23,    27,
      84,    85,    97,   106,   111,   125,   126,   127,   129,    13,
      54,    98,    13,    13,    85,     5,    85,    15,    53,    55,
      95,    13,    57,    95,    15,     6,    12,    13,    18,    25,
      29,    39,    40,    42,    73,    77,    82,    99,   100,   102,
     105,   110,   117,   118,   119,   123,   124,   132,     5,    13,
     107,    25,    98,     7,    83,     4,    13,    24,    44,    45,
      46,    47,    71,   112,   130,    13,    55,    55,    59,    69,
      53,    13,    17,    18,    35,    36,    48,    49,    50,    51,
      52,    53,    55,    94,    96,   109,   120,   128,   131,   132,
      55,    55,    55,    53,    10,   119,    31,    65,   119,    98,
      53,   108,   130,   130,    55,    81,    53,    15,    91,   113,
     120,    56,    70,    91,    53,    41,    69,   109,    91,    38,
      53,    37,    61,   104,   122,   128,    91,    13,    51,   132,
     132,    13,    91,    13,    10,    57,   107,    56,    31,    72,
      91,    10,    13,    80,    79,    56,    92,    32,    33,    34,
      62,    63,    64,   116,    68,    91,    54,    93,    56,   109,
      94,    35,    36,    74,    76,   121,    56,    56,    56,    56,
      53,    53,    13,    53,    14,    22,   103,   108,    91,    53,
      93,    24,    98,    10,    28,    78,    26,     3,    20,   101,
     114,   120,    54,    56,    91,    60,   128,    74,    16,    53,
      53,    53,    53,    22,   130,    56,    57,     6,    21,    86,
      87,   109,   119,   113,    91,    93,    75,   119,    72,    19,
     130,    53,    30,    58,    88,   115,    74,    10,   130,    72,
     119,    86,     8,     9,    89,    90,   114,    16,    53,   119,
      55,    10,    53,    91,    12,    56,    53,    26,   119
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 174 ".\\syntacticAnalyzer.y"
    {
			auxRegister = createRegister(	(yyvsp[(1) - (1)].regStruct)->key.id, (yyvsp[(1) - (1)].regStruct)->key.scope, 
																		(yyvsp[(1) - (1)].regStruct)->typeSymbol, (yyvsp[(1) - (1)].regStruct)->typeVariable);

			errorCode=addRegisterToList( &auxRegisterList, auxRegister );
			
			if(errorCode){
				yyerror("Error adding actual parameters! ");
			}

			//$$ = auxRegisterList;
		;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 187 ".\\syntacticAnalyzer.y"
    {
			auxRegister = createRegister(	(yyvsp[(3) - (3)].regStruct)->key.id, (yyvsp[(3) - (3)].regStruct)->key.scope, 
																		(yyvsp[(3) - (3)].regStruct)->typeSymbol, (yyvsp[(3) - (3)].regStruct)->typeVariable);

			errorCode=addRegisterToList( &auxRegisterList, auxRegister );
			if(errorCode){
				yyerror("Error adding actual parameters! ");
			}

			//addRegisterToList( &auxRegisterList, $3 );
			//$$ = auxRegisterList;
		;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 222 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 224 ".\\syntacticAnalyzer.y"
    {auxRegisterList = NULL;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 224 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = auxRegisterList;  ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 241 ".\\syntacticAnalyzer.y"
    { 
		errorCode = checkAssignmentType((yyvsp[(1) - (4)].regStruct), (yyvsp[(3) - (4)].regStruct));

		if (errorCode == -1){
			getSymbolTypeName( string1, (yyvsp[(1) - (4)].regStruct)->typeSymbol );

			sprintf(errorString,"Left side assignment isn't of variable type. Type is %s", string1);
			yyerror(errorString);
		
		} else if(errorCode == -2){
			getSymbolTypeName( string1, (yyvsp[(1) - (4)].regStruct)->typeSymbol );
			getSymbolTypeName( string2, (yyvsp[(3) - (4)].regStruct)->typeSymbol );

			sprintf(errorString,"Cannot assign right part of type %s", string2);
			yyerror(errorString);
		} else if(errorCode == -3){
			getVariableTypeName( string1, (yyvsp[(1) - (4)].regStruct)->typeVariable );
			getVariableTypeName( string2, (yyvsp[(3) - (4)].regStruct)->typeVariable );

			sprintf(errorString,"Cannot assign right part of typeVariable %s", string2);
			yyerror(errorString);
		} 

		if(errorCode) YYABORT;

		getVariableTypeName( string1, (yyvsp[(1) - (4)].regStruct)->typeVariable );
		getVariableTypeName( string2, (yyvsp[(3) - (4)].regStruct)->typeVariable );
		//printf("Assigning type %s := type %s.\n", string1, string2);
		// In code generation, force casting if variable types are different
	;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 276 ".\\syntacticAnalyzer.y"
    {
			errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (2)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for addition */
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(-1) - (2)].regStruct), (yyvsp[(2) - (2)].regStruct))
																	);	
			if((yyvsp[(2) - (2)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(2) - (2)].regStruct));
			(yyval.regStruct) = auxRegister;
		;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 292 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct) ; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 293 ".\\syntacticAnalyzer.y"
    {
			errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (4)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for addition */
			generateAnonymousId();

			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(-1) - (4)].regStruct), (yyvsp[(4) - (4)].regStruct))
																	);	

			if((yyvsp[(2) - (4)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(2) - (4)].regStruct));
			if((yyvsp[(4) - (4)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(4) - (4)].regStruct));
			//destroyRegister($4);
			(yyval.regStruct) = auxRegister;
		;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 316 ".\\syntacticAnalyzer.y"
    {	(yyval.op) = '+'; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 317 ".\\syntacticAnalyzer.y"
    {	(yyval.op) = '-'; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 325 ".\\syntacticAnalyzer.y"
    {
		// Get register of the identifier
		auxRegister = getSymbol(&sT, (yyvsp[(2) - (7)].string), sT.currentScope);
		errorCode = checkIfNumeric(errorString, auxRegister, 5);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}
		nOthers = 0;
	;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 341 ".\\syntacticAnalyzer.y"
    {
		errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (4)].regStruct), 5);
		if(errorCode && (yyvsp[(2) - (4)].regStruct)->typeVariable!=Void){ // others have Void as varaible type
			yyerror(errorString);
			YYABORT;
		}
		
		if( (yyvsp[(2) - (4)].regStruct)->typeVariable == Void ){
			if ( nOthers > 0 ){
				yyerror("Duplicated others in case statement");
				YYABORT;
			}
			nOthers++;
		}
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 393 ".\\syntacticAnalyzer.y"
    { /*destroyRegister( $1 );*/ ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 395 ".\\syntacticAnalyzer.y"
    { markSubprogramAsDefined( (yyvsp[(1) - (1)].regStruct) );
		//destroyRegister( $1 ); 
	  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 417 ".\\syntacticAnalyzer.y"
    {			
			errorCode = checkIfDiscreteChoice(errorString, (yyvsp[(1) - (1)].regStruct));
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 425 ".\\syntacticAnalyzer.y"
    {
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			(yyval.regStruct) = auxRegister;
		;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 438 ".\\syntacticAnalyzer.y"
    {
			errorCode = checkIfOthers(errorString, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct));
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 446 ".\\syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);
		;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 472 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 472 ".\\syntacticAnalyzer.y"
    {

		if((yyvsp[(3) - (3)].regStruct)->typeVariable == Void ){ // There's no list
			(yyval.regStruct) = (yyvsp[(1) - (3)].regStruct);
			destroyRegister((yyvsp[(3) - (3)].regStruct));
		}else {
			(yyval.regStruct) = (yyvsp[(3) - (3)].regStruct);
		}
	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 485 ".\\syntacticAnalyzer.y"
    {
		addRegisterToList( &auxRegisterList, (yyvsp[(2) - (3)].regStruct) );
		(yyval.regStruct) = auxRegisterList;
	;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 490 ".\\syntacticAnalyzer.y"
    {
		(yyval.regStruct) = NULL;
	;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 497 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 498 ".\\syntacticAnalyzer.y"
    { yyerror("Incomplete factor"); (yyval.regStruct) = (yyvsp[(1) - (3)].regStruct); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 499 ".\\syntacticAnalyzer.y"
    { yyerror("Incomplete factor"); (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 505 ".\\syntacticAnalyzer.y"
    { 
		(yyval.regStruct) = auxRegisterList; 
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 508 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 520 ".\\syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(2) - (5)].string), sT.currentScope,  Function, (yyvsp[(5) - (5)].typeVariable) ); 
	  addRegister( &sT, auxRegister );
	  (yyval.regStruct) = auxRegister; 
	;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 540 ".\\syntacticAnalyzer.y"
    {
		errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (11)].regStruct), 3);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}
	;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 565 ".\\syntacticAnalyzer.y"
    {
		errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (9)].regStruct), 4);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}
	;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 576 ".\\syntacticAnalyzer.y"
    { (yyval.typeSymbol) = Out; ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 577 ".\\syntacticAnalyzer.y"
    { (yyval.typeSymbol) = InOut; ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 578 ".\\syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 579 ".\\syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 596 ".\\syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(1) - (7)].string), sT.currentScope,  Variable, (yyvsp[(5) - (7)].typeVariable) ); 
	  addRegister( &sT, auxRegister ); 
	;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 605 ".\\syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(1) - (6)].string), sT.currentScope,  (yyvsp[(4) - (6)].typeSymbol), (yyvsp[(5) - (6)].typeVariable) ); 
	  addRegisterToList( &auxRegisterList, auxRegister ); 
	;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 619 ".\\syntacticAnalyzer.y"
    { generateAnonymousId();

										auxRegister = createRegister( anonymousIdString, 
																									sT.currentScope, Literal, 
																									Integer
																								);
										(yyval.regStruct) = auxRegister;
									;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 627 ".\\syntacticAnalyzer.y"
    { generateAnonymousId();

												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Real
																										);	
												(yyval.regStruct) = auxRegister;
											;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 635 ".\\syntacticAnalyzer.y"
    { auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Character
																										);	
												(yyval.regStruct) = auxRegister;
											;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 641 ".\\syntacticAnalyzer.y"
    { generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Bool
																										);	
												(yyval.regStruct) = auxRegister;
											;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 648 ".\\syntacticAnalyzer.y"
    {	
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Void
																										);	
												(yyval.regStruct) = auxRegister;	
											;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 655 ".\\syntacticAnalyzer.y"
    { generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											String
																										);	
												(yyval.regStruct) = auxRegister;
											;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 662 ".\\syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 663 ".\\syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 664 ".\\syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(2) - (3)].regStruct);	;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 670 ".\\syntacticAnalyzer.y"
    { 
		//printf( "line %d -- id '%s' -- scope %d\n", line, $1, sT.currentScope );
		
		errorCode = searchProcedure( &sT, (yyvsp[(1) - (3)].string), sT.currentScope );
	  if ( errorCode!=0 ){
	  	yyerror("Procedure call error: %s", (yyvsp[(1) - (3)].string));
	  	YYABORT;
		} 
    
		// Check actual parameters against defined arguments
		// (Same number and type of parameters).
		auxRegister = getProcedure( &sT, (yyvsp[(1) - (3)].string), sT.currentScope );
		
	
  	if( checkParametersSubprogramCall( (yyvsp[(2) - (3)].regStruct), auxRegister ) ) { //Change it for checkActual call
  	  yyerror("CheckParameterSubprogram error");
  	  YYABORT;
  	}
  	
  	// It sets auxRegisterList as NULL
		deleteRegisterList( &auxRegisterList );

		// Generate code		
	;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 696 ".\\syntacticAnalyzer.y"
    {
			// Generate code
		;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 700 ".\\syntacticAnalyzer.y"
    { 
			errorCode = checkPutGet( errorString, (yyvsp[(3) - (5)].regStruct) );
		  if ( errorCode!=0 ){
		  	yyerror("Incorrect 'Put' parameter: %s", errorString);
		  	YYABORT;
			} 

			// Generate code
		;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 710 ".\\syntacticAnalyzer.y"
    { 
			errorCode = checkPutGet( errorString, (yyvsp[(3) - (5)].regStruct) );
		  if ( errorCode!=0 ){
		  	yyerror("Incorrect 'Get' parameter: %s", errorString);
		  	YYABORT;
			} 
			
			// Generate code
		;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 725 ".\\syntacticAnalyzer.y"
    { auxRegister = createRegister( (yyvsp[(2) - (3)].string), sT.currentScope,  Procedure, Void ); 
	  if ( addRegister( &sT, auxRegister ) ) { // Procedure has been already specified, but not defined
	  	free(auxRegister);
	  	auxRegister = getProcedure( &sT, (yyvsp[(2) - (3)].string), sT.currentScope );

	  	if( auxRegister->defined == 1 ) { // Defined procedure, error due to double definition
	      sprintf(errorString, "!! - Double definition of procedure '%s'\n", auxRegister->key.id);
	      yyerror(errorString);
	  	}

	  	// Check that specification and definition have same number 
	  	// and type of parameters,
	  	if( checkParametersSubprogram( (yyvsp[(3) - (3)].regStruct), auxRegister ) ){
	  	  yyerror("CheckParameterSubprogram is incomplete");
	  	}

	  	//addParametersToSubprogram( &sT, $3, auxRegister );
	  }
	  else{ // Adding the list of parameters
	  	//sT.currentScope = stackScope;
	  	auxRegister = getProcedure( &sT, (yyvsp[(2) - (3)].string), sT.currentScope );

	  	//addParametersToSubprogram( &sT, $3, auxRegister );
	  	//auxRegisterList = NULL;

	  }

	  addParametersToSubprogram( &sT, (yyvsp[(3) - (3)].regStruct), auxRegister );
	  auxRegisterList = NULL;

	  (yyval.regStruct) = auxRegister; 
	;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 768 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 770 ".\\syntacticAnalyzer.y"
    {	//yyerror("Incomple simple expression");
			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 2);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 2);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for relation */


			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Bool
																	);	
			(yyval.regStruct) = auxRegister;
		;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 797 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 798 ".\\syntacticAnalyzer.y"
    {
		errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (4)].regStruct), 3);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}

		/* Generate code for relation */

		generateAnonymousId();

		auxRegister = createRegister( anonymousIdString, 
																	sT.currentScope, Auxiliar, 
																	getFactorVariableType((yyvsp[(-1) - (4)].regStruct), (yyvsp[(2) - (4)].regStruct))
																);	
		if((yyvsp[(2) - (4)].regStruct)->typeSymbol==Auxiliar)destroyRegister((yyvsp[(2) - (4)].regStruct));
		(yyval.regStruct) = auxRegister;
	;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 817 ".\\syntacticAnalyzer.y"
    {
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			(yyval.regStruct) = auxRegister; 
		;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 858 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct) ; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 859 ".\\syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (4)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			/* Generate code for addition */

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(2) - (4)].regStruct), (yyvsp[(4) - (4)].regStruct))
																	);	
			if((yyvsp[(2) - (4)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(2) - (4)].regStruct));
			if((yyvsp[(4) - (4)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(4) - (4)].regStruct));
			
			(yyval.regStruct) = auxRegister;
		;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 878 ".\\syntacticAnalyzer.y"
    { 
				errorCode = checkIfNumeric(errorString, (yyvsp[(2) - (2)].regStruct), 1);
				if(errorCode){
					yyerror(errorString);
					YYABORT;
				}

				/* Generate code for addition */

				/*
				generateAnonymousId();
				auxRegister = createRegister( anonymousIdString, 
																			sT.currentScope, Auxiliar, 
																			$2->typeVariable
																		);	
				*/
				
				(yyval.regStruct) = (yyvsp[(2) - (2)].regStruct);
		 	;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 897 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct) ; ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 898 ".\\syntacticAnalyzer.y"
    { 	
				errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 1);
				if(errorCode){
					yyerror(errorString);
					YYABORT;
				}

				/* Generate code for addition */

				generateAnonymousId();
				auxRegister = createRegister( anonymousIdString, 
																			sT.currentScope, Auxiliar, 
																			getFactorVariableType((yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct))
																		);

				if((yyvsp[(1) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(1) - (3)].regStruct));
				if((yyvsp[(3) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(3) - (3)].regStruct));
	
				(yyval.regStruct) = auxRegister;
			;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 918 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 937 ".\\syntacticAnalyzer.y"
    {
		enterScope ( &sT );

		errorCode = addParametersToSymbolsTable(&sT, (yyvsp[(1) - (2)].regStruct));
		if ( errorCode!=0 ){
	  	yyerror("Error adding parameters of subprogram %s", (yyvsp[(1) - (2)].regStruct)->key.id);
	  	YYABORT;
		}

		(yyval.regStruct) = (yyvsp[(1) - (2)].regStruct);
	;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 956 ".\\syntacticAnalyzer.y"
    { exitScope ( &sT ); (yyval.regStruct) = (yyvsp[(1) - (7)].regStruct); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 961 ".\\syntacticAnalyzer.y"
    { exitScope ( &sT ); (yyval.regStruct) = (yyvsp[(1) - (6)].regStruct); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 966 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 967 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 972 ".\\syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 974 ".\\syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 0);
			if(errorCode) {
				printRegister(*(yyvsp[(3) - (3)].regStruct));
				yyerror(errorString);
				YYABORT;
			}

			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 0);
			if(errorCode){
				printRegister(*(yyvsp[(1) - (3)].regStruct));
				yyerror(errorString);
				YYABORT;
			} 

			getVariableTypeName(string1, (yyvsp[(1) - (3)].regStruct)->typeVariable);
  		getVariableTypeName(string2, (yyvsp[(3) - (3)].regStruct)->typeVariable);
  		//printf("4##########\n");
  		//printf("####%s - %s\n", string1, string2);

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct))
																	);	
			if((yyvsp[(1) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(1) - (3)].regStruct));
			if((yyvsp[(3) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(3) - (3)].regStruct));

			(yyval.regStruct) = auxRegister;
		;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1008 ".\\syntacticAnalyzer.y"
    {
		auxRegister = createRegister( (yyvsp[(2) - (5)].string), sT.currentScope,  Type, Void );
		errorCode = addRegister( &sT, auxRegister );
		if(errorCode){
			yyerror("Type %s is already defined.", (yyvsp[(4) - (5)].typeVariable));
			YYABORT;
		}
	;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1020 ".\\syntacticAnalyzer.y"
    { (yyval.typeVariable) = Integer; ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1021 ".\\syntacticAnalyzer.y"
    { (yyval.typeVariable) = Real; ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1022 ".\\syntacticAnalyzer.y"
    { (yyval.typeVariable) = Character; ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1023 ".\\syntacticAnalyzer.y"
    { (yyval.typeVariable) = Bool; ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1024 ".\\syntacticAnalyzer.y"
    { (yyval.typeVariable) = ArrayVariable; ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1025 ".\\syntacticAnalyzer.y"
    { (yyval.typeVariable) = Record; ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1027 ".\\syntacticAnalyzer.y"
    { 
			auxRegister = getSymbol(&sT, (yyvsp[(1) - (1)].string), sT.currentScope);

		 	/* check if type really exists */
			if(auxRegister == NULL){
				sprintf(errorString, "Type '%s' not found in symbols table", (yyvsp[(1) - (1)].string));
				yyerror(errorString);
				YYABORT; // Serious compiler error
			}

			(yyval.typeVariable) = CustomType; 
		;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1048 ".\\syntacticAnalyzer.y"
    { auxRegister = getSymbol(&sT, (yyvsp[(1) - (1)].string), sT.currentScope);
							 /* check if variable really exists */
							if(auxRegister == NULL){
								sprintf(errorString, "Variable '%s' not found in symbols table", (yyvsp[(1) - (1)].string));
								yyerror(errorString);
								YYABORT; // Serious compiler error
							}
							(yyval.regStruct) = auxRegister; ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1056 ".\\syntacticAnalyzer.y"
    { yyerror("Incomplete! -> indexed_componenti in variable"); YYABORT; (yyval.regStruct) = NULL; ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1057 ".\\syntacticAnalyzer.y"
    { yyerror("Incomplete! -> selected_componenti in variable"); YYABORT; (yyval.regStruct) = NULL; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2671 "syntacticAnalyzer.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1060 ".\\syntacticAnalyzer.y"


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

