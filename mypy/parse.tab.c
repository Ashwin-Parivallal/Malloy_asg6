/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "includes/parse.y" /* yacc.c:339  */


#include <iostream>
#include <map>
#include <cmath>
#include "includes/ast.h"
#include "includes/TableManager.h"
	int yylex (void);
	extern char *yytext;
	void yyerror (const char *);

PoolOfNodes& pool = PoolOfNodes::getInstance();

#line 80 "parse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
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
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    MINUS = 309,
    NEWLINE = 310,
    NOT = 311,
    NOTEQUAL = 312,
    NUMBER = 313,
    OR = 314,
    PASS = 315,
    PERCENT = 316,
    PERCENTEQUAL = 317,
    PLUS = 318,
    PLUSEQUAL = 319,
    PRINT = 320,
    RAISE = 321,
    RBRACE = 322,
    RETURN = 323,
    RIGHTSHIFT = 324,
    RIGHTSHIFTEQUAL = 325,
    RPAR = 326,
    RSQB = 327,
    SEMI = 328,
    SLASH = 329,
    SLASHEQUAL = 330,
    STAR = 331,
    STAREQUAL = 332,
    STRING = 333,
    TILDE = 334,
    TRY = 335,
    VBAREQUAL = 336,
    WHILE = 337,
    WITH = 338,
    YIELD = 339,
    INT = 340,
    FLOAT = 341,
    NAME = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "includes/parse.y" /* yacc.c:355  */

  Node* node;
  int intNumber;
  float fltNumber;
  char *id;
  std::vector<Node*>* vec;

#line 216 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 247 "parse.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   904

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  314
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  477

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    57,    60,    61,    69,    70,    73,    74,
      77,    78,    81,    82,    85,    86,    89,    98,    99,   102,
     103,   110,   111,   114,   119,   126,   127,   130,   131,   134,
     135,   138,   144,   147,   148,   151,   152,   155,   156,   159,
     160,   163,   164,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   178,   211,   219,   220,   223,   224,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     241,   246,   249,   250,   253,   254,   257,   258,   261,   262,
     265,   268,   271,   272,   273,   274,   275,   278,   281,   284,
     285,   293,   296,   297,   300,   301,   304,   305,   308,   309,
     312,   315,   318,   319,   322,   323,   324,   327,   328,   331,
     332,   335,   336,   339,   340,   343,   344,   347,   348,   351,
     354,   355,   358,   359,   362,   363,   366,   367,   368,   369,
     370,   371,   372,   373,   376,   381,   388,   389,   392,   393,
     396,   397,   400,   401,   404,   405,   408,   409,   412,   413,
     416,   419,   420,   423,   424,   427,   428,   431,   432,   435,
     436,   439,   440,   449,   455,   464,   465,   468,   469,   472,
     473,   476,   477,   480,   481,   484,   485,   488,   489,   492,
     493,   496,   497,   500,   501,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   521,   522,   525,   526,
     529,   530,   533,   534,   537,   538,   541,   542,   554,   555,
     558,   559,   580,   581,   582,   583,   586,   597,   600,   601,
     602,   605,   610,   626,   627,   630,   631,   632,   633,   634,
     640,   645,   650,   653,   654,   657,   658,   661,   662,   665,
     666,   669,   670,   673,   674,   677,   678,   681,   682,   685,
     690,   691,   694,   695,   698,   699,   702,   703,   704,   707,
     708,   711,   712,   715,   716,   719,   720,   723,   724,   727,
     728,   731,   732,   735,   736,   739,   740,   743,   744,   747,
     748,   751,   752,   755,   762,   767,   774,   775,   778,   779,
     782,   783,   784,   787,   788,   791,   792,   795,   796,   799,
     800,   803,   804,   807,   808,   811,   812,   815,   816,   819,
     820,   823,   824,   827,   828
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NEWLINE", "NOT", "NOTEQUAL", "NUMBER",
  "OR", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL", "PRINT",
  "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "RPAR",
  "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL", "STRING",
  "TILDE", "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD", "INT", "FLOAT",
  "NAME", "$accept", "start", "file_input", "pick_NEWLINE_stmt",
  "star_NEWLINE_stmt", "decorator", "opt_arglist", "decorators",
  "decorated", "funcdef", "parameters", "varargslist", "opt_EQUAL_test",
  "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME", "pick_STAR_DOUBLESTAR",
  "opt_COMMA", "fpdef", "fplist", "star_fpdef_notest", "stmt",
  "simple_stmt", "star_SEMI_small_stmt", "small_stmt", "expr_stmt",
  "pick_yield_expr_testlist", "star_EQUAL", "augassign", "print_stmt",
  "star_COMMA_test", "opt_test", "plus_COMMA_test", "opt_test_2",
  "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt",
  "return_stmt", "yield_stmt", "raise_stmt", "opt_COMMA_test",
  "opt_test_3", "import_stmt", "import_name", "import_from",
  "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "plus_COMMA_old_test", "old_test", "old_lambdef",
  "test", "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -386

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-386)))

