/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "syntacticAnalyzer.y"

///////////////////////////////////////////////////
// Instructions of use:
//  - bison sintacticAnalizer.y 
//  - bison -d syntacticAnalyzer.y -o compiler.tab.c

/////////////////////////////
// C declarations
#include <stdio.h> 
#include "symbolsTable.h" 
#include "codeGenerationQ.h" 

extern FILE *yyin, *yyout; 	// Input stream , declared by lexical analyzer
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
qMachine Q;

int errorCode, nRegisters;
char errorString[500];
char string1[15], string2[15];
int nOthers;

int stackScope;
int anonymousId = 0;
char anonymousIdString[500];

int errorCompiling;


/////////////////////////////////////////////
// Methods
void generateAnonymousId();



/* Line 268 of yacc.c  */
#line 118 "compiler.tab.c"

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

/* Line 293 of yacc.c  */
#line 51 "syntacticAnalyzer.y"

	int integer; 
	char op;
	char string[50];
	registerStruct* regStruct;
	symbolType typeSymbol;
	symbolsTable symbolsList;
	variableType typeVariable;



/* Line 293 of yacc.c  */
#line 215 "compiler.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 227 "compiler.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNRULES -- Number of states.  */
#define YYNSTATES  265

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
      56,    57,    37,    35,    55,    36,    65,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    54,
      63,    62,    64,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    59,     2,     2,     2,     2,     2,
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
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    15,    17,    21,    24,    25,    30,
      38,    41,    42,    47,    55,    60,    63,    64,    71,    74,
      76,    78,    80,    82,    84,    86,    87,    89,    91,    94,
      96,    99,   100,   102,   104,   108,   110,   113,   114,   115,
     119,   120,   121,   122,   131,   132,   136,   140,   141,   143,
     147,   150,   155,   156,   159,   162,   168,   172,   173,   174,
     175,   176,   191,   197,   199,   201,   202,   203,   215,   217,
     220,   222,   223,   225,   227,   230,   238,   245,   249,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   270,   274,
     280,   286,   292,   295,   299,   304,   306,   310,   311,   312,
     318,   319,   321,   323,   325,   327,   329,   331,   334,   338,
     342,   344,   347,   350,   352,   356,   360,   362,   364,   366,
     368,   370,   372,   375,   383,   390,   392,   394,   396,   400,
     406,   408,   410,   412,   414,   416,   418,   420,   422,   424,
     426,   428
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      67,     0,    -1,    -1,    23,    13,    15,    83,     5,    68,
     126,    10,    13,    54,    -1,    92,    -1,    69,    55,    92,
      -1,    56,    57,    -1,    -1,    56,    71,    69,    57,    -1,
       4,    56,    92,    94,    57,    19,   136,    -1,    31,    92,
      -1,    -1,   138,    31,    92,    54,    -1,     6,    13,    15,
      77,    10,     6,    54,    -1,    28,    85,    30,   126,    -1,
      77,    76,    -1,    -1,    13,    99,    58,   136,    73,    54,
      -1,    78,    79,    -1,    78,    -1,   100,    -1,   106,    -1,
      75,    -1,    74,    -1,     7,    -1,    -1,   135,    -1,   112,
      -1,   133,    54,    -1,   132,    -1,    82,    83,    -1,    -1,
     115,    -1,    21,    -1,    85,    59,    84,    -1,    84,    -1,
      86,    89,    -1,    -1,    -1,     8,    88,   126,    -1,    -1,
      -1,    -1,     9,    90,    56,    92,    57,    91,    26,   126,
      -1,    -1,   119,    93,   120,    -1,    55,    92,    94,    -1,
      -1,   115,    -1,   115,    39,   115,    -1,    17,   115,    -1,
      56,   113,   114,    57,    -1,    -1,    13,    70,    -1,    13,
      42,    -1,    11,    13,    96,    25,   136,    -1,    55,    13,
      99,    -1,    -1,    -1,    -1,    -1,    12,   101,    56,    92,
      57,   102,    26,   126,   103,    86,    87,    10,    12,    54,
      -1,    13,    60,    92,    94,    61,    -1,     3,    -1,    20,
      -1,    -1,    -1,    29,   107,    56,    92,    57,   108,    16,
     126,    10,    16,    54,    -1,    22,    -1,    14,    22,    -1,
      14,    -1,    -1,    37,    -1,    38,    -1,    18,    54,    -1,
      13,    99,    58,    81,   136,    73,    54,    -1,    13,    99,
      58,   109,   136,    73,    -1,    54,   113,   114,    -1,    -1,
      49,    -1,    50,    -1,    51,    -1,    53,    -1,    18,    -1,
      52,    -1,   138,    -1,    97,    -1,    56,    92,    57,    -1,
      13,    70,    54,    -1,    40,    56,    52,    57,    54,    -1,
      40,    56,   138,    57,    54,    -1,    41,    56,   138,    57,
      54,    -1,    43,    54,    -1,    23,    13,    96,    -1,    24,
      79,    10,    24,    -1,   127,    -1,   127,   123,   127,    -1,
      -1,    -1,   105,   121,   119,   122,   120,    -1,    -1,    62,
      -1,    63,    -1,    64,    -1,    32,    -1,    34,    -1,    33,
      -1,    25,    54,    -1,    25,   127,    54,    -1,   138,    65,
      13,    -1,   130,    -1,   130,   126,    -1,   137,   128,    -1,
     128,    -1,   128,    35,   128,    -1,   128,    36,   128,    -1,
     134,    -1,   111,    -1,   124,    -1,   116,    -1,   129,    -1,
      80,    -1,   133,    15,    -1,   131,    83,     5,   126,    10,
      13,    54,    -1,   131,    83,     5,   126,    10,    54,    -1,
     117,    -1,    98,    -1,    95,    -1,   134,   110,    95,    -1,
      27,    13,    15,   136,    54,    -1,    45,    -1,    46,    -1,
      47,    -1,    48,    -1,    72,    -1,   118,    -1,    13,    -1,
      35,    -1,    36,    -1,    13,    -1,   104,    -1,   125,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   177,   177,   173,   186,   199,   235,   237,   237,   242,
     247,   248,   253,   342,   359,   380,   381,   386,   395,   396,
     401,   402,   403,   404,   409,   410,   415,   416,   417,   418,
     435,   436,   440,   448,   461,   469,   477,   478,   484,   483,
     489,   494,   499,   494,   514,   514,   526,   532,   539,   540,
     541,   546,   550,   555,   556,   561,   571,   572,   577,   582,
     592,   577,   600,   605,   606,   611,   612,   611,   629,   630,
     631,   632,   637,   638,   643,   648,   677,   686,   687,   692,
     704,   716,   726,   737,   744,   751,   752,   753,   758,   783,
     788,   799,   810,   818,   855,   862,   863,   892,   894,   891,
     919,   931,   932,   933,   934,   935,   936,   941,   942,   947,
     954,   955,   960,   964,   971,   996,  1021,  1094,  1095,  1096,
    1101,  1102,  1107,  1123,  1128,  1137,  1138,  1143,  1144,  1180,
    1185,  1186,  1187,  1188,  1189,  1190,  1191,  1208,  1209,  1213,
    1221,  1222
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
  "'+'", "'-'", "'*'", "'/'", "POWER_OP", "PUT", "GET", "LENGTH",
  "NEW_LINE", "CONCAT", "INTEGER_TYPE", "REAL_TYPE", "CHARACTER_TYPE",
  "BOOLEAN_TYPE", "INTEGER_LITERAL", "FLOAT_LITERAL", "CHARACTER_LITERAL",
  "STRING_LITERAL", "BOOLEAN_LITERAL", "';'", "','", "'('", "')'", "':'",
  "'|'", "'['", "']'", "'='", "'<'", "'>'", "'.'", "$accept", "main",
  "$@1", "actual_parameter_list", "actual_parameter_part", "$@2",
  "array_type_definition", "assign_expression", "assignment_statement",
  "case_statement", "case_statement_alternative",
  "case_statement_alternative_list", "component_item", "component_list",
  "compound_statement", "constant", "declarative_item", "declarative_part",
  "discrete_choice", "discrete_choice_list", "elsif_list",
  "else_statement", "$@3", "elsif_statement", "@4", "$@5", "expression",
  "@6", "expression_list", "factor", "formal_part", "function_call",
  "function_specification", "identifier_list", "if_statement", "@7", "$@8",
  "$@9", "indexed_component", "logical_operator", "loop_statement", "@10",
  "$@11", "mode", "multiplying_operator", "null_statement",
  "object_declaration", "parameter_specification",
  "parameter_specification_list", "primary", "procedure_call_statement",
  "procedure_specification", "record_type_definition", "relation",
  "relation_list", "$@12", "@13", "relational_operator",
  "return_statement", "selected_component", "sequence_of_statements",
  "simple_expression", "simple_expression_", "simple_statement",
  "statement", "subprogram_body_", "subprogram_body",
  "subprogram_specification", "term", "type_declaration",
  "type_definition", "unary_adding_operator", "variable", 0
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
     285,   286,   287,   288,   289,    43,    45,    42,    47,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,    59,    44,    40,    41,    58,   124,
      91,    93,    61,    60,    62,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    68,    67,    69,    69,    70,    71,    70,    72,
      73,    73,    74,    75,    76,    77,    77,    78,    79,    79,
      80,    80,    80,    80,    81,    81,    82,    82,    82,    82,
      83,    83,    84,    84,    85,    85,    86,    86,    88,    87,
      87,    90,    91,    89,    93,    92,    94,    94,    95,    95,
      95,    96,    96,    97,    97,    98,    99,    99,   101,   102,
     103,   100,   104,   105,   105,   107,   108,   106,   109,   109,
     109,   109,   110,   110,   111,   112,   113,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     116,   116,   116,   117,   118,   119,   119,   121,   122,   120,
     120,   123,   123,   123,   123,   123,   123,   124,   124,   125,
     126,   126,   127,   127,   128,   128,   128,   129,   129,   129,
     130,   130,   131,   132,   132,   133,   133,   134,   134,   135,
     136,   136,   136,   136,   136,   136,   136,   137,   137,   138,
     138,   138
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,    10,     1,     3,     2,     0,     4,     7,
       2,     0,     4,     7,     4,     2,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     1,
       2,     0,     1,     1,     3,     1,     2,     0,     0,     3,
       0,     0,     0,     8,     0,     3,     3,     0,     1,     3,
       2,     4,     0,     2,     2,     5,     3,     0,     0,     0,
       0,    14,     5,     1,     1,     0,     0,    11,     1,     2,
       1,     0,     1,     1,     2,     7,     6,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     5,
       5,     5,     2,     3,     4,     1,     3,     0,     0,     5,
       0,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       1,     2,     2,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     2,     7,     6,     1,     1,     1,     3,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    31,     0,    57,     0,     0,
      31,     0,   126,    27,   125,    31,    29,     0,    26,    52,
       0,     0,    52,     0,    30,     2,     0,   122,    28,     0,
       0,    57,    25,    93,     0,     0,     0,    57,    78,     0,
      56,    24,     0,     0,   136,     0,   130,   131,   132,   133,
     134,   135,     0,     0,    58,   139,     0,     0,    65,     0,
       0,     0,    23,    22,   121,    20,   140,    21,   117,   119,
     118,   141,     0,   120,   110,     0,     0,     0,     0,     0,
      55,    11,     0,    57,    19,     0,   129,     0,     0,     7,
       0,     0,    74,   139,     0,    83,   137,   138,    79,    80,
      81,    84,    82,   107,     0,   127,    86,    48,     0,   113,
     116,     0,    85,     0,     0,     0,    92,     0,   111,     0,
       0,     0,    71,    78,    51,     0,     0,    47,    44,    95,
       0,    18,     0,    16,     0,     6,     0,    47,    88,    54,
      53,    50,     0,     0,   108,     0,     0,    72,    73,     0,
     112,     0,   139,     0,     0,     0,     0,     0,   109,     0,
     124,    70,    68,     0,    77,    10,    75,     0,     0,   100,
     104,   106,   105,   101,   102,   103,     0,     0,    94,     0,
       0,     0,     4,     0,    87,    49,   114,   115,   128,     0,
       0,     0,     0,     3,    12,   123,    69,    11,    47,     0,
      63,    64,    97,    45,    96,    11,     0,     0,    15,    59,
       0,     8,    62,    66,    89,    90,    91,    76,    46,     0,
       0,     0,     0,    33,    35,     0,    32,     0,     5,     0,
       9,    98,    17,    13,     0,     0,     0,     0,   100,    14,
      34,    60,     0,    99,    37,     0,    40,     0,    38,    41,
       0,    36,    67,     0,     0,     0,    39,     0,     0,     0,
      61,    42,     0,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    35,   181,    91,   136,    50,   126,    62,    63,
     208,   179,    84,    85,    64,    42,    10,    11,   224,   225,
     246,   250,   253,   251,   254,   262,   127,   169,   168,   105,
      30,   106,    12,    21,    65,    88,   227,   244,    66,   202,
      67,   113,   229,   163,   149,    68,    13,    38,    79,   107,
      69,    14,    51,   128,   203,   220,   238,   176,    70,    71,
      72,   129,   109,    73,    74,    15,    16,    17,   110,    18,
      52,   111,   112
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -131
static const yytype_int16 yypact[] =
{
      22,     8,    54,    73,  -131,    78,    79,    42,    91,    93,
      78,   108,  -131,  -131,  -131,    78,  -131,     7,  -131,    60,
     111,    68,    60,   113,  -131,  -131,   125,  -131,  -131,   123,
     112,    42,   132,  -131,    11,   141,   141,    42,    86,    11,
    -131,  -131,    11,    88,  -131,   129,  -131,  -131,  -131,  -131,
    -131,  -131,    92,   147,  -131,    18,   107,    13,  -131,    89,
     106,   109,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,   154,  -131,   141,   -15,   155,   110,   123,   114,
    -131,   136,    58,    42,   129,   159,  -131,   157,   117,   118,
      58,   120,  -131,   -24,    99,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,    58,  -131,  -131,   138,   126,    48,
       3,    82,   127,   122,    20,   166,  -131,   172,  -131,    58,
     176,    -2,     5,    86,  -131,    58,   137,   135,  -131,   124,
     139,  -131,   169,  -131,    58,  -131,    58,   135,  -131,  -131,
    -131,  -131,   143,    99,  -131,    82,    82,  -131,  -131,    82,
      48,    58,   134,   150,   -28,    16,   142,   144,  -131,   156,
    -131,   173,  -131,    11,  -131,  -131,  -131,    58,   151,    14,
    -131,  -131,  -131,  -131,  -131,  -131,    58,    11,  -131,     0,
     152,    41,  -131,   153,  -131,  -131,  -131,  -131,  -131,   158,
     162,   163,   165,  -131,  -131,  -131,  -131,   136,   135,   185,
    -131,  -131,  -131,  -131,  -131,   136,   205,    69,  -131,  -131,
      58,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,    11,
      58,   167,   170,  -131,  -131,   -17,  -131,   186,  -131,   197,
    -131,  -131,  -131,  -131,   141,    69,   141,   141,    14,  -131,
    -131,  -131,   210,  -131,  -131,   207,    94,   171,  -131,  -131,
     216,  -131,  -131,   141,   174,   215,  -131,    58,   175,   177,
    -131,  -131,   209,   141,  -131
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,  -131,  -131,   140,  -131,  -131,  -120,  -131,  -131,
    -131,  -131,  -131,   160,  -131,  -131,  -131,    10,    -4,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,   -81,  -131,  -130,    87,
     217,  -131,  -131,   -23,  -131,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,  -131,   164,   115,   -92,
    -131,  -131,  -131,    17,     2,  -131,  -131,  -131,  -131,  -131,
     -31,   -53,   -99,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
     -36,  -131,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      75,    75,   141,    80,   108,    76,    81,   183,    40,   137,
     206,   159,   150,   234,    77,    43,   119,   200,   139,   161,
      24,     3,    27,   142,    44,    26,    93,   162,   207,   191,
      94,    95,    89,   152,   201,    45,    90,   120,   157,    75,
     147,   148,   235,   118,   165,     1,   186,   187,    96,    97,
     120,   185,   160,   180,     4,   182,    46,    47,    48,    49,
     130,    28,    98,    99,   100,   101,   102,   103,   218,   104,
     189,    93,   153,   192,    89,    94,    95,   217,    90,   154,
     155,   120,    93,   145,   146,   221,   198,    95,     5,     6,
     223,     7,    19,    96,    97,    93,   210,    20,   211,    94,
      95,     8,   248,   249,    22,     9,    23,    98,    99,   100,
     101,   102,    93,    25,   104,   226,    29,    95,    98,    99,
     100,   101,   102,   204,    31,   104,    32,   197,    34,   228,
      36,    98,    99,   100,   101,   102,    37,    39,   104,    41,
      78,   205,    83,   226,    82,   114,    86,    53,    98,    99,
     100,   101,   102,    54,    55,   104,   170,   171,   172,    56,
      87,    92,   115,   116,   117,   121,    57,   125,   122,   132,
      58,   124,   133,   134,   138,   135,   259,   143,   151,   152,
     144,    59,    60,   230,    61,   156,   173,   174,   175,   158,
     167,   166,   120,   178,    90,   196,   193,   177,   194,    75,
     184,    75,    75,   239,   219,   241,   242,   190,   199,   209,
     195,   222,   236,   237,   212,   213,   214,   215,    75,   216,
     245,   232,   256,   247,   233,   252,   255,   258,    75,   260,
     257,   240,   264,   140,   261,   263,   188,   231,   164,    33,
     243,     0,   123,     0,   131
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-131))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      35,    36,    94,    39,    57,    36,    42,   137,    31,    90,
      10,    13,   111,    30,    37,     4,    31,     3,    42,    14,
      10,    13,    15,   104,    13,    15,    13,    22,    28,    57,
      17,    18,    56,    13,    20,    24,    60,    65,   119,    74,
      37,    38,    59,    74,   125,    23,   145,   146,    35,    36,
      65,   143,    54,   134,     0,   136,    45,    46,    47,    48,
      83,    54,    49,    50,    51,    52,    53,    54,   198,    56,
     151,    13,    52,    57,    56,    17,    18,   197,    60,   114,
     115,    65,    13,    35,    36,   205,   167,    18,    15,    11,
      21,    13,    13,    35,    36,    13,    55,    55,    57,    17,
      18,    23,     8,     9,    13,    27,    13,    49,    50,    51,
      52,    53,    13,     5,    56,   207,    56,    18,    49,    50,
      51,    52,    53,   176,    13,    56,    58,   163,    15,   210,
       5,    49,    50,    51,    52,    53,    13,    25,    56,     7,
      54,   177,    13,   235,    56,    56,    54,     6,    49,    50,
      51,    52,    53,    12,    13,    56,    32,    33,    34,    18,
      13,    54,    56,    54,    10,    10,    25,    31,    58,    10,
      29,    57,    15,    56,    54,    57,   257,    39,    56,    13,
      54,    40,    41,   219,    43,    13,    62,    63,    64,    13,
      55,    54,    65,    24,    60,    22,    54,    58,    54,   234,
      57,   236,   237,   234,    19,   236,   237,    57,    57,    57,
      54,     6,    26,    16,    61,    57,    54,    54,   253,    54,
      10,    54,   253,    16,    54,    54,    10,    12,   263,    54,
      56,   235,   263,    93,    57,    26,   149,   220,   123,    22,
     238,    -1,    78,    -1,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    67,    13,     0,    15,    11,    13,    23,    27,
      82,    83,    98,   112,   117,   131,   132,   133,   135,    13,
      55,    99,    13,    13,    83,     5,    83,    15,    54,    56,
      96,    13,    58,    96,    15,    68,     5,    13,   113,    25,
      99,     7,    81,     4,    13,    24,    45,    46,    47,    48,
      72,   118,   136,     6,    12,    13,    18,    25,    29,    40,
      41,    43,    74,    75,    80,   100,   104,   106,   111,   116,
     124,   125,   126,   129,   130,   138,   126,    99,    54,   114,
     136,   136,    56,    13,    78,    79,    54,    13,   101,    56,
      60,    70,    54,    13,    17,    18,    35,    36,    49,    50,
      51,    52,    53,    54,    56,    95,    97,   115,   127,   128,
     134,   137,   138,   107,    56,    56,    54,    10,   126,    31,
      65,    10,    58,   113,    57,    31,    73,    92,   119,   127,
      99,    79,    10,    15,    56,    57,    71,    92,    54,    42,
      70,   115,    92,    39,    54,    35,    36,    37,    38,   110,
     128,    56,    13,    52,   138,   138,    13,    92,    13,    13,
      54,    14,    22,   109,   114,    92,    54,    55,    94,    93,
      32,    33,    34,    62,    63,    64,   123,    58,    24,    77,
      92,    69,    92,    94,    57,   115,   128,   128,    95,    92,
      57,    57,    57,    54,    54,    54,    22,   136,    92,    57,
       3,    20,   105,   120,   127,   136,    10,    28,    76,    57,
      55,    57,    61,    57,    54,    54,    54,    73,    94,    19,
     121,    73,     6,    21,    84,    85,   115,   102,    92,   108,
     136,   119,    54,    54,    30,    59,    26,    16,   122,   126,
      84,   126,   126,   120,   103,    10,    86,    16,     8,     9,
      87,    89,    54,    88,    90,    10,   126,    56,    12,    92,
      54,    57,    91,    26,   126
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
        case 2:

