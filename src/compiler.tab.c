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
registerStruct *auxRegister, *auxRegisterList, *parentSubprogram;
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
     PUT = 290,
     GET = 291,
     LENGTH = 292,
     NEW_LINE = 293,
     INTEGER_TYPE = 294,
     REAL_TYPE = 295,
     CHARACTER_TYPE = 296,
     BOOLEAN_TYPE = 297,
     INTEGER_LITERAL = 298,
     FLOAT_LITERAL = 299,
     CHARACTER_LITERAL = 300,
     STRING_LITERAL = 301,
     BOOLEAN_LITERAL = 302
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
#line 213 "compiler.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 225 "compiler.tab.c"

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
#define YYLAST   254

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  258

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,    55,    37,    35,    53,    36,    63,    38,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    56,    52,
      61,    60,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    57,     2,     2,     2,     2,     2,
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
      49,    50,    51
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
     119,   120,   121,   122,   131,   133,   137,   141,   145,   146,
     148,   151,   156,   157,   160,   163,   169,   173,   174,   175,
     176,   177,   192,   198,   199,   200,   212,   214,   217,   219,
     220,   223,   231,   238,   242,   243,   245,   247,   249,   251,
     253,   255,   257,   259,   263,   267,   273,   279,   285,   288,
     292,   297,   299,   303,   305,   307,   309,   311,   313,   315,
     318,   322,   326,   328,   331,   334,   336,   338,   342,   346,
     348,   350,   352,   354,   356,   359,   360,   369,   371,   373,
     375,   379,   383,   389,   391,   393,   395,   397,   399,   401,
     403,   405,   407,   409,   411
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      65,     0,    -1,    -1,    23,    13,    15,    81,     5,    66,
     118,    10,    13,    52,    -1,    90,    -1,    67,    53,    90,
      -1,    54,    55,    -1,    -1,    54,    69,    67,    55,    -1,
       4,    54,    90,    91,    55,    19,   129,    -1,    31,    90,
      -1,    -1,   131,    31,    90,    52,    -1,     6,    13,    15,
      75,    10,     6,    52,    -1,    28,    83,    30,   118,    -1,
      75,    74,    -1,    -1,    13,    96,    56,   129,    71,    52,
      -1,    76,    77,    -1,    76,    -1,    97,    -1,   102,    -1,
      73,    -1,    72,    -1,     7,    -1,    -1,   128,    -1,   107,
      -1,   126,    52,    -1,   124,    -1,    80,    81,    -1,    -1,
     110,    -1,    21,    -1,    83,    57,    82,    -1,    82,    -1,
      84,    87,    -1,    -1,    -1,     8,    86,   118,    -1,    -1,
      -1,    -1,     9,    88,    54,    90,    55,    89,    26,   118,
      -1,   114,    -1,    90,     3,    90,    -1,    90,    20,    90,
      -1,    53,    90,    91,    -1,    -1,   110,    -1,    17,   110,
      -1,    54,   108,   109,    55,    -1,    -1,    13,    68,    -1,
      13,    41,    -1,    11,    13,    93,    25,   129,    -1,    53,
      13,    96,    -1,    -1,    -1,    -1,    -1,    12,    98,    54,
      90,    55,    99,    26,   118,   100,    84,    85,    10,    12,
      52,    -1,    13,    58,    90,    91,    59,    -1,    -1,    -1,
      29,   103,    54,    90,    55,   104,    16,   118,    10,    16,
      52,    -1,    22,    -1,    14,    22,    -1,    14,    -1,    -1,
      18,    52,    -1,    13,    96,    56,    79,   129,    71,    52,
      -1,    13,    96,    56,   105,   129,    71,    -1,    52,   108,
     109,    -1,    -1,    47,    -1,    48,    -1,    49,    -1,    51,
      -1,    18,    -1,    50,    -1,   131,    -1,    94,    -1,    54,
      90,    55,    -1,    13,    68,    52,    -1,    39,    54,    50,
      55,    52,    -1,    39,    54,   131,    55,    52,    -1,    40,
      54,   131,    55,    52,    -1,    42,    52,    -1,    23,    13,
      93,    -1,    24,    77,    10,    24,    -1,   119,    -1,   119,
     115,   119,    -1,    60,    -1,    61,    -1,    62,    -1,    32,
      -1,    34,    -1,    33,    -1,    25,    52,    -1,    25,   119,
      52,    -1,   131,    63,    13,    -1,   122,    -1,   122,   118,
      -1,   130,   120,    -1,   120,    -1,   127,    -1,   120,    35,
     120,    -1,   120,    36,   120,    -1,   106,    -1,   116,    -1,
     111,    -1,   121,    -1,    78,    -1,   126,    15,    -1,    -1,
     123,    81,     5,   125,   118,    10,    13,    52,    -1,   112,
      -1,    95,    -1,    92,    -1,   127,    37,   127,    -1,   127,
      38,   127,    -1,    27,    13,    15,   129,    52,    -1,    43,
      -1,    44,    -1,    45,    -1,    46,    -1,    70,    -1,   113,
      -1,    13,    -1,    35,    -1,    36,    -1,    13,    -1,   101,
      -1,   117,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   168,   168,   164,   179,   192,   208,   210,   210,   215,
     220,   221,   226,   262,   279,   300,   301,   306,   315,   316,
     321,   322,   323,   324,   329,   330,   335,   336,   337,   338,
     345,   346,   350,   358,   371,   379,   387,   388,   394,   393,
     399,   404,   409,   404,   423,   424,   449,   477,   483,   490,
     492,   497,   501,   506,   507,   512,   522,   523,   528,   533,
     543,   528,   551,   556,   557,   556,   574,   575,   576,   577,
     582,   587,   627,   636,   637,   642,   654,   666,   676,   687,
     694,   701,   702,   703,   708,   736,   741,   755,   766,   774,
     815,   822,   823,   851,   852,   853,   854,   855,   856,   861,
     862,   867,   874,   875,   880,   884,   891,   892,   917,   945,
     946,   947,   952,   953,   958,   986,   983,  1000,  1001,  1006,
    1007,  1036,  1069,  1074,  1075,  1076,  1077,  1078,  1079,  1080,
    1097,  1098,  1102,  1110,  1111
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
  "'+'", "'-'", "'*'", "'/'", "PUT", "GET", "LENGTH", "NEW_LINE",
  "INTEGER_TYPE", "REAL_TYPE", "CHARACTER_TYPE", "BOOLEAN_TYPE",
  "INTEGER_LITERAL", "FLOAT_LITERAL", "CHARACTER_LITERAL",
  "STRING_LITERAL", "BOOLEAN_LITERAL", "';'", "','", "'('", "')'", "':'",
  "'|'", "'['", "']'", "'='", "'<'", "'>'", "'.'", "$accept", "main",
  "$@1", "actual_parameter_list", "actual_parameter_part", "$@2",
  "array_type_definition", "assign_expression", "assignment_statement",
  "case_statement", "case_statement_alternative",
  "case_statement_alternative_list", "component_item", "component_list",
  "compound_statement", "constant", "declarative_item", "declarative_part",
  "discrete_choice", "discrete_choice_list", "elsif_list",
  "else_statement", "$@3", "elsif_statement", "@4", "$@5", "expression",
  "expression_list", "factor", "formal_part", "function_call",
  "function_specification", "identifier_list", "if_statement", "@6", "$@7",
  "$@8", "indexed_component", "loop_statement", "@9", "$@10", "mode",
  "null_statement", "object_declaration", "parameter_specification",
  "parameter_specification_list", "primary", "procedure_call_statement",
  "procedure_specification", "record_type_definition", "relation",
  "relational_operator", "return_statement", "selected_component",
  "sequence_of_statements", "simple_expression", "simple_expression_",
  "simple_statement", "statement", "subprogram_body_", "subprogram_body",
  "$@11", "subprogram_specification", "term", "type_declaration",
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
     301,   302,    59,    44,    40,    41,    58,   124,    91,    93,
      61,    60,    62,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    66,    65,    67,    67,    68,    69,    68,    70,
      71,    71,    72,    73,    74,    75,    75,    76,    77,    77,
      78,    78,    78,    78,    79,    79,    80,    80,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    86,    85,
      85,    88,    89,    87,    90,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    96,    96,    98,    99,
     100,    97,   101,   103,   104,   102,   105,   105,   105,   105,
     106,   107,   108,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   111,   111,   111,   111,   111,   112,
     113,   114,   114,   115,   115,   115,   115,   115,   115,   116,
     116,   117,   118,   118,   119,   119,   120,   120,   120,   121,
     121,   121,   122,   122,   123,   125,   124,   126,   126,   127,
     127,   127,   128,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   131,   131,   131
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,    10,     1,     3,     2,     0,     4,     7,
       2,     0,     4,     7,     4,     2,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     2,     1,
       2,     0,     1,     1,     3,     1,     2,     0,     0,     3,
       0,     0,     0,     8,     1,     3,     3,     3,     0,     1,
       2,     4,     0,     2,     2,     5,     3,     0,     0,     0,
       0,    14,     5,     0,     0,    11,     1,     2,     1,     0,
       2,     7,     6,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     5,     5,     5,     2,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       3,     3,     1,     2,     2,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     2,     0,     8,     1,     1,     1,
       3,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,    31,     0,    57,     0,     0,
      31,     0,   118,    27,   117,    31,    29,     0,    26,    52,
       0,     0,    52,     0,    30,     2,     0,   114,    28,     0,
       0,    57,    25,    89,     0,     0,   115,    57,    74,     0,
      56,    24,     0,     0,   129,     0,   123,   124,   125,   126,
     127,   128,     0,     0,    58,   132,     0,     0,    63,     0,
       0,     0,    23,    22,   113,    20,   133,    21,   109,   111,
     110,   134,     0,   112,   102,     0,     0,     0,     0,     0,
      55,    11,     0,    57,    19,     0,   122,     0,     0,     7,
       0,     0,    70,   132,     0,    79,   130,   131,    75,    76,
      77,    80,    78,    99,     0,   119,    82,    49,     0,   105,
     106,     0,    81,     0,     0,     0,    88,     0,   103,     0,
       0,     0,    69,    74,    51,     0,     0,    48,    44,    91,
       0,    18,     0,    16,     0,     6,     0,    48,    84,    54,
      53,    50,     0,   100,     0,     0,     0,     0,   104,     0,
     132,     0,     0,     0,     0,     0,   101,     0,    68,    66,
       0,    73,    10,    71,     0,     0,     0,     0,    96,    98,
      97,    93,    94,    95,     0,     0,    90,     0,     0,     0,
       4,     0,    83,   107,   108,   120,   121,     0,     0,     0,
       0,     3,    12,     0,    67,    11,    45,    46,    48,     0,
      92,    11,     0,     0,    15,    59,     0,     8,    62,    64,
      85,    86,    87,   116,    72,    47,     0,     0,     0,    33,
      35,     0,    32,     0,     5,     0,     9,    17,    13,     0,
       0,     0,     0,    14,    34,    60,     0,    37,     0,    40,
       0,    38,    41,     0,    36,    65,     0,     0,     0,    39,
       0,     0,     0,    61,    42,     0,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    35,   179,    91,   136,    50,   126,    62,    63,
     204,   177,    84,    85,    64,    42,    10,    11,   220,   221,
     239,   243,   246,   244,   247,   255,   127,   167,   105,    30,
     106,    12,    21,    65,    88,   223,   237,    66,    67,   113,
     225,   160,    68,    13,    38,    79,   107,    69,    14,    51,
     128,   174,    70,    71,    72,   129,   109,    73,    74,    15,
      16,    76,    17,   110,    18,    52,   111,   112
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -171
static const yytype_int16 yypact[] =
{
      23,    65,    26,    81,  -171,   124,    85,    52,   114,   121,
     124,   134,  -171,  -171,  -171,   124,  -171,    -1,  -171,    92,
     136,    98,    92,   142,  -171,  -171,   155,  -171,  -171,   148,
     146,    52,   160,  -171,    31,   164,  -171,    52,   120,    31,
    -171,  -171,    31,   126,  -171,   161,  -171,  -171,  -171,  -171,
    -171,  -171,   129,   162,  -171,    67,   138,    68,  -171,   141,
     144,   140,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,   168,  -171,   164,   -13,   164,   143,   148,   145,
    -171,   170,    94,    52,   161,   192,  -171,   190,   153,   154,
      94,   156,  -171,   -24,   137,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,    94,  -171,  -171,  -171,   158,    53,
      71,    43,   149,   159,    19,   201,  -171,   202,  -171,    94,
     203,   207,    73,   120,  -171,    94,   166,    13,  -171,    39,
     163,  -171,   196,  -171,    94,  -171,    94,    13,  -171,  -171,
    -171,  -171,     3,  -171,    43,    43,    43,    43,    53,    94,
     165,   167,    47,    51,   172,    18,  -171,   212,   204,  -171,
      31,  -171,    33,  -171,    94,    94,    94,   173,  -171,  -171,
    -171,  -171,  -171,  -171,    94,    31,  -171,    14,     7,     4,
      33,   171,  -171,  -171,  -171,  -171,  -171,     8,   175,   177,
     179,  -171,  -171,   180,  -171,   170,  -171,   230,    13,   215,
    -171,   170,   229,   115,  -171,  -171,    94,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,    31,   184,   185,  -171,
    -171,   -10,  -171,   213,    33,   222,  -171,  -171,  -171,   164,
     115,   164,   164,  -171,  -171,  -171,   231,  -171,   224,   123,
     191,  -171,  -171,   232,  -171,  -171,   164,   193,   233,  -171,
      94,   194,     9,  -171,  -171,   218,   164,  -171
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,  -171,   157,  -171,  -171,  -170,  -171,  -171,
    -171,  -171,  -171,   169,  -171,  -171,  -171,    30,    21,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,   -82,  -130,  -171,   226,
    -171,  -171,   -18,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,   174,   131,   -90,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,   -73,   -48,   -96,  -171,  -171,  -171,
    -171,  -171,  -171,     6,  -171,   -37,  -171,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      75,   118,    80,   121,   141,    81,   164,   181,   137,   108,
     164,   164,   164,    40,    27,   148,   164,   139,   119,    77,
     229,   164,   142,   165,   202,   214,     4,   165,   165,   165,
      89,   217,   150,   165,    90,    43,   164,   155,   165,    75,
      24,    75,   203,   162,    44,    26,     1,   230,   183,   184,
     120,    28,   178,   165,   180,    45,    93,   206,   182,   207,
      94,    95,   205,   209,   254,   130,   166,   187,   215,   151,
     192,   168,   169,   170,    46,    47,    48,    49,     3,   152,
     153,    93,   196,   197,   198,    94,    95,   158,   144,   145,
      98,    99,   100,   101,   102,   159,     5,   104,    19,   171,
     172,   173,   189,    96,    97,    20,   190,    93,   146,   147,
     120,    94,    95,   222,   120,    98,    99,   100,   101,   102,
     103,    89,   104,   195,   224,    90,   200,    22,    93,    96,
      97,   241,   242,    95,    23,     6,   219,     7,   201,    25,
     222,    98,    99,   100,   101,   102,    29,     8,   104,    31,
      93,     9,   185,   186,    32,    95,   233,    34,   235,   236,
      36,    37,    98,    99,   100,   101,   102,    41,   252,   104,
      53,    39,    78,   249,    83,    87,    54,    55,   117,   226,
      82,    86,    56,   257,    98,    99,   100,   101,   102,    57,
      92,   104,   116,    58,    75,   114,    75,    75,   115,   122,
     124,   125,   132,    59,    60,   133,    61,   134,   138,   135,
     143,    75,   120,   149,   150,   154,   156,   157,   163,   175,
     176,    75,   188,    90,   191,   193,   194,   210,   199,   211,
     208,   212,   213,   164,   216,   218,   227,   228,   232,   231,
     240,   238,   248,   245,   256,   251,   253,   250,    33,     0,
     140,   234,   123,   131,   161
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-171))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      35,    74,    39,    76,    94,    42,     3,   137,    90,    57,
       3,     3,     3,    31,    15,   111,     3,    41,    31,    37,
      30,     3,   104,    20,    10,   195,     0,    20,    20,    20,
      54,   201,    13,    20,    58,     4,     3,   119,    20,    74,
      10,    76,    28,   125,    13,    15,    23,    57,   144,   145,
      63,    52,   134,    20,   136,    24,    13,    53,    55,    55,
      17,    18,    55,    55,    55,    83,    53,   149,   198,    50,
      52,    32,    33,    34,    43,    44,    45,    46,    13,   114,
     115,    13,   164,   165,   166,    17,    18,    14,    35,    36,
      47,    48,    49,    50,    51,    22,    15,    54,    13,    60,
      61,    62,    55,    35,    36,    53,    55,    13,    37,    38,
      63,    17,    18,   203,    63,    47,    48,    49,    50,    51,
      52,    54,    54,   160,   206,    58,   174,    13,    13,    35,
      36,     8,     9,    18,    13,    11,    21,    13,   175,     5,
     230,    47,    48,    49,    50,    51,    54,    23,    54,    13,
      13,    27,   146,   147,    56,    18,   229,    15,   231,   232,
       5,    13,    47,    48,    49,    50,    51,     7,   250,    54,
       6,    25,    52,   246,    13,    13,    12,    13,    10,   216,
      54,    52,    18,   256,    47,    48,    49,    50,    51,    25,
      52,    54,    52,    29,   229,    54,   231,   232,    54,    56,
      55,    31,    10,    39,    40,    15,    42,    54,    52,    55,
      52,   246,    63,    54,    13,    13,    13,    10,    52,    56,
      24,   256,    55,    58,    52,    13,    22,    52,    55,    52,
      59,    52,    52,     3,    19,     6,    52,    52,    16,    26,
      16,    10,    10,    52,    26,    12,    52,    54,    22,    -1,
      93,   230,    78,    84,   123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    23,    65,    13,     0,    15,    11,    13,    23,    27,
      80,    81,    95,   107,   112,   123,   124,   126,   128,    13,
      53,    96,    13,    13,    81,     5,    81,    15,    52,    54,
      93,    13,    56,    93,    15,    66,     5,    13,   108,    25,
      96,     7,    79,     4,    13,    24,    43,    44,    45,    46,
      70,   113,   129,     6,    12,    13,    18,    25,    29,    39,
      40,    42,    72,    73,    78,    97,   101,   102,   106,   111,
     116,   117,   118,   121,   122,   131,   125,    96,    52,   109,
     129,   129,    54,    13,    76,    77,    52,    13,    98,    54,
      58,    68,    52,    13,    17,    18,    35,    36,    47,    48,
      49,    50,    51,    52,    54,    92,    94,   110,   119,   120,
     127,   130,   131,   103,    54,    54,    52,    10,   118,    31,
      63,   118,    56,   108,    55,    31,    71,    90,   114,   119,
      96,    77,    10,    15,    54,    55,    69,    90,    52,    41,
      68,   110,    90,    52,    35,    36,    37,    38,   120,    54,
      13,    50,   131,   131,    13,    90,    13,    10,    14,    22,
     105,   109,    90,    52,     3,    20,    53,    91,    32,    33,
      34,    60,    61,    62,   115,    56,    24,    75,    90,    67,
      90,    91,    55,   120,   120,   127,   127,    90,    55,    55,
      55,    52,    52,    13,    22,   129,    90,    90,    90,    55,
     119,   129,    10,    28,    74,    55,    53,    55,    59,    55,
      52,    52,    52,    52,    71,    91,    19,    71,     6,    21,
      82,    83,   110,    99,    90,   104,   129,    52,    52,    30,
      57,    26,    16,   118,    82,   118,   118,   100,    10,    84,
      16,     8,     9,    85,    87,    52,    86,    88,    10,   118,
      54,    12,    90,    52,    55,    89,    26,   118
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
#line 168 "syntacticAnalyzer.y"
    { 
			fprintf( yyout, "CODE(%d)\nL 0:\n", Q.nextCodeNumber++ ); 
			fprintf( yyout, "\tR6=R7;\t\t\t//Initialize R6\n"); 
			
			Q.stat = 1;
		}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 180 "syntacticAnalyzer.y"
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
#line 193 "syntacticAnalyzer.y"
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
#line 208 "syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 210 "syntacticAnalyzer.y"
    {auxRegisterList = NULL;}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 210 "syntacticAnalyzer.y"
    { (yyval.regStruct) = auxRegisterList;  }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 227 "syntacticAnalyzer.y"
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
#line 265 "syntacticAnalyzer.y"
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
#line 281 "syntacticAnalyzer.y"
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
#line 307 "syntacticAnalyzer.y"
    {
		auxRegister = createRegister( (yyvsp[(1) - (6)].string), sT.currentScope,  Field, (yyvsp[(4) - (6)].typeVariable) ); 
	  addRegisterToList( &auxRegisterList, auxRegister );
	}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 337 "syntacticAnalyzer.y"
    { /*destroyRegister( $1 );*/ }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 339 "syntacticAnalyzer.y"
    { markSubprogramAsDefined( (yyvsp[(1) - (1)].regStruct) );
		//destroyRegister( $1 ); 
	  }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 351 "syntacticAnalyzer.y"
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
#line 359 "syntacticAnalyzer.y"
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
#line 372 "syntacticAnalyzer.y"
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
#line 380 "syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);
		}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 394 "syntacticAnalyzer.y"
    { fprintf(yyout,"\t//////////////////////////////////\n");
			fprintf(yyout,"\t// Open else block \n");

	  }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 404 "syntacticAnalyzer.y"
    { fprintf(yyout,"\t//////////////////////////////////\n");
  				fprintf(yyout,"\t// Open elsif block \n");
					(yyval.integer)=Q.nextLabel++;
				 }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 409 "syntacticAnalyzer.y"
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
#line 419 "syntacticAnalyzer.y"
    { generateCodeNextIf( yyout, &Q, (yyvsp[(2) - (8)].integer) ); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 423 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 425 "syntacticAnalyzer.y"
    {
			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			// Generate code for addition 
			generateCodeLogical( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), '*' );

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

  case 46:

/* Line 1806 of yacc.c  */
#line 450 "syntacticAnalyzer.y"
    {
			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 3);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			}
			// Generate code for addition 
			generateCodeLogical( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), '+' );

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

  case 47:

