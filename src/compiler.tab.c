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
#define YYLAST   256

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNRULES -- Number of states.  */
#define YYNSTATES  271

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
       0,     0,     3,     4,    15,    17,    21,    24,    25,    30,
      38,    41,    42,    47,    50,    51,    56,    58,    60,    61,
      70,    75,    78,    79,    86,    89,    91,    93,    95,    97,
      99,   101,   102,   104,   106,   109,   111,   114,   115,   117,
     119,   123,   125,   128,   129,   130,   134,   135,   136,   137,
     146,   147,   151,   155,   156,   158,   162,   165,   170,   171,
     174,   177,   183,   187,   188,   189,   190,   191,   206,   212,
     214,   216,   217,   218,   230,   232,   235,   237,   238,   240,
     242,   245,   253,   260,   264,   265,   267,   269,   271,   273,
     275,   277,   279,   281,   285,   289,   295,   301,   307,   310,
     314,   319,   321,   325,   326,   327,   333,   334,   336,   338,
     340,   342,   344,   346,   349,   353,   357,   359,   362,   363,
     368,   371,   372,   376,   378,   380,   382,   384,   386,   388,
     391,   399,   406,   408,   410,   412,   416,   422,   424,   426,
     428,   430,   432,   434,   436,   438,   440,   442,   444
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      67,     0,    -1,    -1,    23,    13,    15,    87,     5,    68,
     130,    10,    13,    53,    -1,    96,    -1,    69,    54,    96,
      -1,    55,    56,    -1,    -1,    55,    71,    69,    56,    -1,
       4,    55,    96,    98,    56,    19,   141,    -1,    31,    96,
      -1,    -1,   143,    31,    96,    53,    -1,    77,   139,    -1,
      -1,    77,   139,    76,    75,    -1,    35,    -1,    36,    -1,
      -1,     6,    13,    79,    15,    81,    10,     6,    53,    -1,
      28,    89,    30,   130,    -1,    81,    80,    -1,    -1,    13,
     103,    57,   141,    73,    53,    -1,    82,    83,    -1,    82,
      -1,   104,    -1,   110,    -1,    78,    -1,    74,    -1,     7,
      -1,    -1,   140,    -1,   116,    -1,   138,    53,    -1,   137,
      -1,    86,    87,    -1,    -1,   119,    -1,    21,    -1,    89,
      58,    88,    -1,    88,    -1,    90,    93,    -1,    -1,    -1,
       8,    92,   130,    -1,    -1,    -1,    -1,     9,    94,    55,
      96,    56,    95,    26,   130,    -1,    -1,   123,    97,   124,
      -1,    54,    96,    98,    -1,    -1,   119,    -1,   119,    38,
     119,    -1,    17,   119,    -1,    55,   117,   118,    56,    -1,
      -1,    13,    70,    -1,    13,    41,    -1,    11,    13,   100,
      25,   141,    -1,    54,    13,   103,    -1,    -1,    -1,    -1,
      -1,    12,   105,    55,    96,    56,   106,    26,   130,   107,
      90,    91,    10,    12,    53,    -1,    13,    59,    96,    98,
      60,    -1,     3,    -1,    20,    -1,    -1,    -1,    29,   111,
      55,    96,    56,   112,    16,   130,    10,    16,    53,    -1,
      22,    -1,    14,    22,    -1,    14,    -1,    -1,    37,    -1,
      61,    -1,    18,    53,    -1,    13,   103,    57,    85,   141,
      73,    53,    -1,    13,   103,    57,   113,   141,    73,    -1,
      53,   117,   118,    -1,    -1,    48,    -1,    49,    -1,    50,
      -1,    52,    -1,    18,    -1,    51,    -1,   143,    -1,   101,
      -1,    55,    96,    56,    -1,    13,    70,    53,    -1,    39,
      55,    51,    56,    53,    -1,    39,    55,   143,    56,    53,
      -1,    40,    55,   143,    56,    53,    -1,    42,    53,    -1,
      23,    13,   100,    -1,    24,    83,    10,    24,    -1,   131,
      -1,   131,   127,   131,    -1,    -1,    -1,   109,   125,   123,
     126,   124,    -1,    -1,    62,    -1,    63,    -1,    64,    -1,
      32,    -1,    34,    -1,    33,    -1,    25,    53,    -1,    25,
     131,    53,    -1,   143,    65,    13,    -1,   135,    -1,   135,
     130,    -1,    -1,   142,   139,   132,    75,    -1,   142,   139,
      -1,    -1,   139,   133,    75,    -1,   139,    -1,   115,    -1,
     128,    -1,   120,    -1,   134,    -1,    84,    -1,   138,    15,
      -1,   136,    87,     5,   130,    10,    13,    53,    -1,   136,
      87,     5,   130,    10,    53,    -1,   121,    -1,   102,    -1,
      99,    -1,   139,   114,    99,    -1,    27,    13,    15,   141,
      53,    -1,    44,    -1,    45,    -1,    46,    -1,    47,    -1,
      72,    -1,   122,    -1,    13,    -1,    35,    -1,    36,    -1,
      13,    -1,   108,    -1,   129,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   176,   176,   172,   185,   198,   234,   236,   236,   241,
     246,   247,   252,   287,   304,   304,   328,   329,   335,   334,
     358,   379,   380,   385,   394,   395,   400,   401,   402,   403,
     408,   409,   414,   415,   416,   417,   434,   435,   439,   447,
     460,   468,   476,   477,   483,   482,   488,   493,   498,   493,
     513,   513,   525,   531,   538,   539,   540,   545,   549,   554,
     555,   560,   570,   571,   576,   581,   591,   576,   599,   604,
     605,   610,   611,   610,   628,   629,   630,   631,   636,   637,
     642,   647,   676,   685,   686,   691,   703,   715,   725,   736,
     743,   750,   751,   752,   757,   782,   787,   798,   809,   817,
     854,   861,   862,   891,   893,   890,   918,   930,   931,   932,
     933,   934,   935,   940,   941,   946,   953,   954,   959,   959,
     978,   998,   998,  1019,  1024,  1025,  1026,  1031,  1032,  1037,
    1053,  1058,  1067,  1068,  1073,  1074,  1108,  1113,  1114,  1115,
    1116,  1117,  1118,  1119,  1136,  1137,  1141,  1149,  1150
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
  "main", "$@1", "actual_parameter_list", "actual_parameter_part", "$@2",
  "array_type_definition", "assign_expression", "assignment_statement",
  "binary_adding_list", "@3", "binary_adding_operator", "case_statement",
  "$@4", "case_statement_alternative", "case_statement_alternative_list",
  "component_item", "component_list", "compound_statement", "constant",
  "declarative_item", "declarative_part", "discrete_choice",
  "discrete_choice_list", "elsif_list", "else_statement", "$@5",
  "elsif_statement", "@6", "$@7", "expression", "@8", "expression_list",
  "factor", "formal_part", "function_call", "function_specification",
  "identifier_list", "if_statement", "@9", "$@10", "$@11",
  "indexed_component", "logical_operator", "loop_statement", "@12", "$@13",
  "mode", "multiplying_operator", "null_statement", "object_declaration",
  "parameter_specification", "parameter_specification_list", "primary",
  "procedure_call_statement", "procedure_specification",
  "record_type_definition", "relation", "relation_list", "$@14", "@15",
  "relational_operator", "return_statement", "selected_component",
  "sequence_of_statements", "simple_expression", "@16", "@17",
  "simple_statement", "statement", "subprogram_body_", "subprogram_body",
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
     285,   286,   287,   288,   289,    43,    45,    42,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,    59,    44,    40,    41,    58,   124,    91,
      93,    47,    61,    60,    62,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    68,    67,    69,    69,    70,    71,    70,    72,
      73,    73,    74,    75,    76,    75,    77,    77,    79,    78,
      80,    81,    81,    82,    83,    83,    84,    84,    84,    84,
      85,    85,    86,    86,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    92,    91,    91,    94,    95,    93,
      97,    96,    98,    98,    99,    99,    99,   100,   100,   101,
     101,   102,   103,   103,   105,   106,   107,   104,   108,   109,
     109,   111,   112,   110,   113,   113,   113,   113,   114,   114,
     115,   116,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   120,   120,   120,   120,   120,   121,
     122,   123,   123,   125,   126,   124,   124,   127,   127,   127,
     127,   127,   127,   128,   128,   129,   130,   130,   132,   131,
     131,   133,   131,   131,   134,   134,   134,   135,   135,   136,
     137,   137,   138,   138,   139,   139,   140,   141,   141,   141,
     141,   141,   141,   141,   142,   142,   143,   143,   143
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,    10,     1,     3,     2,     0,     4,     7,
       2,     0,     4,     2,     0,     4,     1,     1,     0,     8,
       4,     2,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     2,     1,     2,     0,     1,     1,
       3,     1,     2,     0,     0,     3,     0,     0,     0,     8,
       0,     3,     3,     0,     1,     3,     2,     4,     0,     2,
       2,     5,     3,     0,     0,     0,     0,    14,     5,     1,
       1,     0,     0,    11,     1,     2,     1,     0,     1,     1,
       2,     7,     6,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     5,     5,     5,     2,     3,
       4,     1,     3,     0,     0,     5,     0,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     2,     0,     4,
       2,     0,     3,     1,     1,     1,     1,     1,     1,     2,
       7,     6,     1,     1,     1,     3,     5,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    37,     0,    63,     0,     0,
      37,     0,   133,    33,   132,    37,    35,     0,    32,    58,
       0,     0,    58,     0,    36,     2,     0,   129,    34,     0,
       0,    63,    31,    99,     0,     0,     0,    63,    84,     0,
      62,    30,     0,     0,   143,     0,   137,   138,   139,   140,
     141,   142,     0,     0,    64,   146,     0,     0,    71,     0,
       0,     0,    29,    28,   128,    26,   147,    27,   124,   126,
     125,   148,     0,   127,   116,     0,     0,     0,     0,     0,
      61,    11,     0,    63,    25,     0,   136,    18,     0,     7,
       0,     0,    80,   146,     0,    89,   144,   145,    85,    86,
      87,    90,    88,   113,     0,   134,    92,    54,     0,   123,
       0,    91,     0,     0,     0,    98,     0,   117,     0,     0,
       0,    77,    84,    57,     0,     0,    53,    50,   101,     0,
      24,     0,     0,     0,     6,     0,    53,    94,    60,    59,
      56,     0,     0,   114,    78,    79,     0,     0,   120,     0,
     146,     0,     0,     0,     0,     0,   115,     0,   131,    76,
      74,     0,    83,    10,    81,     0,     0,   106,   110,   112,
     111,   107,   108,   109,     0,     0,   100,    22,     0,     0,
       4,     0,    93,    55,   135,    16,    17,   122,     0,     0,
       0,     0,     0,     0,     3,    12,   130,    75,    11,    53,
       0,    69,    70,   103,    51,   102,    11,     0,    65,     0,
       8,    68,    13,   119,    72,    95,    96,    97,    82,    52,
       0,     0,     0,     0,     0,    21,     0,     5,     0,     0,
       9,   104,    23,     0,    39,    41,     0,    38,     0,    15,
       0,   106,    19,     0,     0,    66,     0,   105,    20,    40,
      43,     0,    46,     0,    44,    47,     0,    42,    73,     0,
       0,     0,    45,     0,     0,     0,    67,    48,     0,     0,
      49
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    35,   179,    91,   135,    50,   125,    62,   187,
     228,   188,    63,   132,   225,   207,    84,    85,    64,    42,
      10,    11,   235,   236,   252,   256,   259,   257,   260,   268,
     126,   167,   166,   105,    30,   106,    12,    21,    65,    88,
     226,   250,    66,   203,    67,   112,   229,   161,   146,    68,
      13,    38,    79,   107,    69,    14,    51,   127,   204,   221,
     241,   174,    70,    71,    72,   128,   189,   147,    73,    74,
      15,    16,    17,   109,    18,    52,   110,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -175