#define YYTABLE_NINF -261

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -386,    76,  -386,   414,  -386,   804,    -3,   804,  -386,     2,
    -386,    18,   513,  -386,   513,   513,  -386,    23,   804,    -3,
     105,   804,   701,   804,  -386,  -386,   432,  -386,  -386,   715,
     804,   804,  -386,  -386,   132,   804,   804,   804,  -386,  -386,
    -386,  -386,  -386,    43,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,     0,   123,  -386,   299,   139,   143,   152,    -4,
      16,    42,  -386,   513,  -386,  -386,    79,  -386,   207,  -386,
    -386,   145,  -386,    17,  -386,    85,    20,   108,   139,  -386,
      32,   120,   122,     6,  -386,   149,  -386,   153,    33,   804,
     155,    10,    29,   104,  -386,   141,  -386,   106,  -386,  -386,
     144,   107,  -386,  -386,   804,  -386,  -386,   166,  -386,   333,
     169,  -386,   180,  -386,  -386,  -386,  -386,    51,   172,   432,
     432,  -386,   432,  -386,  -386,  -386,  -386,  -386,   134,  -386,
    -386,   151,  -386,   513,   513,   513,   513,  -386,  -386,   513,
    -386,  -386,   513,  -386,  -386,  -386,  -386,   513,  -386,    74,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,   164,   701,   804,   109,   126,  -386,  -386,
     804,   333,   804,   128,   183,   184,   804,   804,   -18,   161,
     182,   188,   333,    -3,   124,  -386,   804,   125,   -14,   129,
    -386,  -386,   179,   804,   513,   197,  -386,  -386,  -386,   197,
    -386,  -386,   513,   197,  -386,  -386,   201,   197,   804,  -386,
     178,  -386,   113,   333,   136,   513,  -386,   657,   804,    21,
     123,  -386,  -386,  -386,   139,   143,   152,    -4,    16,    42,
    -386,   135,   513,   126,   753,  -386,   701,  -386,  -386,  -386,
    -386,  -386,   154,  -386,    36,  -386,  -386,  -386,   157,  -386,
     158,   333,   513,   219,   222,   156,  -386,   232,  -386,  -386,
    -386,   159,  -386,  -386,  -386,  -386,  -386,  -386,   170,   226,
     804,   228,   141,   203,   804,  -386,  -386,   206,  -386,   804,
     234,  -386,  -386,   219,   576,   804,   237,    86,   238,   227,
     333,   804,   139,  -386,  -386,  -386,   804,  -386,  -386,   185,
     236,   243,   189,  -386,   247,  -386,   208,   804,   804,    97,
    -386,   250,   252,  -386,  -386,   139,   804,  -386,   333,   199,
     181,   256,  -386,   127,   257,  -386,   254,  -386,  -386,    14,
    -386,   260,  -386,  -386,   432,   817,  -386,   804,  -386,  -386,
    -386,   495,    61,   333,   264,   248,   265,   333,   268,  -386,
    -386,  -386,  -386,   266,  -386,   270,   804,  -386,  -386,  -386,
     804,  -386,  -386,   220,  -386,   333,  -386,   263,  -386,  -386,
     156,   804,   277,   -14,   209,   804,  -386,     7,   278,    15,
     281,  -386,   239,  -386,  -386,  -386,  -386,  -386,   804,  -386,
    -386,   333,   288,  -386,   333,  -386,   333,  -386,    87,  -386,
     289,   291,  -386,  -386,   293,  -386,   294,   333,  -386,  -386,
     295,   817,  -386,  -386,  -386,   817,   297,   817,  -386,  -386,
    -386,   817,   298,  -386,  -386,   333,  -386,  -386,  -386,   804,
    -386,  -386,   766,  -386,   333,   333,  -386,   804,    95,  -386,
     817,    15,  -386,   817,  -386,  -386,  -386,   804,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    87,     0,
      88,     0,     0,     3,     0,     0,   314,     0,     0,     0,
      24,   240,   236,   238,   219,     4,     0,    81,   218,    75,
      93,    90,   242,   220,     0,     0,     0,   312,   230,   231,
     229,     6,    13,     0,   133,   131,     5,    37,    42,    43,
      44,    45,    46,    47,    82,    83,    84,    86,    85,    48,
      98,    99,    49,    50,    51,    38,   126,   127,   128,   129,
     130,    73,   176,   177,   179,   182,   183,   196,   198,   200,
     202,   206,   210,     0,   217,   224,   232,   174,    57,   132,
      91,   125,   117,     0,   309,     0,     0,     0,   268,    80,
     123,     0,     0,     0,   121,     0,   115,   100,   110,     0,
       0,     0,    73,     0,   239,    73,   235,     0,   234,   233,
      73,     0,   237,   181,     0,    70,    73,    97,    89,     0,
       0,   152,   154,   311,    12,    15,    14,     0,   270,     0,
       0,   173,     0,   187,   186,   188,   190,   192,   194,   185,
     189,     0,   191,     0,     0,     0,     0,   204,   205,     0,
     209,   208,     0,   215,   214,   213,   212,     0,   216,   222,
     241,    63,    65,    69,    68,    66,    59,    62,    58,    67,
      61,    60,    64,    53,     0,     0,     0,   285,     9,   228,
       0,     0,   282,    24,     0,   266,     0,     0,     0,   313,
     102,   119,     0,     0,     0,   248,     0,     0,     0,     0,
      31,    19,    22,     0,     0,    30,   272,   277,   227,    30,
     245,   225,     0,    30,   243,   226,    79,    30,     0,    92,
       0,   161,     0,     0,     0,     0,    40,     0,   269,     0,
     178,   180,   195,   193,   184,   197,   199,   201,   203,   207,
     211,     0,     0,   285,   260,   223,     0,    52,    55,    54,
     124,   118,     0,    10,     0,   310,   280,   281,     0,    18,
       0,     0,   265,    95,     0,     0,   104,   108,   101,   114,
     106,     0,   137,   116,   109,   247,    28,    36,     0,    26,
       0,    30,   274,     0,    29,   278,   246,     0,   244,     0,
      30,    71,    74,    95,     0,   156,     0,   147,     0,   139,
       0,     0,   153,    39,    41,    72,     0,   251,   221,     0,
       0,   257,     0,   255,     0,    56,     0,     0,     0,   296,
     283,    30,     0,    17,    16,   267,     0,   122,     0,     0,
       0,   112,   120,   135,    34,    32,     0,    27,    21,    23,
      20,    30,   271,   275,     0,     0,    77,    29,    78,    96,
     164,     0,   160,     0,     0,   149,     0,     0,     0,   150,
     151,   175,   249,     0,   250,   253,   260,     8,   292,   287,
       0,   293,   295,   284,   290,     0,    94,   141,   105,   107,
     111,     0,     0,    33,     0,    29,   276,   306,    24,   300,
     166,   170,   169,    76,   162,   163,   157,   158,     0,   155,
     143,     0,     0,   142,     0,   145,     0,   256,   252,   259,
     262,   289,   294,   279,     0,   113,     0,     0,    35,    25,
       0,     0,   305,   303,   304,     0,     0,     0,   299,   297,
     298,     0,    30,   159,   146,     0,   144,   138,   254,   264,
     258,   261,     0,   291,     0,     0,   134,     0,   308,   172,
       0,   302,   168,    29,   165,   148,   263,     0,   286,   140,
     136,   273,   307,   171,   301,   167,   288
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -386,  -386,  -386,  -386,  -386,   272,    60,  -386,  -386,   273,
    -386,  -174,  -386,  -386,  -386,  -386,  -191,  -198,  -386,  -386,
    -278,    -2,  -386,    80,  -386,    62,  -386,  -386,  -386,    22,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,    26,  -386,  -386,  -386,  -386,  -386,  -386,   -71,   117,
      46,  -386,  -386,     8,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,    19,
      25,  -386,  -386,  -180,  -386,  -386,  -386,  -385,  -386,    -5,
    -386,  -136,   186,    -6,  -386,  -386,    -8,   171,   190,   177,
    -386,   175,  -386,   173,  -386,   -60,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,   -79,   -30,  -386,  -386,    -7,  -386,   -16,  -386,  -386,
    -386,  -386,   304,  -386,  -386,  -386,  -386,  -386,  -386,  -101,
    -386,  -107,   240,  -386,  -100,  -103,  -386,  -386,   -17,  -386
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    41,     3,    42,   262,    43,    44,    45,
     194,   110,   291,   111,   347,   211,   295,   212,   288,   344,
      46,   231,   137,    48,    49,   257,   183,   184,    50,   138,
     125,   300,   301,    51,    52,    53,    54,    55,    56,    57,
      58,   337,   229,    59,    60,    61,   102,   278,   279,   106,
     280,   341,   107,   108,    62,   201,    63,    64,    65,    66,
     343,    67,    68,    69,   307,   365,   413,    70,   234,   131,
     308,   408,   409,   232,   361,   399,   442,   400,   401,    71,
     141,    72,    73,    74,    75,   153,    76,    77,    78,    79,
     159,    80,   162,    81,   167,    82,    83,    84,   169,    85,
     116,   117,   121,   113,    86,   122,   118,    87,   255,   322,
     375,   323,   324,   450,   451,    99,   195,    88,   114,   351,
     352,   216,    89,   268,   263,   264,   421,   453,   330,   331,
     381,   438,   439,   440,   432,   433,   434,    95,    90,   103
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    47,    94,   239,    98,   119,   100,    98,   101,   217,
     287,   266,   220,   105,    93,   128,   112,   115,   120,   270,
     123,   133,   282,   168,   126,   127,   360,   199,   296,   -29,
     130,   132,   298,   275,   207,   191,   302,   208,   186,   204,
     139,   214,   154,   157,   213,     7,   458,   431,   316,   222,
     459,     6,   461,   309,   186,   437,   462,     9,   276,   140,
     327,   208,    11,   214,   163,   158,   140,   406,   187,   277,
     160,   192,   188,   210,   196,   473,     4,   407,   475,   161,
     140,    20,    21,   405,    92,   -29,   209,    22,    23,    96,
      24,   334,    26,    92,   189,   251,     7,   210,   252,    28,
     350,   190,  -260,   164,   205,    97,   236,   250,   320,   358,
     104,   200,   328,   364,    32,    33,   165,   305,   166,   226,
     109,    38,    39,    40,   237,   253,   254,   380,   142,   214,
     369,   214,    20,    21,   215,   431,   241,   219,    22,    23,
     384,    24,   223,    26,   305,   244,   306,   129,   227,   154,
      28,   310,   311,   391,   392,   155,   156,   170,   387,   193,
     396,   185,   197,   198,   202,    32,    33,   259,   258,   203,
     206,   218,    38,    39,    40,   214,   267,   221,   222,   225,
     260,   274,   228,   410,   233,   265,   235,   415,   238,   353,
     242,   273,   318,   243,   256,   428,   261,   -11,   271,   269,
     272,   285,  -103,   186,   281,   423,    98,   293,   292,   290,
     171,   284,   286,   294,    98,   297,   289,   299,   397,   402,
     172,   304,   317,   303,   436,   326,   382,   312,   332,   333,
     173,   444,   174,   315,   446,   336,   447,   338,   340,   259,
     258,   345,   346,   277,   349,   354,   342,   456,   355,   321,
     357,   464,   363,   367,   368,   175,   372,   373,  -259,   329,
     176,   374,   376,   377,   335,   465,   383,   385,   389,   177,
     388,   178,   390,   393,   469,   470,   395,   179,   394,   411,
     414,   412,   180,   416,   181,   348,   418,   417,   182,   315,
     424,   -29,   427,   435,   356,   402,   429,   441,   140,   402,
     362,   402,    47,   445,   449,   402,   132,   452,   454,   455,
     457,   371,   460,   319,   463,   134,   135,   314,   325,   425,
     283,   339,   378,   379,   402,   245,   240,   402,   143,   359,
     370,   386,   366,   247,   248,   249,   144,   145,   146,   448,
       5,   147,     7,   148,     8,   246,   420,   136,   149,   150,
      10,   468,   403,    12,   474,   151,   152,     0,   472,    47,
     224,     0,     0,     0,     0,    14,     0,     0,    16,    17,
       0,   419,     0,     0,    19,   422,     0,     0,    20,    21,
       0,     0,     0,     0,    22,    23,   426,    24,   230,    26,
     430,     0,     0,    27,     0,     0,    28,     0,    29,    30,
       0,    31,     0,   443,     0,     0,     0,     0,     0,     0,
       0,    32,    33,   321,     0,     0,     0,    37,    38,    39,
      40,     5,     6,     7,     0,     8,     0,     0,     9,     0,
       0,    10,     0,    11,    12,     0,     0,     0,     0,     0,
       0,     7,    13,     0,   466,     0,    14,   329,    15,    16,
      17,     0,   471,     0,    18,    19,     0,     0,     0,    20,
      21,     0,   476,     0,     0,    22,    23,     0,    24,    25,
      26,     0,     0,     0,    27,     0,     0,    28,    21,    29,
      30,     0,    31,    22,    23,     0,    24,     0,    26,     0,
       0,     0,    32,    33,    34,    28,    35,    36,    37,    38,
      39,    40,     5,     6,     7,     0,     8,     0,     0,     9,
      32,    33,    10,   404,    11,    12,     0,    38,    39,    40,
       0,     0,     7,     0,     0,     0,     0,    14,     0,    15,
      16,    17,     0,     0,     0,    18,    19,     0,     0,     0,
      20,    21,     0,     0,     0,     0,    22,    23,     0,    24,
       0,    26,     0,     0,     0,    27,     0,     0,    28,    21,
      29,    30,     0,    31,    22,    23,     0,    24,     0,     0,
       0,     0,     0,    32,    33,    34,    28,    35,    36,    37,
      38,    39,    40,     5,     6,     7,     0,     8,     0,     0,
       9,    32,    33,    10,     0,    11,    12,     0,    38,    39,
      40,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      15,    16,    17,     0,     0,     0,    18,    19,     0,     0,
       0,    20,    21,     0,     0,     0,     0,    22,    23,     0,
      24,     0,    26,     0,     0,     0,    27,     0,     0,    28,
       0,    29,    30,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,    35,    36,
      37,    38,    39,    40,     5,     0,     7,     0,     8,     0,
       0,     0,     0,     0,    10,     0,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,     0,    16,    17,     0,     0,     0,     0,    19,     0,
       0,     0,    20,    21,     0,     0,     0,     0,    22,    23,
       7,    24,   313,    26,     0,     0,     0,    27,     0,     0,
      28,     0,    29,    30,     7,    31,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,    37,    38,    39,    40,     0,    20,    21,     0,     0,
       0,     0,    22,    23,     0,    24,     0,    26,     0,     0,
      20,    21,     7,     0,    28,     0,    22,    23,     0,    24,
       0,    26,     0,     0,   320,     7,     0,     0,    28,    32,
      33,     0,     0,     0,   124,    37,    38,    39,    40,     0,
     467,     0,     0,    32,    33,     0,     0,     0,    20,    21,
      38,    39,    40,     0,    22,    23,     0,    24,     0,    26,
       0,    20,    21,     7,     0,     0,    28,    22,    23,     0,
      24,     0,    26,     0,     0,     0,     7,     0,     0,    28,
       0,    32,    33,     0,     0,     0,     0,     0,    38,    39,
      40,     0,     0,     0,    32,    33,     0,     0,     0,    20,
      21,    38,    39,    40,     0,    22,    23,     0,    24,     0,
      26,     0,   398,    21,     0,     0,     0,    28,    22,    23,
       0,    24,     0,    26,     0,     0,     0,     0,     0,     0,
      28,     0,    32,    33,     0,     0,     0,     0,     0,    38,
      39,    40,     0,     0,     0,    32,    33,     0,     0,     0,
       0,     0,    38,    39,    40
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   139,    12,    22,    14,    15,    15,   112,
     208,   191,   115,    18,     6,    31,    21,    22,    23,   193,
      26,    37,   202,    83,    29,    30,   304,    21,   219,    15,
      35,    36,   223,    51,    24,    15,   227,    51,    21,     6,
      40,    34,    10,    47,    15,     9,   431,    40,    27,    34,
     435,     8,   437,   233,    21,    40,   441,    14,    76,    59,
      24,    51,    19,    34,    22,    69,    59,     6,    51,    87,
      54,    51,    55,    87,    42,   460,     0,    16,   463,    63,
      59,    45,    46,   361,    87,    71,    76,    51,    52,    87,
      54,   271,    56,    87,     9,    21,     9,    87,    24,    63,
     291,    16,    15,    61,   109,    87,    55,   167,    21,   300,
      87,   103,    76,    27,    78,    79,    74,    31,    76,   124,
      15,    85,    86,    87,    73,    51,    52,    30,     5,    34,
     310,    34,    45,    46,   112,    40,   142,   115,    51,    52,
     331,    54,   120,    56,    31,   153,    33,    15,   126,    10,
      63,    15,    16,    26,    27,    12,     4,    78,   338,    51,
     351,    16,    42,    41,    15,    78,    79,   184,   184,    16,
      15,    67,    85,    86,    87,    34,   192,    71,    34,    72,
     185,   197,    16,   363,    15,   190,     6,   367,    16,   292,
      56,   196,   252,    42,    30,   393,    87,    71,    15,    71,
      16,   206,    41,    21,    16,   385,   214,   214,   213,    30,
       3,    87,    87,    16,   222,   222,    87,    16,   354,   355,
      13,    43,    87,   228,   398,    71,   329,   235,    71,    71,
      23,   411,    25,   238,   414,    16,   416,    15,     6,   256,
     256,    71,    16,    87,    16,    42,    87,   427,    42,   254,
      16,   442,    15,    15,    27,    48,    71,    21,    15,   264,
      53,    72,    15,    55,   272,   445,    16,    15,    87,    62,
      71,    64,    16,    16,   454,   455,    16,    70,    24,    15,
      15,    33,    75,    15,    77,   290,    16,    21,    81,   294,
      27,    71,    15,    15,   299,   431,    87,    16,    59,   435,
     305,   437,   304,    15,    15,   441,   311,    16,    15,    15,
      15,   316,    15,   253,    16,    43,    43,   237,   256,   390,
     203,   275,   327,   328,   460,   154,   140,   463,    29,   303,
     311,   336,   307,   156,   159,   162,    37,    38,    39,   418,
       7,    42,     9,    44,    11,   155,   376,    43,    49,    50,
      17,   452,   357,    20,   461,    56,    57,    -1,   458,   361,
     120,    -1,    -1,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,   376,    -1,    -1,    41,   380,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    51,    52,   391,    54,    55,    56,
     395,    -1,    -1,    60,    -1,    -1,    63,    -1,    65,    66,
      -1,    68,    -1,   408,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,   418,    -1,    -1,    -1,    84,    85,    86,
      87,     7,     8,     9,    -1,    11,    -1,    -1,    14,    -1,
      -1,    17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    28,    -1,   449,    -1,    32,   452,    34,    35,
      36,    -1,   457,    -1,    40,    41,    -1,    -1,    -1,    45,
      46,    -1,   467,    -1,    -1,    51,    52,    -1,    54,    55,
      56,    -1,    -1,    -1,    60,    -1,    -1,    63,    46,    65,
      66,    -1,    68,    51,    52,    -1,    54,    -1,    56,    -1,
      -1,    -1,    78,    79,    80,    63,    82,    83,    84,    85,
      86,    87,     7,     8,     9,    -1,    11,    -1,    -1,    14,
      78,    79,    17,    18,    19,    20,    -1,    85,    86,    87,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    32,    -1,    34,
      35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    56,    -1,    -1,    -1,    60,    -1,    -1,    63,    46,
      65,    66,    -1,    68,    51,    52,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    78,    79,    80,    63,    82,    83,    84,
      85,    86,    87,     7,     8,     9,    -1,    11,    -1,    -1,
      14,    78,    79,    17,    -1,    19,    20,    -1,    85,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,    63,
      -1,    65,    66,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    -1,    82,    83,
      84,    85,    86,    87,     7,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
       9,    54,    55,    56,    -1,    -1,    -1,    60,    -1,    -1,
      63,    -1,    65,    66,     9,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    84,    85,    86,    87,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    56,    -1,    -1,
      45,    46,     9,    -1,    63,    -1,    51,    52,    -1,    54,
      -1,    56,    -1,    -1,    21,     9,    -1,    -1,    63,    78,
      79,    -1,    -1,    -1,    69,    84,    85,    86,    87,    -1,
      24,    -1,    -1,    78,    79,    -1,    -1,    -1,    45,    46,
      85,    86,    87,    -1,    51,    52,    -1,    54,    -1,    56,
      -1,    45,    46,     9,    -1,    -1,    63,    51,    52,    -1,
      54,    -1,    56,    -1,    -1,    -1,     9,    -1,    -1,    63,
      -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    45,
      46,    85,    86,    87,    -1,    51,    52,    -1,    54,    -1,
      56,    -1,    45,    46,    -1,    -1,    -1,    63,    51,    52,
      -1,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,    92,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    28,    32,    34,    35,    36,    40,    41,
      45,    46,    51,    52,    54,    55,    56,    60,    63,    65,
      66,    68,    78,    79,    80,    82,    83,    84,    85,    86,
      87,    91,    93,    95,    96,    97,   108,   109,   111,   112,
     116,   121,   122,   123,   124,   125,   126,   127,   128,   131,
     132,   133,   142,   144,   145,   146,   147,   149,   150,   151,
     155,   167,   169,   170,   171,   172,   174,   175,   176,   177,
     179,   181,   183,   184,   185,   187,   192,   195,   205,   210,
     226,   167,    87,   141,   167,   225,    87,    87,   174,   203,
     174,   203,   134,   227,    87,   167,   137,   140,   141,    15,
      99,   101,   167,   191,   206,   167,   188,   189,   194,   226,
     167,   190,   193,   171,    69,   118,   167,   167,   205,    15,
     167,   157,   167,   205,    93,    97,   210,   110,   117,    40,
      59,   168,     5,    29,    37,    38,    39,    42,    44,    49,
      50,    56,    57,   173,    10,    12,     4,    47,    69,   178,
      54,    63,   180,    22,    61,    74,    76,   182,   183,   186,
      78,     3,    13,    23,    25,    48,    53,    62,    64,    70,
      75,    77,    81,   114,   115,    16,    21,    51,    55,     9,
      16,    15,    51,    51,    98,   204,    42,    42,    41,    21,
     141,   143,    15,    16,     6,   167,    15,    24,    51,    76,
      87,   103,   105,    15,    34,   117,   209,   223,    67,   117,
     223,    71,    34,   117,   220,    72,   167,   117,    16,   130,
      55,   109,   161,    15,   156,     6,    55,    73,    16,   169,
     170,   171,    56,    42,   174,   175,   176,   177,   179,   181,
     183,    21,    24,    51,    52,   196,    30,   113,   205,   226,
     167,    87,    94,   212,   213,   167,   161,   205,   211,    71,
      99,    15,    16,   167,   205,    51,    76,    87,   135,   136,
     138,    16,   161,   137,    87,   167,    87,   105,   106,    87,
      30,   100,   167,   203,    16,   104,   104,   203,   104,    16,
     119,   120,   104,   167,    43,    31,    33,   152,   158,   161,
      15,    16,   174,    55,   111,   167,    27,    87,   183,    94,
      21,   167,   197,   199,   200,   113,    71,    24,    76,   167,
     216,   217,    71,    71,   161,   174,    16,   129,    15,   138,
       6,   139,    87,   148,   107,    71,    16,   102,   167,    16,
     104,   207,   208,   223,    42,    42,   167,    16,   104,   129,
     108,   162,   167,    15,    27,   153,   158,    15,    27,   161,
     157,   167,    71,    21,    72,   198,    15,    55,   167,   167,
      30,   218,   223,    16,   104,    15,   167,   161,    71,    87,
      16,    26,    27,    16,    24,    16,   104,   169,    45,   163,
     165,   166,   169,   167,    18,   108,     6,    16,   159,   160,
     161,    15,    33,   154,    15,   161,    15,    21,    16,   167,
     200,   214,   167,   161,    27,   136,   167,    15,   105,    87,
     167,    40,   222,   223,   224,    15,    99,    40,   219,   220,
     221,    16,   164,   167,   161,    15,   161,   161,   199,    15,
     201,   202,    16,   215,    15,    15,   161,    15,   165,   165,
      15,   165,   165,    16,   104,   161,   167,    24,   217,   161,
     161,   167,   222,   165,   219,   165,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   122,   123,   123,   123,   123,   123,   124,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   130,   131,   131,
     132,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   146,   146,
     146,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   182,   182,   183,   183,   184,   184,
     184,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     187,   187,   187,   188,   188,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   196,   197,   197,   198,   198,   199,   199,   199,   200,
     200,   201,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   211,   211,   212,   213,   213,   214,   214,   215,   215,
     216,   216,   216,   217,   217,   218,   218,   219,   219,   220,
     220,   221,   221,   222,   222,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     0,     3,     2,     1,
       0,     1,     3,     3,     2,     3,     0,     1,     1,     4,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     3,     0,     3,     0,     3,     2,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     1,     2,     0,     3,     0,     1,     1,
       2,     4,     2,     2,     1,     3,     1,     3,     1,     3,
       1,     3,     2,     3,     0,     1,     3,     1,     3,     3,
       3,     0,     5,     2,     4,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     8,     5,     5,     0,     7,     4,
       9,     6,     6,     6,     4,     3,     3,     0,     3,     0,
       5,     3,     0,     3,     1,     3,     1,     1,     1,     2,
       0,     1,     4,     2,     1,     3,     1,     3,     2,     1,
       1,     4,     3,     2,     1,     4,     0,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     4,     2,     2,     0,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     2,     1,     2,     3,     2,     3,     4,     3,     3,
       3,     2,     3,     2,     3,     0,     3,     1,     4,     1,
       0,     1,     0,     2,     1,     3,     2,     3,     0,     3,
       2,     4,     2,     5,     0,     1,     2,     1,     2,     7,
       4,     1,     0,     2,     3,     0,     3,     0,     3,     0,
       2,     4,     2,     2,     3,     1,     0,     1,     1,     5,
       4,     3,     2,     1,     1,     5,     4,     3,     2,     1,
       3,     2,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex ();
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 60 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1908 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 62 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[0].node)){
				(yyvsp[0].node)->eval();
			}
		}
