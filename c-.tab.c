/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 7 "c-.y"

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"

int yyerror(char *message);
TreeNode * parse(void);

#define YYSTYPE TreeNode *
static char * savedName;
static int savedLineNo;
static TreeNode * savedTree;
int pn;

/* Line 371 of yacc.c  */
#line 85 "c-.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "c-.tab.h".  */
#ifndef YY_YY_C_TAB_H_INCLUDED
# define YY_YY_C_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     INT = 260,
     RETURN = 261,
     VOID = 262,
     WHILE = 263,
     ID = 264,
     NUM = 265,
     LEQ = 266,
     LT = 267,
     BEQ = 268,
     BT = 269,
     EQ = 270,
     NEQ = 271,
     SEMI = 272,
     LPAREN = 273,
     RPAREN = 274,
     LCHAVE = 275,
     RCHAVE = 276,
     LCOLCH = 277,
     RCOLCH = 278,
     ERROR = 279,
     ENDFILE = 280,
     STRING = 281,
     STR = 282,
     COMENTARIO = 283,
     MINUS = 284,
     PLUS = 285,
     COMMA = 286,
     DIV = 287,
     MUL = 288,
     ASSIGN = 289
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_C_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 185 "c-.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   104

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNRULES -- Number of states.  */
#define YYNSTATES  108

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    25,
      27,    29,    31,    32,    40,    42,    44,    48,    50,    53,
      58,    63,    66,    68,    71,    73,    75,    77,    79,    81,
      83,    86,    88,    94,   102,   108,   111,   115,   119,   121,
     123,   128,   132,   134,   136,   138,   140,   142,   144,   146,
     150,   152,   154,   156,   160,   162,   164,   166,   170,   172,
     174,   176,   178,   183,   185,   187,   191,   193
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    37,    -1,    37,    38,    -1,    38,    -1,
      39,    -1,    41,    -1,    40,     9,    17,    -1,    40,     9,
      22,    10,    23,    17,    -1,     5,    -1,    26,    -1,     7,
      -1,    -1,    40,     9,    42,    18,    43,    19,    46,    -1,
      44,    -1,     7,    -1,    44,    31,    45,    -1,    45,    -1,
      40,     9,    -1,    40,     9,    22,    23,    -1,    20,    47,
      48,    21,    -1,    47,    39,    -1,    66,    -1,    48,    49,
      -1,    66,    -1,    50,    -1,    46,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    17,    -1,    17,    -1,     3,    18,
      54,    19,    49,    -1,     3,    18,    54,    19,    49,     4,
      49,    -1,     8,    18,    54,    19,    49,    -1,     6,    17,
      -1,     6,    54,    17,    -1,    55,    34,    54,    -1,    56,
      -1,     9,    -1,     9,    22,    54,    23,    -1,    58,    57,
      58,    -1,    58,    -1,    11,    -1,    12,    -1,    14,    -1,
      13,    -1,    15,    -1,    16,    -1,    58,    59,    60,    -1,
      60,    -1,    30,    -1,    29,    -1,    60,    61,    62,    -1,
      62,    -1,    33,    -1,    32,    -1,    18,    54,    19,    -1,
      55,    -1,    63,    -1,    10,    -1,    27,    -1,     9,    18,
      64,    19,    -1,    65,    -1,    66,    -1,    65,    31,    54,
      -1,    54,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    38,    38,    40,    49,    51,    52,    54,    60,    67,
      71,    75,    80,    80,    90,    91,    98,   107,   109,   115,
     122,   128,   137,   139,   148,   150,   151,   152,   153,   154,
     156,   157,   159,   164,   171,   177,   181,   186,   191,   195,
     201,   209,   215,   217,   221,   225,   229,   233,   237,   242,
     248,   250,   254,   259,   265,   267,   270,   273,   274,   275,
     276,   281,   286,   292,   292,   294,   303,   305
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "INT", "RETURN", "VOID",
  "WHILE", "ID", "NUM", "LEQ", "LT", "BEQ", "BT", "EQ", "NEQ", "SEMI",
  "LPAREN", "RPAREN", "LCHAVE", "RCHAVE", "LCOLCH", "RCOLCH", "ERROR",
  "ENDFILE", "STRING", "STR", "COMENTARIO", "MINUS", "PLUS", "COMMA",
  "DIV", "MUL", "ASSIGN", "$accept", "program", "declar_list", "declar",
  "var_declar", "type_spec", "fun_declar", "$@1", "params", "param_list",
  "param", "compound_stmt", "local_declar", "stmt_list", "stmt",
  "expr_stmt", "selection_stmt", "iteration_stmt", "return_stmt", "expr",
  "var", "simple_expr", "relop", "additive_expr", "addop", "term", "mulop",
  "factor", "call", "args", "arg_list", "empty", YY_NULL
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
     285,   286,   287,   288,   289
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    39,    40,
      40,    40,    42,    41,    43,    43,    44,    44,    45,    45,
      46,    47,    47,    48,    48,    49,    49,    49,    49,    49,
      50,    50,    51,    51,    52,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    57,    57,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    63,    64,    64,    65,    65,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     1,     0,     7,     1,     1,     3,     1,     2,     4,
       4,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       2,     1,     5,     7,     5,     2,     3,     3,     1,     1,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     1,     1,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    11,    10,     0,     2,     4,     5,     0,     6,
       1,     3,    12,     7,     0,     0,     0,     0,     0,    11,
       0,     0,    14,    17,     8,    18,     0,     0,     0,    67,
      13,    16,    19,    67,    22,    21,     0,     0,    24,     0,
       0,     0,     0,    39,    60,    31,     0,    20,    61,    26,
      23,    25,    27,    28,    29,     0,    58,    38,    42,    50,
      54,    59,     0,    35,     0,     0,    67,     0,     0,    30,
       0,    43,    44,    46,    45,    47,    48,    52,    51,     0,
       0,    56,    55,     0,     0,    36,     0,    66,     0,    63,
      64,     0,    57,    37,    58,    41,    49,    53,     0,     0,
      62,     0,    40,    32,    34,    65,     0,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,     9,    15,    21,    22,
      23,    49,    33,    37,    50,    51,    52,    53,    54,    55,
      56,    57,    79,    58,    80,    59,    83,    60,    61,    88,
      89,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -93