/* Line 1806 of yacc.c  */
#line 177 "syntacticAnalyzer.y"
    { 
			fprintf( yyout, "CODE(%d)\nL 0:\n", Q.nextCodeNumber++ ); 
			Q.stat = 1;
		}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 187 "syntacticAnalyzer.y"
    {
			auxRegister = createRegister(	(yyvsp[(1) - (1)].regStruct)->key.id, (yyvsp[(1) - (1)].regStruct)->key.scope, 
																		(yyvsp[(1) - (1)].regStruct)->typeSymbol, (yyvsp[(1) - (1)].regStruct)->typeVariable);

			errorCode=addRegisterToList( &auxRegisterList, auxRegister );
			
			if(errorCode){
				yyerror("Error adding actual parameters! ");
			}

			//$$ = auxRegisterList;
		}
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 200 "syntacticAnalyzer.y"
    {
			auxRegister = createRegister(	(yyvsp[(3) - (3)].regStruct)->key.id, (yyvsp[(3) - (3)].regStruct)->key.scope, 
																		(yyvsp[(3) - (3)].regStruct)->typeSymbol, (yyvsp[(3) - (3)].regStruct)->typeVariable);

			errorCode=addRegisterToList( &auxRegisterList, auxRegister );
			if(errorCode){
				yyerror("Error adding actual parameters! ");
			}

			//addRegisterToList( &auxRegisterList, $3 );
			//$$ = auxRegisterList;
		}
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 235 "syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 237 "syntacticAnalyzer.y"
    {auxRegisterList = NULL;}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 237 "syntacticAnalyzer.y"
    { (yyval.regStruct) = auxRegisterList;  }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 254 "syntacticAnalyzer.y"
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

		generateCodeAssignment( yyout, &Q, (yyvsp[(1) - (4)].regStruct), (yyvsp[(3) - (4)].regStruct) );
	}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 345 "syntacticAnalyzer.y"
    {
		// Get register of the identifier
		auxRegister = getSymbol(&sT, (yyvsp[(2) - (7)].string), sT.currentScope);
		errorCode = checkIfNumeric(errorString, auxRegister, 5);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}
		nOthers = 0;
	}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 361 "syntacticAnalyzer.y"
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
	}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 387 "syntacticAnalyzer.y"
    {
		auxRegister = createRegister( (yyvsp[(1) - (6)].string), sT.currentScope,  Field, (yyvsp[(4) - (6)].typeVariable) ); 
	  addRegisterToList( &auxRegisterList, auxRegister );
	}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 417 "syntacticAnalyzer.y"
    { /*destroyRegister( $1 );*/ }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 419 "syntacticAnalyzer.y"
    { markSubprogramAsDefined( (yyvsp[(1) - (1)].regStruct) );
		//destroyRegister( $1 ); 
	  }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 441 "syntacticAnalyzer.y"
    {			
			errorCode = checkIfDiscreteChoice(errorString, (yyvsp[(1) - (1)].regStruct));
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		}
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 449 "syntacticAnalyzer.y"
    {
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 462 "syntacticAnalyzer.y"
    {
			errorCode = checkIfOthers(errorString, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct));
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 470 "syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);
		}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 484 "syntacticAnalyzer.y"
    { fprintf(yyout,"\t//////////////////////////////////\n");
			fprintf(yyout,"\t// Open else block \n");

	  }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 494 "syntacticAnalyzer.y"
    { fprintf(yyout,"\t//////////////////////////////////\n");
  				fprintf(yyout,"\t// Open elsif block \n");
					(yyval.integer)=Q.nextLabel++;
				 }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 499 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (5)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			generateCodeEvaluateIf( yyout, &Q, (yyvsp[(2) - (5)].integer) ); 
		}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 509 "syntacticAnalyzer.y"
    { generateCodeNextIf( yyout, &Q, (yyvsp[(2) - (8)].integer) ); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 514 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 514 "syntacticAnalyzer.y"
    {

		if((yyvsp[(3) - (3)].regStruct)->typeVariable == Void ){ // There's no list
			(yyval.regStruct) = (yyvsp[(1) - (3)].regStruct);
			destroyRegister((yyvsp[(3) - (3)].regStruct));
		}else {
			(yyval.regStruct) = (yyvsp[(3) - (3)].regStruct);
		}
	}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 527 "syntacticAnalyzer.y"
    {
		addRegisterToList( &auxRegisterList, (yyvsp[(2) - (3)].regStruct) );
		(yyval.regStruct) = auxRegisterList;
	}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 532 "syntacticAnalyzer.y"
    {
		(yyval.regStruct) = NULL;
	}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 539 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 540 "syntacticAnalyzer.y"
    { yyerror("Incomplete factor"); (yyval.regStruct) = (yyvsp[(1) - (3)].regStruct); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 541 "syntacticAnalyzer.y"
    { yyerror("Incomplete factor"); (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 547 "syntacticAnalyzer.y"
    { 
		(yyval.regStruct) = auxRegisterList; 
	}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 550 "syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 562 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(2) - (5)].string), sT.currentScope,  Function, (yyvsp[(5) - (5)].typeVariable) ); 
	  addRegister( &sT, auxRegister );
	  (yyval.regStruct) = auxRegister; 
	}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 577 "syntacticAnalyzer.y"
    {  fprintf(yyout,"\t//////////////////////////////////\n");
  			fprintf(yyout,"\t// Open if block \n");
				(yyval.integer)=Q.nextLabel++; 
			}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 582 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (5)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			generateCodeEvaluateIf( yyout, &Q, (yyvsp[(2) - (5)].integer) ); 
		}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 592 "syntacticAnalyzer.y"
    { generateCodeNextIf( yyout, &Q, (yyvsp[(2) - (8)].integer) ); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 605 "syntacticAnalyzer.y"
    { (yyval.op) = '*'; }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 606 "syntacticAnalyzer.y"
    { (yyval.op) = '+'; }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 611 "syntacticAnalyzer.y"
    { (yyval.integer)=generateCodeOpenWhile( yyout, &Q ); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 612 "syntacticAnalyzer.y"
    { generateCodeEvaluateWhile( yyout, &Q, (yyvsp[(2) - (5)].integer) ); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 616 "syntacticAnalyzer.y"
    {
		errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (11)].regStruct), 4);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}

	  generateCodeCloseWhile( yyout, &Q, (yyvsp[(2) - (11)].integer) );
	}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 629 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = Out; }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 630 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = InOut; }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 631 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 632 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 637 "syntacticAnalyzer.y"
    { (yyval.op)='*'; }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 638 "syntacticAnalyzer.y"
    { (yyval.op)='/'; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 649 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(1) - (7)].string), sT.currentScope,  Variable, (yyvsp[(5) - (7)].typeVariable) ); 
	  errorCode = addRegister( &sT, auxRegister ); 
	  if(errorCode){
			yyerror();
			YYABORT;
		} 

		errorCode = getVarStaticAddress( &Q, auxRegister );
		if( errorCode == -1 ){
			yyerror("Symbol created is not a variable");
			YYABORT;
		}
		if( errorCode == -2){
			yyerror("Case for object_declaration not implemented yet");
			YYABORT;
		}

		errorCode = generateCodeVarStatic( yyout, &Q, auxRegister, "0" );
		if( errorCode == -1 ){
			yyerror("Symbol created is not a variable");
			YYABORT;
		}
	}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 678 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(1) - (6)].string), sT.currentScope,  (yyvsp[(4) - (6)].typeSymbol), (yyvsp[(5) - (6)].typeVariable) ); 
	  addRegisterToList( &auxRegisterList, auxRegister ); 
	}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 692 "syntacticAnalyzer.y"
    { generateAnonymousId();

										auxRegister = createRegister( anonymousIdString, 
																									sT.currentScope, Literal, 
																									Integer
																								);

										getVarStaticAddress(  &Q, auxRegister );
										generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

										(yyval.regStruct) = auxRegister;
									}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 704 "syntacticAnalyzer.y"
    { generateAnonymousId();

												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Real
																										);	

												getVarStaticAddress(  &Q, auxRegister );
												generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

												(yyval.regStruct) = auxRegister;
											}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 716 "syntacticAnalyzer.y"
    { auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Character
																										);	

												getVarStaticAddress(  &Q, auxRegister );
												generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

												(yyval.regStruct) = auxRegister;
											}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 726 "syntacticAnalyzer.y"
    { generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Bool
																										);

												getVarStaticAddress(  &Q, auxRegister );
												generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

												(yyval.regStruct) = auxRegister;
											}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 737 "syntacticAnalyzer.y"
    {	
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Void
																										);	
												(yyval.regStruct) = auxRegister;	
											}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 744 "syntacticAnalyzer.y"
    { generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											String
																										);	
												(yyval.regStruct) = auxRegister;
											}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 751 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 752 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 753 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(2) - (3)].regStruct);	}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 759 "syntacticAnalyzer.y"
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
	}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 784 "syntacticAnalyzer.y"
    {
			// Generate code
			generateCodePutStringLiteral( yyout, &Q, (yyvsp[(3) - (5)].string) );
		}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 789 "syntacticAnalyzer.y"
    { 
			errorCode = checkPutGet( errorString, (yyvsp[(3) - (5)].regStruct) );
		  if ( errorCode!=0 ){
		  	yyerror("Incorrect 'Put' parameter: %s", errorString);
		  	YYABORT;
			} 

			// Generate code
			generateCodePutVariable( yyout, &Q, (yyvsp[(3) - (5)].regStruct) );
		}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 800 "syntacticAnalyzer.y"
    { 
			errorCode = checkPutGet( errorString, (yyvsp[(3) - (5)].regStruct) );
		  if ( errorCode!=0 ){
		  	yyerror("Incorrect 'Get' parameter: %s", errorString);
		  	YYABORT;
			} 
			
			// Generate code
			generateCodeGetVariable( yyout, &Q, (yyvsp[(3) - (5)].regStruct) );
		}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 811 "syntacticAnalyzer.y"
    {
			generateCodeNewLine( yyout, &Q );
		}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 819 "syntacticAnalyzer.y"
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
	}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 862 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 864 "syntacticAnalyzer.y"
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
			generateCodeRelation( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), (yyvsp[(2) - (3)].string) );

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Bool
																	);	
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 892 "syntacticAnalyzer.y"
    { fprintf(yyout,"\tR1=R0;\t\t\t//Saving R0 for relation call\n");; }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 894 "syntacticAnalyzer.y"
    { 
			(yyval.regStruct) = (yyvsp[(3) - (3)].regStruct); 

			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}

			/* Generate code for relation */
			// R1 has the evaluation of the previous expression
			generateCodeLogical( yyout, &Q, (yyvsp[(1) - (3)].op) );
		}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 908 "syntacticAnalyzer.y"
    {

		generateAnonymousId();
		auxRegister = createRegister( anonymousIdString, 
																	sT.currentScope, Auxiliar, 
																	getFactorVariableType((yyvsp[(-1) - (5)].regStruct), (yyvsp[(3) - (5)].regStruct))
																);	
		if((yyvsp[(3) - (5)].regStruct)->typeSymbol==Auxiliar)destroyRegister((yyvsp[(3) - (5)].regStruct));
		(yyval.regStruct) = auxRegister;
	}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 919 "syntacticAnalyzer.y"
    {
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			(yyval.regStruct) = auxRegister; 
		}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 931 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "==");  }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 932 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "<");  }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 933 "syntacticAnalyzer.y"
    { strcpy((yyval.string), ">");  }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 934 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "!="); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 935 "syntacticAnalyzer.y"
    { strcpy((yyval.string), (yyvsp[(1) - (1)].string)); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 936 "syntacticAnalyzer.y"
    { strcpy((yyval.string), (yyvsp[(1) - (1)].string)); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 961 "syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(2) - (2)].regStruct);
		}
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 965 "syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);
		}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 972 "syntacticAnalyzer.y"
    {
			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			// Generate code for addition 
			generateCodeAddition( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), '+' );

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct))
																	);	
			if((yyvsp[(1) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(1) - (3)].regStruct));
			if((yyvsp[(3) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(3) - (3)].regStruct));
			
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 997 "syntacticAnalyzer.y"
    {
			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 1);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			// Generate code for addition 
			generateCodeAddition( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), '-' );

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct))
																	);	
			if((yyvsp[(1) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(1) - (3)].regStruct));
			if((yyvsp[(3) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(3) - (3)].regStruct));
			
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 1022 "syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);
		}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 1108 "syntacticAnalyzer.y"
    {
		enterScope ( &sT );

		errorCode = addParametersToSymbolsTable(&sT, (yyvsp[(1) - (2)].regStruct));
		if ( errorCode!=0 ){
	  	yyerror("Error adding parameters of subprogram %s", (yyvsp[(1) - (2)].regStruct)->key.id);
	  	YYABORT;
		}

		(yyval.regStruct) = (yyvsp[(1) - (2)].regStruct);
	}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 1127 "syntacticAnalyzer.y"
    { exitScope ( &sT ); (yyval.regStruct) = (yyvsp[(1) - (7)].regStruct); }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 1132 "syntacticAnalyzer.y"
    { exitScope ( &sT ); (yyval.regStruct) = (yyvsp[(1) - (6)].regStruct); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 1137 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 1138 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 1143 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1145 "syntacticAnalyzer.y"
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

  		generateCodeMultiply( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), (yyvsp[(2) - (3)].op) );

			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		getFactorVariableType((yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct))
																	);	
			if((yyvsp[(1) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(1) - (3)].regStruct));
			if((yyvsp[(3) - (3)].regStruct)->typeSymbol==Auxiliar) destroyRegister((yyvsp[(3) - (3)].regStruct));

			(yyval.regStruct) = auxRegister;
		}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 1185 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Integer; }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1186 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Real; }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1187 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Character; }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1188 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Bool; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1189 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = ArrayVariable; }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 1190 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Record; }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 1192 "syntacticAnalyzer.y"
    { 
			auxRegister = getSymbol(&sT, (yyvsp[(1) - (1)].string), sT.currentScope);

		 	/* check if type really exists */
			if(auxRegister == NULL){
				sprintf(errorString, "Type '%s' not found in symbols table", (yyvsp[(1) - (1)].string));
				yyerror(errorString);
				YYABORT; // Serious compiler error
			}

			(yyval.typeVariable) = CustomType; 
		}
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1213 "syntacticAnalyzer.y"
    { auxRegister = getSymbol(&sT, (yyvsp[(1) - (1)].string), sT.currentScope);
							 /* check if variable really exists */
							if(auxRegister == NULL){
								sprintf(errorString, "Variable '%s' not found in symbols table", (yyvsp[(1) - (1)].string));
								yyerror(errorString);
								YYABORT; // Serious compiler error
							}
							(yyval.regStruct) = auxRegister; }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 1221 "syntacticAnalyzer.y"
    { yyerror("Incomplete! -> indexed_component in variable"); YYABORT; (yyval.regStruct) = NULL; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 1222 "syntacticAnalyzer.y"
    { yyerror("Incomplete! -> selected_component in variable"); YYABORT; (yyval.regStruct) = NULL; }
    break;



/* Line 1806 of yacc.c  */
#line 2849 "compiler.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 1225 "syntacticAnalyzer.y"


//Codigo C adicional

void generateAnonymousId(){
  sprintf(anonymousIdString, "%d", anonymousId++);
}

int main(int argc, char** argv){
	errorCompiling = 0;

	auxRegisterList = NULL;
	nOthers = 0; // Counter for case
	//nRegisters = 0;
	stackScope = 1;

	printf("-- Initializing symbols table\n\n");
    
  symbolsTableInit( &sT );
  qMachineInit( &Q );

	if (argc>1){
		yyin=fopen(argv[1], "r");

		//Out file
		memcpy( anonymousIdString, argv[1], strlen(argv[1])-4);
		sprintf( anonymousIdString, "%s.q.c", anonymousIdString );
		yyout=fopen(anonymousIdString, "w");

		generateCodeStart( yyout, &Q );

		printf("-- Starting parsing.\n");

		yyparse();

		printf("-- Parsing finished.\n\n");

		generateCodeEnd( yyout );

		fclose(yyin);
		fclose(yyout);
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

	errorCompiling = 1;
	//sprintf(errorString,"");
	return 0;
}