#line 1918 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 70 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1924 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 73 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1930 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 74 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1936 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = (yyvsp[0].vec); }
#line 1942 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = NULL; }
#line 1948 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 90 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new FuncNode((yyvsp[-3].id), (yyvsp[0].node), *(yyvsp[-2].vec));
			pool.add((yyval.node));
			delete [] (yyvsp[-3].id);
			delete (yyvsp[-2].vec);
		}
#line 1959 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 98 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = (yyvsp[-1].vec); }
#line 1965 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 99 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = new std::vector<Node*>(); }
#line 1971 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 102 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = NULL; }
#line 1977 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 104 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.vec) = (yyvsp[-3].vec);
			(yyval.vec)->push_back((yyvsp[-2].node));
		}
#line 1986 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 115 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.vec) = (yyvsp[-3].vec);
			(yyval.vec)->push_back((yyvsp[-2].node));
		}
#line 1995 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.vec) = new std::vector<Node*>();
			(yyval.vec)->reserve(20);
		}
#line 2004 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 134 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node)=NULL; }
#line 2010 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 135 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2016 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 139 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new IdentNode((yyvsp[0].id));
			pool.add((yyval.node));
			delete [] (yyvsp[0].id);
		}
#line 2026 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 144 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2032 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 155 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2038 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 156 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2044 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 160 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 2050 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 167 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 2056 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 168 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) =(yyvsp[0].node);}
#line 2062 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 169 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2068 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 170 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2074 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 171 "includes/parse.y" /* yacc.c:1646  */
    { if((yyvsp[0].node)) (yyval.node) = (yyvsp[0].node); }