/* Line 1806 of yacc.c  */
#line 478 "syntacticAnalyzer.y"
    {
		addRegisterToList( &auxRegisterList, (yyvsp[(2) - (3)].regStruct) );
		(yyval.regStruct) = auxRegisterList;
	}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 483 "syntacticAnalyzer.y"
    {
		(yyval.regStruct) = NULL;
	}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 490 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 492 "syntacticAnalyzer.y"
    { yyerror("Incomplete factor"); (yyval.regStruct) = (yyvsp[(2) - (2)].regStruct); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 498 "syntacticAnalyzer.y"
    { 
		(yyval.regStruct) = auxRegisterList; 
	}
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 501 "syntacticAnalyzer.y"
    { (yyval.regStruct) = NULL; }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 513 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(2) - (5)].string), sT.currentScope,  Function, (yyvsp[(5) - (5)].typeVariable) ); 
	  addRegister( &sT, auxRegister );
	  (yyval.regStruct) = auxRegister; 
	}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 528 "syntacticAnalyzer.y"
    {  fprintf(yyout,"\t//////////////////////////////////\n");
  			fprintf(yyout,"\t// Open if block \n");
				(yyval.integer)=Q.nextLabel++; 
			}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 533 "syntacticAnalyzer.y"
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
#line 543 "syntacticAnalyzer.y"
    { generateCodeNextIf( yyout, &Q, (yyvsp[(2) - (8)].integer) ); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 556 "syntacticAnalyzer.y"
    { (yyval.integer)=generateCodeOpenWhile( yyout, &Q ); }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 557 "syntacticAnalyzer.y"
    { generateCodeEvaluateWhile( yyout, &Q, (yyvsp[(2) - (5)].integer) ); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 561 "syntacticAnalyzer.y"
    {
		errorCode = checkIfNumeric(errorString, (yyvsp[(4) - (11)].regStruct), 4);
		if(errorCode){
			yyerror(errorString);
			YYABORT;
		}

	  generateCodeCloseWhile( yyout, &Q, (yyvsp[(2) - (11)].integer) );
	}
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 574 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = Out; }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 575 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = InOut; }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 576 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 577 "syntacticAnalyzer.y"
    { (yyval.typeSymbol) = In; }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 588 "syntacticAnalyzer.y"
    { 
	  auxRegister = createRegister( (yyvsp[(1) - (7)].string), sT.currentScope,  Variable, (yyvsp[(5) - (7)].typeVariable) ); 
	  errorCode = addRegister( &sT, auxRegister ); 
	  if(errorCode){
			yyerror();
			YYABORT;
		} 

		// Only variables at scope 0 are static
		if(sT.currentScope == 0){
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
		// If scope!=0, variables are locals 
		else{
			errorCode = setVarStackAddress( &Q, auxRegister, &parentSubprogram );
			if( errorCode == -1 ){
				yyerror("Symbol created is not a variable");
				YYABORT;
			}
		}
	}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 628 "syntacticAnalyzer.y"
    { 
		auxRegister = createRegister( (yyvsp[(1) - (6)].string), sT.currentScope,  (yyvsp[(4) - (6)].typeSymbol), (yyvsp[(5) - (6)].typeVariable) ); 
	  addRegisterToList( &auxRegisterList, auxRegister ); 
	}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 642 "syntacticAnalyzer.y"
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

  case 76:

/* Line 1806 of yacc.c  */
#line 654 "syntacticAnalyzer.y"
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

  case 77:

/* Line 1806 of yacc.c  */
#line 666 "syntacticAnalyzer.y"
    { auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Character
																										);	

												getVarStaticAddress(  &Q, auxRegister );
												generateCodeVarStatic( yyout, &Q, auxRegister, (yyvsp[(1) - (1)].string) );

												(yyval.regStruct) = auxRegister;
											}
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 676 "syntacticAnalyzer.y"
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

  case 79:

/* Line 1806 of yacc.c  */
#line 687 "syntacticAnalyzer.y"
    {	
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											Void
																										);	
												(yyval.regStruct) = auxRegister;	
											}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 694 "syntacticAnalyzer.y"
    { generateAnonymousId();
												auxRegister = createRegister( anonymousIdString, 
																											sT.currentScope, Literal, 
																											String
																										);	
												(yyval.regStruct) = auxRegister;
											}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 701 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	}
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 702 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);	}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 703 "syntacticAnalyzer.y"
    {	(yyval.regStruct) = (yyvsp[(2) - (3)].regStruct);	}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 709 "syntacticAnalyzer.y"
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
  	
		// Generate code
		generateCodeProcedureCall( yyout, &Q, &sT, auxRegister, auxRegisterList );


		// It sets auxRegisterList as NULL
		deleteRegisterList( &auxRegisterList );
	}
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 737 "syntacticAnalyzer.y"
    {
			// Generate code
			generateCodePutStringLiteral( yyout, &Q, (yyvsp[(3) - (5)].string) );
		}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 742 "syntacticAnalyzer.y"
    { 
			errorCode = checkPutGet( errorString, (yyvsp[(3) - (5)].regStruct) );
		  if ( errorCode!=0 ){
		  	yyerror("Incorrect 'Put' parameter: %s", errorString);
		  	YYABORT;
			} 

			// Generate code
			//auxRegister=getSymbol(  &sT, $3->key.id, $3->key.scope );
			//printRegister(*auxRegister);

			generateCodePutVariable( yyout, &Q, auxRegister );
		}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 756 "syntacticAnalyzer.y"
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

  case 88:

/* Line 1806 of yacc.c  */
#line 767 "syntacticAnalyzer.y"
    {
			generateCodeNewLine( yyout, &Q );
		}
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 775 "syntacticAnalyzer.y"
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

	  addParametersToSubprogram( &sT, (yyvsp[(3) - (3)].regStruct), &auxRegister );

	 
	  //setParamsStackAddress( &Q, &auxRegister );  // Addresses of parameters

	  auxRegisterList = NULL;

	  (yyval.regStruct) = auxRegister; 
	}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 822 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 824 "syntacticAnalyzer.y"
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

  case 93:

/* Line 1806 of yacc.c  */
#line 851 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "==");  }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 852 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "<");  }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 853 "syntacticAnalyzer.y"
    { strcpy((yyval.string), ">");  }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 854 "syntacticAnalyzer.y"
    { strcpy((yyval.string), "!="); }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 855 "syntacticAnalyzer.y"
    { strcpy((yyval.string), (yyvsp[(1) - (1)].string)); }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 856 "syntacticAnalyzer.y"
    { strcpy((yyval.string), (yyvsp[(1) - (1)].string)); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 881 "syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(2) - (2)].regStruct);
		}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 885 "syntacticAnalyzer.y"
    {
			(yyval.regStruct) = (yyvsp[(1) - (1)].regStruct);
		}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 891 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 893 "syntacticAnalyzer.y"
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

  case 108:

/* Line 1806 of yacc.c  */
#line 918 "syntacticAnalyzer.y"
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

  case 114:

/* Line 1806 of yacc.c  */
#line 959 "syntacticAnalyzer.y"
    {
		enterScope ( &sT );
		parentSubprogram = (yyvsp[(1) - (2)].regStruct);

		setParamsStackAddress( &Q, &parentSubprogram );  // Addresses of parameters

		errorCode = addParametersToSymbolsTable(&sT, (yyvsp[(1) - (2)].regStruct));
		if ( errorCode!=0 ){
	  	yyerror("Error adding parameters of subprogram %s", (yyvsp[(1) - (2)].regStruct)->key.id);
	  	YYABORT;
		}

		//make function for this
		generateCodeBeginSubprogram( yyout, &Q, (yyvsp[(1) - (2)].regStruct)->key.id );

		// Save subprogram label
		(yyvsp[(1) - (2)].regStruct)->label=Q.nextLabel-1;

		(yyval.regStruct) = (yyvsp[(1) - (2)].regStruct);
	}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 986 "syntacticAnalyzer.y"
    {
		generateCodeSubprogramBase( yyout, (yyvsp[(1) - (3)].regStruct) );
	}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 991 "syntacticAnalyzer.y"
    { 
		exitScope ( &sT, (yyvsp[(1) - (8)].regStruct) ); 
		generateCodeEndSubprogram( yyout, &Q, (yyvsp[(1) - (8)].regStruct) ); 
		(yyval.regStruct) = (yyvsp[(1) - (8)].regStruct); 
	}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 1000 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 1001 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 1006 "syntacticAnalyzer.y"
    { (yyval.regStruct) = (yyvsp[(1) - (1)].regStruct); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 1008 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 0);
			if(errorCode) {
				yyerror(errorString);
				YYABORT;
			}

			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 0);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			} 

			getVariableTypeName(string1, (yyvsp[(1) - (3)].regStruct)->typeVariable);
  		getVariableTypeName(string2, (yyvsp[(3) - (3)].regStruct)->typeVariable);

  		generateCodeMultiply( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), '*' );

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

  case 121:

/* Line 1806 of yacc.c  */
#line 1037 "syntacticAnalyzer.y"
    { 
			errorCode = checkIfNumeric(errorString, (yyvsp[(3) - (3)].regStruct), 0);
			if(errorCode) {
				yyerror(errorString);
				YYABORT;
			}

			errorCode = checkIfNumeric(errorString, (yyvsp[(1) - (3)].regStruct), 0);
			if(errorCode){
				yyerror(errorString);
				YYABORT;
			} 

			getVariableTypeName(string1, (yyvsp[(1) - (3)].regStruct)->typeVariable);
  		getVariableTypeName(string2, (yyvsp[(3) - (3)].regStruct)->typeVariable);

  		generateCodeMultiply( yyout, &Q, (yyvsp[(1) - (3)].regStruct), (yyvsp[(3) - (3)].regStruct), '/' );

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
#line 1074 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Integer; }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 1075 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Real; }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 1076 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Character; }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 1077 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Bool; }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 1078 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = ArrayVariable; }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 1079 "syntacticAnalyzer.y"
    { (yyval.typeVariable) = Record; }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 1081 "syntacticAnalyzer.y"
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

  case 132:

/* Line 1806 of yacc.c  */
#line 1102 "syntacticAnalyzer.y"
    { auxRegister = getSymbol(&sT, (yyvsp[(1) - (1)].string), sT.currentScope);
							 /* check if variable really exists */
							if(auxRegister == NULL){
								sprintf(errorString, "Variable '%s' not found in symbols table", (yyvsp[(1) - (1)].string));
								yyerror(errorString);
								YYABORT; // Serious compiler error
							}
							(yyval.regStruct) = auxRegister; }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 1110 "syntacticAnalyzer.y"
    { yyerror("Incomplete! -> indexed_component in variable"); YYABORT; (yyval.regStruct) = NULL; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 1111 "syntacticAnalyzer.y"
    { yyerror("Incomplete! -> selected_component in variable"); YYABORT; (yyval.regStruct) = NULL; }
    break;



/* Line 1806 of yacc.c  */
#line 2857 "compiler.tab.c"
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
#line 1114 "syntacticAnalyzer.y"


//Codigo C adicional

void generateAnonymousId(){
  sprintf(anonymousIdString, "%d", anonymousId++);
}

void printRegQ( qMachine Q ){
	printf("%d-%d-%d-%d-%d-%d\n" , Q.R[0], Q.R[1], Q.R[2], Q.R[3], Q.R[4], Q.R[5] );
	printf("lastR:%d\n" , Q.lastRstack );
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