static const yytype_int8 yypact[] =
{
      -3,   -93,   -93,   -93,    17,    -3,   -93,   -93,    13,   -93,
     -93,   -93,   -14,   -93,    22,    31,    12,    36,    48,    55,
      59,    56,    42,   -93,   -93,    57,    58,    -3,    60,   -93,
     -93,   -93,   -93,    -3,   -93,   -93,    71,    10,   -93,   -14,
      64,    49,    66,    24,   -93,   -93,    54,   -93,   -93,   -93,
     -93,   -93,   -93,   -93,   -93,    68,    52,   -93,    40,   -23,
     -93,   -93,    54,   -93,    70,    54,    54,    54,    69,   -93,
      54,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,    54,
      54,   -93,   -93,    54,    72,   -93,    73,   -93,    74,    63,
     -93,    67,   -93,   -93,   -93,    15,   -23,   -93,    30,    30,
     -93,    54,   -93,    85,   -93,   -93,    30,   -93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -93,   -93,   -93,    90,    65,    44,   -93,   -93,   -93,   -93,
      75,    77,   -93,   -93,   -92,   -93,   -93,   -93,   -93,   -41,
     -68,   -93,   -93,    18,   -93,    16,   -93,    21,   -93,   -93,
     -93,   -32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -16
static const yytype_int8 yytable[] =
{
      64,    38,     1,    13,     2,    68,   103,   104,    14,    81,
      82,    94,    94,    40,   107,    94,    41,    10,    42,    43,
      44,    84,    12,     3,    86,    87,    91,    45,    46,    93,
      29,    47,    16,    40,    90,    18,    41,    48,    42,    43,
      44,     1,    66,    19,    77,    78,    67,    45,    46,    17,
      29,    71,    72,    73,    74,    75,    76,    48,    43,    44,
     105,    20,     3,    43,    44,    24,    63,    46,    25,    77,
      78,    20,    46,    27,   -15,    26,    48,    36,    29,    28,
      39,    48,    62,    32,    65,    69,    70,    85,    92,   106,
     102,    98,    99,   100,   101,    11,    96,    95,    35,     0,
       0,     0,    31,    30,    97
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-93)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      41,    33,     5,    17,     7,    46,    98,    99,    22,    32,
      33,    79,    80,     3,   106,    83,     6,     0,     8,     9,
      10,    62,     9,    26,    65,    66,    67,    17,    18,    70,
      20,    21,    10,     3,    66,    23,     6,    27,     8,     9,
      10,     5,    18,     7,    29,    30,    22,    17,    18,    18,
      20,    11,    12,    13,    14,    15,    16,    27,     9,    10,
     101,    17,    26,     9,    10,    17,    17,    18,     9,    29,
      30,    27,    18,    31,    19,    19,    27,    33,    20,    22,
       9,    27,    18,    23,    18,    17,    34,    17,    19,     4,
      23,    19,    19,    19,    31,     5,    80,    79,    33,    -1,
      -1,    -1,    27,    26,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     7,    26,    36,    37,    38,    39,    40,    41,
       0,    38,     9,    17,    22,    42,    10,    18,    23,     7,
      40,    43,    44,    45,    17,     9,    19,    31,    22,    20,
      46,    45,    23,    47,    66,    39,    40,    48,    66,     9,
       3,     6,     8,     9,    10,    17,    18,    21,    27,    46,
      49,    50,    51,    52,    53,    54,    55,    56,    58,    60,
      62,    63,    18,    17,    54,    18,    18,    22,    54,    17,
      34,    11,    12,    13,    14,    15,    16,    29,    30,    57,
      59,    32,    33,    61,    54,    17,    54,    54,    64,    65,
      66,    54,    19,    54,    55,    58,    60,    62,    19,    19,
      19,    31,    23,    49,    49,    54,     4,    49
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1787 of yacc.c  */
#line 38 "c-.y"
    { savedTree = (yyvsp[(1) - (1)]);}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 41 "c-.y"
    { YYSTYPE t = (yyvsp[(1) - (2)]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = (yyvsp[(2) - (2)]);
                     (yyval) = (yyvsp[(1) - (2)]); }
                   else (yyval) = (yyvsp[(2) - (2)]);
                 }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 49 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 51 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 52 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 55 "c-.y"
    { (yyval) = newDeclNode(varK);
                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                   (yyval)->attr.name = copyString(st_pop());
                   (yyval)->array_size = 0;
                 }
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 61 "c-.y"
    { (yyval) = newDeclNode(varK);
                   (yyval)->child[0] = (yyvsp[(1) - (6)]);
                   (yyval)->array_size = atoi(st_pop());
                   (yyval)->attr.name = copyString(st_pop());
                 }
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 68 "c-.y"
    { (yyval) = newExpNode(TypeK);
              (yyval)->type = Integer;
            }
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 72 "c-.y"
    { (yyval) = newExpNode(TypeK);
	      (yyval)->type = String;
	    }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 76 "c-.y"
    { (yyval) = newExpNode(TypeK);
              (yyval)->type = Void;
            }
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 80 "c-.y"
    { savedLineNo = lineno;}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 82 "c-.y"
    { (yyval) = newDeclNode(funK);
                   (yyval)->child[0] = (yyvsp[(1) - (7)]);
                   (yyval)->child[1] = (yyvsp[(5) - (7)]);
                   (yyval)->child[2] = (yyvsp[(7) - (7)]);
                   (yyval)->attr.name = copyString(st_pop());
		   (yyval)->lineno = savedLineNo;
                 }
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 90 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 92 "c-.y"
    { (yyval) = newDeclNode(paramK);
		(yyval)->array_size = -1;
		(yyval)->type = Void;
		(yyval)->paramnum = 0;
            }
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 99 "c-.y"
    { YYSTYPE t = (yyvsp[(1) - (3)]);
                   if (t != NULL)
                       { while (t->sibling != NULL)
                           t = t->sibling;
                         t->sibling = (yyvsp[(3) - (3)]);
                         (yyval) = (yyvsp[(1) - (3)]); }
                   else (yyval) = (yyvsp[(3) - (3)]);
                 }
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 107 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 110 "c-.y"
    { (yyval) = newDeclNode(paramK);
                   (yyval)->child[0] = (yyvsp[(1) - (2)]);
                   (yyval)->attr.name = copyString(st_pop());
                   (yyval)->array_size = 0;
                 }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 116 "c-.y"
    { (yyval) = newDeclNode(paramK);
                   (yyval)->child[0] = (yyvsp[(1) - (4)]);
                   (yyval)->attr.name = copyString(st_pop());
		   (yyval)->array_size = 1;
                 }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 123 "c-.y"
    { (yyval) = newStmtNode(CompoundK);
                   (yyval)->child[0] = (yyvsp[(2) - (4)]);
                   (yyval)->child[1] = (yyvsp[(3) - (4)]);
                 }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 129 "c-.y"
    { YYSTYPE t = (yyvsp[(1) - (2)]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = (yyvsp[(2) - (2)]);
                     (yyval) = (yyvsp[(1) - (2)]); }
                     else (yyval) = (yyvsp[(2) - (2)]);
                 }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 137 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 140 "c-.y"
    { YYSTYPE t = (yyvsp[(1) - (2)]);
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = (yyvsp[(2) - (2)]);
                     (yyval) = (yyvsp[(1) - (2)]); }
                     else (yyval) = (yyvsp[(2) - (2)]);
                 }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 148 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 150 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 151 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 152 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 153 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 154 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 156 "c-.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 157 "c-.y"
    { (yyval) = NULL; }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 160 "c-.y"
    { (yyval) = newStmtNode(IfK);
                 (yyval)->child[0] = (yyvsp[(3) - (5)]);
                 (yyval)->child[1] = (yyvsp[(5) - (5)]);
               }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 165 "c-.y"
    { (yyval) = newStmtNode(IfK);
                 (yyval)->child[0] = (yyvsp[(3) - (7)]);
                 (yyval)->child[1] = (yyvsp[(5) - (7)]);
                 (yyval)->child[2] = (yyvsp[(7) - (7)]);
               }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 172 "c-.y"
    { (yyval) = newStmtNode(WhileK);
                   (yyval)->child[0] = (yyvsp[(3) - (5)]);
                   (yyval)->child[1] = (yyvsp[(5) - (5)]);
                 }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 178 "c-.y"
    { (yyval) = newStmtNode(ReturnK);
		   (yyval)->type = Void;
		 }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 182 "c-.y"
    { (yyval) = newStmtNode(ReturnK);
                   (yyval)->child[0] = (yyvsp[(2) - (3)]);
                 }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 187 "c-.y"
    { (yyval) = newStmtNode(AssignK);
                 (yyval)->child[0] = (yyvsp[(1) - (3)]);
                 (yyval)->child[1] = (yyvsp[(3) - (3)]);
               }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 192 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]);
               }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 196 "c-.y"
    { (yyval) = newExpNode(IdK);
                 (yyval)->attr.name = copyString(st_pop());
		 (yyval)->array_size = 0;
		 (yyval)->type = Integer;
               }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 202 "c-.y"
    { (yyval) = newExpNode(IdK);
                 (yyval)->attr.name = copyString(st_pop());
                 (yyval)->child[0] = (yyvsp[(3) - (4)]);
		 (yyval)->array_size = 1;
		 (yyval)->type = Integer;
               }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 210 "c-.y"
    { (yyval) = newExpNode(CalcK);
                  (yyval)->child[0] = (yyvsp[(1) - (3)]);
                  (yyval)->child[1] = (yyvsp[(2) - (3)]);
                  (yyval)->child[2] = (yyvsp[(3) - (3)]);
                }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 215 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 218 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = LEQ;
                }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 222 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = LT;
                }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 226 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = BT;
                }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 230 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = BEQ;
                }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 234 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = EQ;
                }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 238 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = NEQ;
                }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 243 "c-.y"
    { (yyval) = newExpNode(CalcK);
                  (yyval)->child[0] = (yyvsp[(1) - (3)]);
                  (yyval)->child[1] = (yyvsp[(2) - (3)]);
                  (yyval)->child[2] = (yyvsp[(3) - (3)]);
                }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 248 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 251 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = PLUS;
                }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 255 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = MINUS;
                }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 260 "c-.y"
    { (yyval) = newExpNode(CalcK);
                  (yyval)->child[0] = (yyvsp[(1) - (3)]);
                  (yyval)->child[1] = (yyvsp[(2) - (3)]);
                  (yyval)->child[2] = (yyvsp[(3) - (3)]);
                }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 265 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 268 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = MUL; }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 270 "c-.y"
    { (yyval) = newExpNode(OpK);
                  (yyval)->attr.op = DIV; }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 273 "c-.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 274 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 275 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 277 "c-.y"
    { (yyval) = newExpNode(ConstK);
	      (yyval)->type = Integer;
              (yyval)->attr.val = atoi(st_pop());
            }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 282 "c-.y"
    { (yyval) = newExpNode(StrK);
	      (yyval)->type = String;
	      (yyval)->attr.vals = tokenString;
	    }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 287 "c-.y"
    { (yyval) = newStmtNode(CallK);
              (yyval)->attr.name = copyString(st_pop());
              (yyval)->child[0] = (yyvsp[(3) - (4)]);
              /* $$->lineno = savedLineNo; */
            }
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 292 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 292 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 295 "c-.y"
    { YYSTYPE t = (yyvsp[(1) - (3)]);
               if (t != NULL)
                 { while (t->sibling != NULL)
                     t = t->sibling;
                   t->sibling = (yyvsp[(3) - (3)]);
                   (yyval) = (yyvsp[(1) - (3)]); }
               else (yyval) = (yyvsp[(3) - (3)]);
             }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 303 "c-.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 305 "c-.y"
    { (yyval) = NULL; }
    break;


/* Line 1787 of yacc.c  */
#line 2006 "c-.tab.c"
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


/* Line 2050 of yacc.c  */
#line 306 "c-.y"


int yyerror(char * message)
{ 
  if (yychar!=ENDFILE){
  	fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  	fprintf(listing,"Current token: ");
  	printToken(yychar,tokenString);
  	Error = TRUE;
  }
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
/* static int yylex(void)
  { return getToken(); } */

TreeNode * parse(void)
{
  yyparse();
  return savedTree;
}