#line 2080 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 172 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2086 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 173 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2092 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 174 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2098 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 175 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2104 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 178 "includes/parse.y" /* yacc.c:1646  */
    {
			switch((yyvsp[-1].intNumber)){
				case PLUSEQUAL:
					(yyval.node) = new PlusEqualsBinaryNode((yyvsp[-2].node), (yyvsp[0].node)); 
					pool.add((yyval.node));
					break;
				case MINEQUAL:
					(yyval.node) = new MinusEqualsBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
					pool.add((yyval.node));
					break;
				case STAREQUAL:
					(yyval.node) = new StarEqualsBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
					pool.add((yyval.node));	
					break;
				case SLASHEQUAL:
					(yyval.node) = new DivEqualsBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
					pool.add((yyval.node));					
					break;
				case PERCENTEQUAL:
					(yyval.node) = new ModEqualsBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
					pool.add((yyval.node));
					break;
				case DOUBLESLASHEQUAL:
					(yyval.node) = new DivEqualsBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
					pool.add((yyval.node));
					break;
				case DOUBLESTAREQUAL:
					(yyval.node) = new PowEqualsBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
					pool.add((yyval.node));
					break;

			}
	  }
#line 2142 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 212 "includes/parse.y" /* yacc.c:1646  */
    { 
			if( (yyvsp[0].node)) { (yyval.node) = new AsgBinaryNode((yyvsp[-1].node), (yyvsp[0].node)); pool.add((yyval.node));}
			else (yyval.node) = (yyvsp[-1].node);
			
		}