static const yytype_int16 yypact[] =
{
      -5,    23,    67,    56,  -175,   159,    68,    36,    78,    86,
     159,   105,  -175,  -175,  -175,   159,  -175,    11,  -175,    69,
     100,    60,    69,   107,  -175,  -175,   118,  -175,  -175,   119,
     108,    36,   129,  -175,    10,   150,   150,    36,    84,    10,
    -175,  -175,    10,    83,  -175,   127,  -175,  -175,  -175,  -175,
    -175,  -175,    94,   133,  -175,    53,    96,    52,  -175,   103,
     112,   116,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,   161,  -175,   150,   -19,   163,   117,   119,   120,
    -175,   146,    25,    36,   127,   168,  -175,  -175,   126,   131,
      25,   130,  -175,   -28,   102,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,    25,  -175,  -175,   153,   135,    48,
      79,   128,   142,    12,   185,  -175,   186,  -175,    25,   187,
      -2,     8,    84,  -175,    25,   148,   156,  -175,   132,   145,
    -175,   183,   196,    25,  -175,    25,   156,  -175,  -175,  -175,
    -175,   157,   102,  -175,  -175,  -175,    79,    -7,    58,    25,
     155,   160,     3,    33,   162,   164,  -175,   165,  -175,   190,
    -175,    10,  -175,  -175,  -175,    25,   166,    17,  -175,  -175,
    -175,  -175,  -175,  -175,    25,    10,  -175,  -175,   167,    62,
    -175,   169,  -175,  -175,  -175,  -175,  -175,  -175,    79,    -7,
     170,   174,   175,   177,  -175,  -175,  -175,  -175,   146,   156,
     200,  -175,  -175,  -175,  -175,  -175,   146,     5,  -175,    25,
    -175,  -175,   124,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
      10,    25,   178,   214,    93,  -175,   195,  -175,    -7,   216,
    -175,  -175,  -175,   180,  -175,  -175,   -13,  -175,   150,  -175,
     150,    17,  -175,   150,    93,  -175,   226,  -175,  -175,  -175,
    -175,   221,    39,   188,  -175,  -175,   228,  -175,  -175,   150,
     184,   230,  -175,    25,   191,   189,  -175,  -175,   217,   150,
    -175
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,  -175,  -175,  -175,   147,  -175,  -175,  -174,  -175,  -170,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,   171,  -175,  -175,
    -175,    34,     2,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
     -83,  -175,  -127,   101,   227,  -175,  -175,   -21,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,   172,   134,   -89,  -175,  -175,  -175,    27,    13,  -175,
    -175,  -175,  -175,  -175,   -34,   -53,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -102,  -175,   -36,  -175,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -122
static const yytype_int16 yytable[] =
{
      75,    75,    76,    80,   108,   140,    81,   136,   148,   181,
      40,   157,   118,   138,    43,   223,    77,   243,     1,   213,
     201,   141,   159,    44,   218,   150,    27,    89,   185,   186,
     160,    90,   222,   224,    45,   155,     3,   202,    93,    75,
     117,   163,    94,    95,    24,   244,   119,   254,   255,    26,
     178,   158,   180,   183,    46,    47,    48,    49,   239,   192,
      96,    97,   129,   151,    28,    93,   190,     4,   119,    94,
      95,     5,   219,    98,    99,   100,   101,   102,   152,   153,
     104,    19,   199,  -121,  -121,   144,   212,    96,    97,   193,
      20,    22,    93,  -118,  -118,   144,    94,    95,   119,    23,
      98,    99,   100,   101,   102,   103,    93,   104,    89,   145,
      25,    95,    90,    31,   234,    93,   209,    32,   210,   145,
      95,   205,    34,    36,    29,   198,   227,    98,    99,   100,
     101,   102,    37,    39,   104,   237,    41,    78,    82,   206,
      83,    98,    99,   100,   101,   102,    87,    86,   104,    92,
      98,    99,   100,   101,   102,   237,    53,   104,   113,   -14,
     -14,   144,    54,    55,   168,   169,   170,   114,    56,   115,
       6,   116,     7,   120,   121,    57,   123,   124,   131,    58,
     265,   133,     8,   137,   230,   145,     9,   134,   143,    59,
      60,   142,    61,   119,   171,   172,   173,   149,   150,   154,
     156,   164,   175,    75,   245,    75,   246,   176,    75,   248,
     165,   177,   197,   182,    90,   194,   191,   195,   196,   220,
     233,   238,   200,   208,    75,   262,   214,   215,   216,   211,
     217,   232,   240,   242,    75,   270,   251,   253,   261,   263,
     139,   258,   264,   269,   266,   267,   249,   184,   231,    33,
     122,     0,     0,     0,   247,   130,   162
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-175))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      35,    36,    36,    39,    57,    94,    42,    90,   110,   136,
      31,    13,    31,    41,     4,    10,    37,    30,    23,   189,
       3,   104,    14,    13,   198,    13,    15,    55,    35,    36,
      22,    59,   206,    28,    24,   118,    13,    20,    13,    74,
      74,   124,    17,    18,    10,    58,    65,     8,     9,    15,
     133,    53,   135,   142,    44,    45,    46,    47,   228,    56,
      35,    36,    83,    51,    53,    13,   149,     0,    65,    17,
      18,    15,   199,    48,    49,    50,    51,    52,   113,   114,
      55,    13,   165,    35,    36,    37,   188,    35,    36,    56,
      54,    13,    13,    35,    36,    37,    17,    18,    65,    13,
      48,    49,    50,    51,    52,    53,    13,    55,    55,    61,
       5,    18,    59,    13,    21,    13,    54,    57,    56,    61,
      18,   174,    15,     5,    55,   161,   209,    48,    49,    50,
      51,    52,    13,    25,    55,   224,     7,    53,    55,   175,
      13,    48,    49,    50,    51,    52,    13,    53,    55,    53,
      48,    49,    50,    51,    52,   244,     6,    55,    55,    35,
      36,    37,    12,    13,    32,    33,    34,    55,    18,    53,
      11,    10,    13,    10,    57,    25,    56,    31,    10,    29,
     263,    55,    23,    53,   220,    61,    27,    56,    53,    39,
      40,    38,    42,    65,    62,    63,    64,    55,    13,    13,
      13,    53,    57,   238,   238,   240,   240,    24,   243,   243,
      54,    15,    22,    56,    59,    53,    56,    53,    53,    19,
       6,    26,    56,    56,   259,   259,    56,    53,    53,    60,
      53,    53,    16,    53,   269,   269,    10,    16,    10,    55,
      93,    53,    12,    26,    53,    56,   244,   146,   221,    22,
      78,    -1,    -1,    -1,   241,    84,   122
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    67,    13,     0,    15,    11,    13,    23,    27,
      86,    87,   102,   116,   121,   136,   137,   138,   140,    13,
      54,   103,    13,    13,    87,     5,    87,    15,    53,    55,
     100,    13,    57,   100,    15,    68,     5,    13,   117,    25,
     103,     7,    85,     4,    13,    24,    44,    45,    46,    47,
      72,   122,   141,     6,    12,    13,    18,    25,    29,    39,
      40,    42,    74,    78,    84,   104,   108,   110,   115,   120,
     128,   129,   130,   134,   135,   143,   130,   103,    53,   118,
     141,   141,    55,    13,    82,    83,    53,    13,   105,    55,
      59,    70,    53,    13,    17,    18,    35,    36,    48,    49,
      50,    51,    52,    53,    55,    99,   101,   119,   131,   139,
     142,   143,   111,    55,    55,    53,    10,   130,    31,    65,
      10,    57,   117,    56,    31,    73,    96,   123,   131,   103,
      83,    10,    79,    55,    56,    71,    96,    53,    41,    70,
     119,    96,    38,    53,    37,    61,   114,   133,   139,    55,
      13,    51,   143,   143,    13,    96,    13,    13,    53,    14,
      22,   113,   118,    96,    53,    54,    98,    97,    32,    33,
      34,    62,    63,    64,   127,    57,    24,    15,    96,    69,
      96,    98,    56,   119,    99,    35,    36,    75,    77,   132,
      96,    56,    56,    56,    53,    53,    53,    22,   141,    96,
      56,     3,    20,   109,   124,   131,   141,    81,    56,    54,
      56,    60,   139,    75,    56,    53,    53,    53,    73,    98,
      19,   125,    73,    10,    28,    80,   106,    96,    76,   112,
     141,   123,    53,     6,    21,    88,    89,   119,    26,    75,
      16,   126,    53,    30,    58,   130,   130,   124,   130,    88,
     107,    10,    90,    16,     8,     9,    91,    93,    53,    92,
      94,    10,   130,    55,    12,    96,    53,    56,    95,    26,
     130
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
#line 176 "syntacticAnalyzer.y"
    { 
			fprintf( yyout, "CODE(%d)\nL 0:\n", Q.nextCodeNumber++ ); 
			Q.stat = 1;
		}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 186 "syntacticAnalyzer.y"
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
#line 199 "syntacticAnalyzer.y"
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
#line 234 "syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 236 "syntacticAnalyzer.y"
    {auxRegisterList = NULL;}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 236 "syntacticAnalyzer.y"
    { (yyval.regStruct) = auxRegisterList;  }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 253 "syntacticAnalyzer.y"
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
	}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 288 "syntacticAnalyzer.y"
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
		}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 304 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct) ; }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 305 "syntacticAnalyzer.y"
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
		}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 328 "syntacticAnalyzer.y"
    {	(yyval.op) = '+'; }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 329 "syntacticAnalyzer.y"
    {	(yyval.op) = '-'; }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 335 "syntacticAnalyzer.y"
    {
			// Get register of the identifier
		auxRegister = getSymbol(&sT, (yyvsp[(2) - (2)].string), sT.currentScope);
		errorCode = checkIfNumeric(errorString, auxRegister, 5);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}

		
		
	}
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 350 "syntacticAnalyzer.y"
    {
		
		nOthers = 0;
	}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 360 "syntacticAnalyzer.y"
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

  case 23:

/* Line 1806 of yacc.c  */
#line 386 "syntacticAnalyzer.y"
    {
		auxRegister = createRegister( (yyvsp[(1) - (6)].string), sT.currentScope,  Field, (yyvsp[(4) - (6)].typeVariable) ); 
	  addRegisterToList( &auxRegisterList, auxRegister );
	}
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 416 "syntacticAnalyzer.y"
    { /*destroyRegister( $1 );*/ }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 418 "syntacticAnalyzer.y"
    { markSubprogramAsDefined( (yyvsp[(1) - (1)].regStruct) );
		//destroyRegister( $1 ); 
	  }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 440 "syntacticAnalyzer.y"
    {			
			errorCode = checkIfDiscreteChoice(errorString, (yyvsp[(1) - (1)].regStruct));
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 448 "syntacticAnalyzer.y"
    {
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			(yyval.regStruct) = auxRegister;
		}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 461 "syntacticAnalyzer.y"
    {
			errorCode = checkIfOthers(errorString, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct));
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
		}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 469 "syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);
		}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 483 "syntacticAnalyzer.y"
    { fprintf(yyout,"\t//////////////////////////////////\n");
			fprintf(yyout,"\t// Open else block \n");

	  }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 493 "syntacticAnalyzer.y"
    { fprintf(yyout,"\t//////////////////////////////////\n");
  				fprintf(yyout,"\t// Open elsif block \n");
					(yyval.integer)=Q.nextLabel++;
				 }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 498 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (5)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			generateCodeEvaluateIf( yyout, &Q, (yyvsp[(2) - (5)].integer) ); 
		}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 508 "syntacticAnalyzer.y"
    { generateCodeNextIf( yyout, &Q, (yyvsp[(2) - (8)].integer) ); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 513 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 513 "syntacticAnalyzer.y"
    {

		if((yyvsp[(3) - (3)].regStruct)->typeVariable == Void ){ // There's no list
			(yyval.regStruct) = (yyvsp[(1) - (3)].regStruct);
			destroyRegister((yyvsp[(3) - (3)].regStruct));
		}else {
			(yyval.regStruct) = (yyvsp[(3) - (3)].regStruct);
		}
	}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 526 "syntacticAnalyzer.y"
    {
		addRegisterToList( &auxRegisterList, (yyvsp[(2) - (3)].regStruct) );
		(yyval.regStruct) = auxRegisterList;
	}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 531 "syntacticAnalyzer.y"
    {
		(yyval.regStruct) = NULL;
	}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 538 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 539 "syntacticAnalyzer.y"
    { yyerror("Incomplete factor"); (yyval.regStruct) = (yyvsp[(1) - (3)].regStruct); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 540 "syntacticAnalyzer.y"
    { yyerror("Incomplete factor"); (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 546 "syntacticAnalyzer.y"
    { 
		(yyval.regStruct) = auxRegisterList; 
	}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 549 "syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 561 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(2) - (5)].string), sT.currentScope,  Function, (yyvsp[(5) - (5)].typeVariable) ); 
	  addRegister( &sT, auxRegister );
	  (yyval.regStruct) = auxRegister; 
	}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 576 "syntacticAnalyzer.y"
    {  fprintf(yyout,"\t//////////////////////////////////\n");
  			fprintf(yyout,"\t// Open if block \n");
				(yyval.integer)=Q.nextLabel++; 
			}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 581 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (5)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			generateCodeEvaluateIf( yyout, &Q, (yyvsp[(2) - (5)].integer) ); 
		}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 591 "syntacticAnalyzer.y"
    { generateCodeNextIf( yyout, &Q, (yyvsp[(2) - (8)].integer) ); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 604 "syntacticAnalyzer.y"
    { (yyval.op) = '*'; }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 605 "syntacticAnalyzer.y"
    { (yyval.op) = '+'; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 610 "syntacticAnalyzer.y"
    { (yyval.integer)=generateCodeOpenWhile( yyout, &Q ); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 611 "syntacticAnalyzer.y"
    { generateCodeEvaluateWhile( yyout, &Q, (yyvsp[(2) - (5)].integer) ); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 615 "syntacticAnalyzer.y"
    {
		errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (11)].regStruct), 4);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}

	  generateCodeCloseWhile( yyout, &Q, (yyvsp[(2) - (11)].integer) );
	}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 628 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = Out; }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 629 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = InOut; }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 630 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 631 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 648 "syntacticAnalyzer.y"
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

  case 82:

/* Line 1806 of yacc.c  */
#line 677 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(1) - (6)].string), sT.currentScope,  (yyvsp[(4) - (6)].typeSymbol), (yyvsp[(5) - (6)].typeVariable) ); 
	  addRegisterToList( &auxRegisterList, auxRegister ); 
	}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 691 "syntacticAnalyzer.y"
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

  case 86:

/* Line 1806 of yacc.c  */
#line 703 "syntacticAnalyzer.y"
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

  case 87:

/* Line 1806 of yacc.c  */
#line 715 "syntacticAnalyzer.y"
    { auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Character
																										);	

												getVarStaticAddress(  &Q, auxRegister );
												generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

												(yyval.regStruct) = auxRegister;
											}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 725 "syntacticAnalyzer.y"
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

  case 89:

/* Line 1806 of yacc.c  */
#line 736 "syntacticAnalyzer.y"
    {	
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Void
																										);	
												(yyval.regStruct) = auxRegister;	
											}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 743 "syntacticAnalyzer.y"
    { generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											String
																										);	
												(yyval.regStruct) = auxRegister;
											}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 750 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 751 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 752 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(2) - (3)].regStruct);	}
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 758 "syntacticAnalyzer.y"
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

  case 95:

/* Line 1806 of yacc.c  */
#line 783 "syntacticAnalyzer.y"
    {
			// Generate code
			generateCodePutStringLiteral( yyout, &Q, (yyvsp[(3) - (5)].string) );
		}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 788 "syntacticAnalyzer.y"
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

  case 97:

/* Line 1806 of yacc.c  */
#line 799 "syntacticAnalyzer.y"
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

  case 98:

/* Line 1806 of yacc.c  */
#line 810 "syntacticAnalyzer.y"
    {
			generateCodeNewLine( yyout, &Q );
		}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 818 "syntacticAnalyzer.y"
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

  case 101:

/* Line 1806 of yacc.c  */
#line 861 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 863 "syntacticAnalyzer.y"
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

  case 103:

/* Line 1806 of yacc.c  */
#line 891 "syntacticAnalyzer.y"
    { fprintf(yyout,"\tR1=R0;\t\t\t//Saving R0 for relation call\n");; }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 893 "syntacticAnalyzer.y"
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

  case 105:

/* Line 1806 of yacc.c  */
#line 907 "syntacticAnalyzer.y"
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

  case 106:

/* Line 1806 of yacc.c  */
#line 918 "syntacticAnalyzer.y"
    {
			generateAnonymousId();
			auxRegister = createRegister( anonymousIdString, 
																		sT.currentScope, Auxiliar, 
																		Void
																	);	
			(yyval.regStruct) = auxRegister; 
		}
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 930 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "==");  }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 931 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "<");  }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 932 "syntacticAnalyzer.y"
    { strcpy((yyval.string), ">");  }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 933 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "!="); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 934 "syntacticAnalyzer.y"
    { strcpy((yyval.string), (yyvsp[(1) - (1)].string)); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 935 "syntacticAnalyzer.y"
    { strcpy((yyval.string), (yyvsp[(1) - (1)].string)); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 959 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct) ; }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 960 "syntacticAnalyzer.y"
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
		}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 979 "syntacticAnalyzer.y"
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
		 	}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 998 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct) ; }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 999 "syntacticAnalyzer.y"
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
			}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 1019 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1038 "syntacticAnalyzer.y"
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

  case 130:

/* Line 1806 of yacc.c  */
#line 1057 "syntacticAnalyzer.y"
    { exitScope ( &sT ); (yyval.regStruct) = (yyvsp[(1) - (7)].regStruct); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 1062 "syntacticAnalyzer.y"
    { exitScope ( &sT ); (yyval.regStruct) = (yyvsp[(1) - (6)].regStruct); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 1067 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1068 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1073 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 1075 "syntacticAnalyzer.y"
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
		}
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 1113 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Integer; }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 1114 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Real; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 1115 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Character; }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 1116 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Bool; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 1117 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = ArrayVariable; }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 1118 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Record; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 1120 "syntacticAnalyzer.y"
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

  case 146:

/* Line 1806 of yacc.c  */
#line 1141 "syntacticAnalyzer.y"
    { auxRegister = getSymbol(&sT, (yyvsp[(1) - (1)].string), sT.currentScope);
							 /* check if variable really exists */
							if(auxRegister == NULL){
								sprintf(errorString, "Variable '%s' not found in symbols table", (yyvsp[(1) - (1)].string));
								yyerror(errorString);
								YYABORT; // Serious compiler error
							}
							(yyval.regStruct) = auxRegister; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 1149 "syntacticAnalyzer.y"
    { yyerror("Incomplete! -> indexed_component in variable"); YYABORT; (yyval.regStruct) = NULL; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 1150 "syntacticAnalyzer.y"
    { yyerror("Incomplete! -> selected_component in variable"); YYABORT; (yyval.regStruct) = NULL; }
    break;



/* Line 1806 of yacc.c  */
#line 2928 "compiler.tab.c"
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
#line 1153 "syntacticAnalyzer.y"


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