#line 2152 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 220 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2158 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 223 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2164 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 224 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2170 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 227 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = PLUSEQUAL; }
#line 2176 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 228 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = MINEQUAL; }
#line 2182 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 229 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = STAREQUAL; }
#line 2188 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 230 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = SLASHEQUAL; }
#line 2194 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 231 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = PERCENTEQUAL; }
#line 2200 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 232 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2206 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 233 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2212 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 234 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2218 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 235 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2224 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 236 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2230 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 237 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = DOUBLESTAREQUAL; }
#line 2236 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 238 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = DOUBLESLASHEQUAL; }
#line 2242 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 242 "includes/parse.y" /* yacc.c:1646  */
    { 
			(yyval.node) = new printNode((yyvsp[0].node));
			pool.add((yyval.node));
		}
#line 2251 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 246 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;}
#line 2257 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 253 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node);}
#line 2263 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 254 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2269 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 258 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2275 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 262 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2281 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 265 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2287 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 268 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2293 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 271 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;  }
#line 2299 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 272 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;  }
#line 2305 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 273 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);  }
#line 2311 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 274 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;  }
#line 2317 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 275 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = NULL;  }
#line 2323 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 278 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2329 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 281 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2335 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 284 "includes/parse.y" /* yacc.c:1646  */
    {  (yyval.node) = new returnNode((yyvsp[0].node)); pool.add((yyval.node)); }
#line 2341 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 286 "includes/parse.y" /* yacc.c:1646  */
    { 
			(yyval.node) = new returnNode(nullptr);
			pool.add((yyval.node));
			//TableManager::getInstance().setReturn(true);
		}
#line 2351 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 296 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2357 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 297 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2363 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 312 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2369 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 315 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2375 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 351 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2381 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 358 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2387 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 359 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2393 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 362 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2399 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 363 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2405 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 366 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2411 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 367 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2417 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 368 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2423 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 369 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2429 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 370 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2435 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 371 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2441 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 372 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2447 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 373 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2453 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 377 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new ifNode((yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
#line 2462 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 382 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new ifNode((yyvsp[-3].node), (yyvsp[-1].node));
			pool.add((yyval.node));
		}
#line 2471 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 439 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2477 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 441 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new SuiteNode(*(yyvsp[-1].vec));
			delete (yyvsp[-1].vec);
			pool.add((yyval.node));
			
		}
#line 2488 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 450 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.vec) = (yyvsp[-1].vec);
			(yyval.vec)->push_back((yyvsp[0].node));
			//pool.add($2);
		}
#line 2498 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 456 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.vec) = new std::vector<Node*>();
			(yyval.vec)->reserve(20);
			(yyval.vec)->push_back((yyvsp[0].node));
			//pool.add($$);
		}
#line 2509 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 480 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node);}
#line 2515 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 481 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2521 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 484 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2527 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 485 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2533 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 488 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2539 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 492 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2545 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 496 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2551 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 497 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2557 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 500 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2563 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 502 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new compNode((yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-1].intNumber));
			pool.add((yyval.node)); 
		}
#line 2572 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 508 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 1; }
#line 2578 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 509 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 2; }
#line 2584 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 510 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 3; }
#line 2590 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 511 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 4; }
#line 2596 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 512 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 5; }
#line 2602 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 513 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2608 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 514 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 6; }
#line 2614 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 515 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2620 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 516 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2626 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 517 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2632 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 518 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2638 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 521 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2644 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 525 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2650 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 529 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2656 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 533 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2662 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 534 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2668 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 541 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2674 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 542 "includes/parse.y" /* yacc.c:1646  */
    {
		if( (yyvsp[-1].intNumber) == PLUS ){
				(yyval.node) = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));			
			}
		else if( (yyvsp[-1].intNumber) == MINUS ){
				(yyval.node) = new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));						
		}
		}
#line 2689 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 554 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = PLUS; }
#line 2695 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 555 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = MINUS; }
#line 2701 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 558 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2707 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 560 "includes/parse.y" /* yacc.c:1646  */
    {
			if( (yyvsp[-1].intNumber) == STAR ){
				(yyval.node) = new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}
			else if( (yyvsp[-1].intNumber) == SLASH ){
				(yyval.node) = new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}
			else if( (yyvsp[-1].intNumber) == PERCENT ){
				(yyval.node) = new ModBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}
			else if( (yyvsp[-1].intNumber) == DOUBLESLASH ){
				(yyval.node) = new IntdivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
				pool.add((yyval.node));
			}
		}
#line 2730 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 580 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = STAR; }
#line 2736 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 581 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = SLASH; }
#line 2742 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 582 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = PERCENT; }
#line 2748 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 583 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = DOUBLESLASH; }
#line 2754 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 587 "includes/parse.y" /* yacc.c:1646  */
    {
			if( (yyvsp[-1].intNumber) == PLUS ){
				(yyval.node) = new PlusUnaryNode((yyvsp[0].node));
				pool.add((yyval.node));
			}
			else if( (yyvsp[-1].intNumber) == MINUS ){
				(yyval.node) = new MinusUnaryNode((yyvsp[0].node));
				pool.add((yyval.node));
			}
		}
#line 2769 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 597 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2775 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 600 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = PLUS; }
#line 2781 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 601 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = MINUS; }
#line 2787 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 602 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2793 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 606 "includes/parse.y" /* yacc.c:1646  */
    { 
			(yyval.node) = new PowBinaryNode((yyvsp[-3].node), (yyvsp[0].node));
			pool.add((yyval.node));
		}
#line 2802 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 611 "includes/parse.y" /* yacc.c:1646  */
    { 
			if((yyvsp[0].vec)){ 
				std::string n = reinterpret_cast<IdentNode*>((yyvsp[-1].node))->getIdent();
				(yyval.node) = new CallNode(n, *(yyvsp[0].vec));
				//pool.add($$);
				delete (yyvsp[0].vec);
				//$$->eval();
				pool.add((yyval.node));
			}
			else{
				(yyval.node) = (yyvsp[-1].node);
				}
		}
#line 2820 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 626 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = (yyvsp[0].vec); }
#line 2826 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 627 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = NULL; }
#line 2832 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 630 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2838 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 631 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2844 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 632 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2850 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 633 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2856 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 635 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new IdentNode((yyvsp[0].id));
			delete [] (yyvsp[0].id);	
			pool.add((yyval.node));
		}
#line 2866 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 641 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new IntLiteral((yyvsp[0].intNumber));
			pool.add((yyval.node));
		}
#line 2875 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 646 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
			pool.add((yyval.node));
		}
#line 2884 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 650 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2890 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 653 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2896 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 654 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2902 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 657 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2908 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 658 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2914 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 677 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2920 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 678 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node);}
#line 2926 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 686 "includes/parse.y" /* yacc.c:1646  */
    {
			if((yyvsp[-1].vec)) (yyval.vec) = (yyvsp[-1].vec);
			else (yyval.vec) = new std::vector<Node*>(); 
		}
#line 2935 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 690 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = NULL; }
#line 2941 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 691 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = NULL; }
#line 2947 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 727 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 2953 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 728 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2959 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 756 "includes/parse.y" /* yacc.c:1646  */
    { 
			(yyval.vec) = (yyvsp[-1].vec); 
			(yyval.vec)->push_back((yyvsp[0].node));
		}
#line 2968 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 763 "includes/parse.y" /* yacc.c:1646  */
    {
			(yyval.vec) = (yyvsp[-2].vec);
			(yyval.vec)->push_back((yyvsp[-1].node));
		}
#line 2977 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 768 "includes/parse.y" /* yacc.c:1646  */
    { 
			(yyval.vec) = new std::vector<Node*>();
			(yyval.vec)->reserve(10);
		}
#line 2986 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 782 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2992 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 783 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2998 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 784 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3004 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 787 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[-1].node); }
#line 3010 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 788 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3016 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 823 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3022 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 312:
#line 824 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3028 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 3032 "parse.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
  return yyresult;
}
#line 831 "includes/parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}

