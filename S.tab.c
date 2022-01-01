
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
#line 1 "S.y"

extern int yylineo;
int i=0,n,j=0,e=0;
int col=1;
char vars[20][9];
char types[20][9];
char buf[25];
char cstype[10];
char sigtype[10];
char *type;
int a=0;


/* Line 189 of yacc.c  */
#line 87 "S.tab.c"

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
     mc_ident = 258,
     mc_data = 259,
     mc_prog = 260,
     mc_work = 261,
     mc_proc = 262,
     mc_stopr = 263,
     mc_et = 264,
     mc_ou = 265,
     mc_non = 266,
     mc_sup = 267,
     mc_inf = 268,
     mc_supe = 269,
     mc_infe = 270,
     mc_equi = 271,
     mc_diff = 272,
     mc_const = 273,
     mc_int = 274,
     mc_float = 275,
     mc_char = 276,
     mc_str = 277,
     mc_line = 278,
     mc_size = 279,
     mc_acc = 280,
     mc_type = 281,
     mc_disp = 282,
     mc_if = 283,
     mc_else = 284,
     mc_move = 285,
     mc_to = 286,
     mc_end = 287,
     csti = 288,
     cstf = 289,
     cstch = 290,
     cstst = 291,
     pvg = 292,
     egal = 293,
     aff = 294,
     add = 295,
     sous = 296,
     mult = 297,
     divi = 298,
     idff = 299,
     point = 300,
     parG = 301,
     parD = 302,
     sepv = 303,
     virg = 304,
     deup = 305,
     gui1 = 306,
     gui2 = 307,
     doll = 308,
     apos = 309,
     ecom = 310,
     arob = 311,
     pcen = 312,
     hash = 313,
     disp = 314
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 14 "S.y"

int entier;
float reel;
char* str;



/* Line 214 of yacc.c  */
#line 190 "S.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 202 "S.tab.c"

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
#define YYLAST   134

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    14,    17,    18,    21,    23,    26,    30,
      32,    35,    38,    43,    45,    47,    49,    51,    53,    55,
      57,    59,    63,    70,    73,    74,    76,    78,    80,    82,
      84,    95,   103,   109,   113,   115,   117,   119,   121,   123,
     131,   133,   138,   145,   152,   159,   164,   168,   170,   172,
     174,   176,   178,   180,   182,   184,   186,   188,   190,   192,
     198,   202,   206,   208,   213,   215,   217,   219,   221,   223,
     225,   227
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,     3,     5,    44,    45,     4,     6,    62,
       7,    70,     8,    -1,    63,    62,    -1,    -1,    64,    67,
      -1,    65,    -1,    69,    67,    -1,    44,    48,    64,    -1,
      44,    -1,    18,    66,    -1,    44,    67,    -1,    44,    39,
      68,    45,    -1,    19,    -1,    20,    -1,    21,    -1,    22,
      -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,    44,
      48,    69,    -1,    44,    23,    33,    49,    24,    33,    -1,
      71,    70,    -1,    -1,    79,    -1,    76,    -1,    78,    -1,
      72,    -1,    73,    -1,    25,    46,    51,    75,    52,    50,
      56,    44,    47,    45,    -1,    27,    46,    59,    50,    74,
      47,    45,    -1,    27,    46,    59,    47,    45,    -1,    44,
      49,    74,    -1,    44,    -1,    55,    -1,    58,    -1,    57,
      -1,    53,    -1,    28,    46,    84,    47,    50,    70,    77,
      -1,    32,    -1,    29,    50,    70,    32,    -1,    30,    44,
      31,    44,    70,    32,    -1,    30,    44,    31,    33,    70,
      32,    -1,    30,    33,    31,    44,    70,    32,    -1,    44,
      39,    80,    45,    -1,    82,    81,    80,    -1,    82,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      83,    -1,    33,    -1,    34,    -1,    85,    -1,    86,    -1,
      87,    -1,    46,    87,    47,    89,    86,    -1,    46,    87,
      47,    -1,    80,    88,    80,    -1,    80,    -1,    11,    46,
      80,    47,    -1,    12,    -1,    13,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    10,    -1,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    31,    31,    35,    36,    38,    43,    44,    51,    53,
      59,    62,    65,    71,    72,    73,    74,    77,    78,    79,
      80,    83,    86,    92,    93,    96,    96,    96,    96,    96,
      99,   102,   119,   124,   128,   132,   133,   134,   135,   138,
     141,   142,   145,   146,   147,   150,   166,   167,   170,   171,
     172,   173,   176,   188,   192,   199,   210,   210,   213,   216,
     217,   220,   227,   234,   243,   243,   243,   243,   243,   243,
     246,   246
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_ident", "mc_data", "mc_prog",
  "mc_work", "mc_proc", "mc_stopr", "mc_et", "mc_ou", "mc_non", "mc_sup",
  "mc_inf", "mc_supe", "mc_infe", "mc_equi", "mc_diff", "mc_const",
  "mc_int", "mc_float", "mc_char", "mc_str", "mc_line", "mc_size",
  "mc_acc", "mc_type", "mc_disp", "mc_if", "mc_else", "mc_move", "mc_to",
  "mc_end", "csti", "cstf", "cstch", "cstst", "pvg", "egal", "aff", "add",
  "sous", "mult", "divi", "idff", "point", "parG", "parD", "sepv", "virg",
  "deup", "gui1", "gui2", "doll", "apos", "ecom", "arob", "pcen", "hash",
  "disp", "$accept", "S", "LIST_DEC", "DEC", "DEC_VAR", "DEC_CST", "A",
  "TYPE2", "CST", "DEC_TAB", "LIST_INSTR", "INSTR", "LECTURE", "ECRITURE",
  "LIST_IDF", "SIGNE", "IF_STAT", "B", "BOUCLE", "AFFECTATION",
  "EXPRESSION", "OPER", "C", "CSTE", "CONDITIONS", "CONDITION_SIMPLE",
  "CONDITION_COMPLEXE", "CONDITION", "EQ", "BETA", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    62,    63,    63,    63,    64,    64,
      65,    66,    66,    67,    67,    67,    67,    68,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    71,    71,    71,
      72,    73,    73,    74,    74,    75,    75,    75,    75,    76,
      77,    77,    78,    78,    78,    79,    80,    80,    81,    81,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    86,
      86,    87,    87,    87,    88,    88,    88,    88,    88,    88,
      89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    10,     2,     0,     2,     1,     2,     3,     1,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     6,     2,     0,     1,     1,     1,     1,     1,
      10,     7,     5,     3,     1,     1,     1,     1,     1,     7,
       1,     4,     6,     6,     6,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     3,     1,     4,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     4,     0,
       9,     0,     4,     0,     6,     0,     0,    10,     0,     0,
      24,     3,    13,    14,    15,    16,     5,     7,     0,    11,
       0,     8,    21,     0,     0,     0,     0,     0,     0,    24,
      28,    29,    26,    27,    25,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     2,    23,    12,
       0,     0,     0,     0,    54,    55,    52,     0,    62,    47,
      53,     0,    56,    57,    58,     0,     0,     0,    22,    38,
      35,    37,    36,     0,     0,     0,     0,     0,    64,    65,
      66,    67,    68,    69,     0,    48,    49,    50,    51,     0,
       0,    24,    24,    24,    45,     0,    32,    34,     0,     0,
      60,    61,    46,    24,     0,     0,     0,     0,     0,     0,
      63,    71,    70,     0,     0,    44,    43,    42,     0,    33,
      31,    59,     0,    40,    39,     0,    24,     0,     0,    30,
      41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    11,    12,    13,    14,    17,    26,    49,    15,
      38,    39,    40,    41,   108,    83,    42,   134,    43,    44,
      68,    99,    69,    70,    71,    72,    73,    74,    94,   123
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -56
static const yytype_int8 yypact[] =
{
      23,    13,     4,   -38,   -56,    -4,    32,    47,   -15,    11,
     -16,    51,   -15,    46,   -56,    46,    -5,   -56,    40,    37,
      15,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    36,   -56,
      30,   -56,   -56,    38,    39,    41,   -23,    43,    72,    15,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,    44,
      59,    42,    27,    -9,    57,    60,   -25,   -56,   -56,   -56,
      61,    -1,   -27,    49,   -56,   -56,   -56,    -6,    34,    35,
     -56,    52,   -56,   -56,   -56,    48,   -22,    53,   -56,   -56,
     -56,   -56,   -56,    50,    55,    62,   -25,    54,   -56,   -56,
     -56,   -56,   -56,   -56,   -25,   -56,   -56,   -56,   -56,   -25,
      58,    15,    15,    15,   -56,    63,   -56,    56,    64,    65,
       3,   -56,   -56,    15,    71,    75,    77,    66,    62,    69,
     -56,   -56,   -56,    70,     1,   -56,   -56,   -56,    73,   -56,
     -56,   -56,    68,   -56,   -56,    74,    15,    78,    83,   -56,
     -56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,    84,   -56,    85,   -56,   -56,    45,   -56,    91,
     -39,   -56,   -56,   -56,   -28,   -56,   -56,   -56,   -56,   -56,
     -55,   -56,   -56,   -56,   -56,   -56,    -3,    67,   -56,   -56
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      58,    77,    63,     9,     4,    63,     5,    18,    64,    65,
      54,   102,   121,   122,    22,    23,    24,    25,     3,    66,
      84,    55,   103,    85,    64,    65,     1,    64,    65,    10,
     132,   109,    19,   133,    28,    66,     7,    67,    66,   111,
      33,     6,    34,    35,   112,    36,    88,    89,    90,    91,
      92,    93,    79,     8,    80,    16,    81,    82,    20,    37,
      27,    29,   114,   115,   116,    22,    23,    24,    25,    45,
      46,    47,    48,    30,   124,    95,    96,    97,    98,    50,
      57,    10,    56,    60,    51,    52,    62,    53,    75,    59,
     129,    76,   101,    61,    78,    86,    21,   138,   104,   100,
     106,   110,   105,   125,    31,   118,   107,   126,   113,   127,
      32,   119,   120,   117,   130,   140,    67,   135,   136,     0,
     131,   137,   128,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87
};

static const yytype_int16 yycheck[] =
{
      39,    56,    11,    18,     0,    11,    44,    23,    33,    34,
      33,    33,     9,    10,    19,    20,    21,    22,     5,    44,
      47,    44,    44,    50,    33,    34,     3,    33,    34,    44,
      29,    86,    48,    32,    39,    44,     4,    46,    44,    94,
      25,    45,    27,    28,    99,    30,    12,    13,    14,    15,
      16,    17,    53,     6,    55,    44,    57,    58,     7,    44,
      15,    16,   101,   102,   103,    19,    20,    21,    22,    33,
      34,    35,    36,    33,   113,    40,    41,    42,    43,    49,
       8,    44,    39,    24,    46,    46,    59,    46,    31,    45,
     118,    31,    44,    51,    33,    46,    12,   136,    45,    47,
      45,    47,    52,    32,    19,    49,    44,    32,    50,    32,
      19,    47,    47,    50,    45,    32,    46,    44,    50,    -1,
     123,    47,    56,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    61,     5,     0,    44,    45,     4,     6,    18,
      44,    62,    63,    64,    65,    69,    44,    66,    23,    48,
       7,    62,    19,    20,    21,    22,    67,    67,    39,    67,
      33,    64,    69,    25,    27,    28,    30,    44,    70,    71,
      72,    73,    76,    78,    79,    33,    34,    35,    36,    68,
      49,    46,    46,    46,    33,    44,    39,     8,    70,    45,
      24,    51,    59,    11,    33,    34,    44,    46,    80,    82,
      83,    84,    85,    86,    87,    31,    31,    80,    33,    53,
      55,    57,    58,    75,    47,    50,    46,    87,    12,    13,
      14,    15,    16,    17,    88,    40,    41,    42,    43,    81,
      47,    44,    33,    44,    45,    52,    45,    44,    74,    80,
      47,    80,    80,    50,    70,    70,    70,    50,    49,    47,
      47,     9,    10,    89,    70,    32,    32,    32,    56,    74,
      45,    86,    29,    32,    77,    44,    50,    47,    70,    45,
      32
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
        case 2:

/* Line 1455 of yacc.c  */
#line 31 "S.y"
    {    printf ("\n\n\t\t\t\t\t --- Programme syntaxiquement correct --- \n\n");
                                                                                            printf ("\n\n\t\t --------------------------- Fin de la compilation --------------------------- \n\n");    YYACCEPT;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 38 "S.y"
    {for(n=0;n<i;n++) {
                            if (doubleDeclaration(vars[n])==0) insererTYPE(vars[n],(yyvsp[(2) - (2)].str));
                            else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,vars[n]);
                          }
                          i=0;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 44 "S.y"
    {for(n=0;n<i;n++) {
                            if (doubleDeclaration(vars[n])==0) insererTYPE(vars[n],(yyvsp[(2) - (2)].str));
                            else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,vars[n]);
                          }
                          i=0;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 51 "S.y"
    { strcpy(vars[i],(yyvsp[(1) - (3)].str)); //printf("vars[%d]= %s\n",i,vars[i]); 
                                      i++;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 53 "S.y"
    { strcpy(vars[i],(yyvsp[(1) - (1)].str));
                          i++; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 62 "S.y"
    { if (doubleDeclaration((yyvsp[(1) - (2)].str))==0) {insererTYPE((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str)); insererCODE((yyvsp[(1) - (2)].str));}
                    else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (2)].str));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 65 "S.y"
    { if (doubleDeclaration((yyvsp[(1) - (4)].str))==0) {insererTYPE((yyvsp[(1) - (4)].str),cstype); insererCODE((yyvsp[(1) - (4)].str));
                                                        modifier_val((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].str));  }
                    else  printf ("<< Erreur semantique ( Idf deja declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (4)].str));;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 71 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 72 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 73 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 74 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 77 "S.y"
    {strcpy(cstype,"INTEGER.");sprintf(buf,"%d",(yyvsp[(1) - (1)].entier));  (yyval.str)=buf;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 78 "S.y"
    {strcpy(cstype,"FLOAT.");sprintf(buf,"%f",(yyvsp[(1) - (1)].reel));  (yyval.str)=buf;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 79 "S.y"
    {strcpy(cstype,"CHAR.");(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 80 "S.y"
    {strcpy(cstype,"STRING.");(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 83 "S.y"
    { strcpy(vars[i],(yyvsp[(1) - (3)].str));
                              i++;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 86 "S.y"
    {  if (((yyvsp[(3) - (6)].entier)<0)||((yyvsp[(6) - (6)].entier)<1)) printf ("<< Erreur semantique ( Taille du tableau ou borne inferieure hors limites ), ligne %d, colonne %d : %s ou %s >>\n",yylineo,col,(yyvsp[(3) - (6)].entier),(yyvsp[(6) - (6)].entier));
                                                  strcpy(vars[i],(yyvsp[(1) - (6)].str));
                                                  i++;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 99 "S.y"
    { if (doubleDeclaration((yyvsp[(8) - (10)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(8) - (10)].str));
                                                                  if(strcmp((char*)TypeEntite((yyvsp[(8) - (10)].str)),sigtype)!=0) printf ("<< Erreur semantique ( Incompatibilite de types dans ACCEPT), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(8) - (10)].str));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 102 "S.y"
    { 
                                                       n=nbSIGNE((yyvsp[(3) - (7)].str),types);
                                                       //printf("nb de types dans display =%d\n",n);
                                                       //printf("nb de idf dans display =%d\n",j);
                                                       if(n>0){
                                                       if(n!=j) printf("<< Erreur semantique (Le nombre de signes ne corresponds aux nombres de variables a afficher) ligne %d, colonne %d >>\n",yylineo,col);
                                                       else {
                                                            for(i=0;i<j;i++) 
                                                            {
                                                              //printf("vars[j] =%s, Type= %s, Type[i]=%s\n",vars[j-i-1],(char*)TypeEntite(vars[j-i-1]),types[i]);
                                                              if(strcmp((char*)TypeEntite(vars[j-i-1]),types[i])!=0) printf ("<< Erreur semantique ( Incompatibilite de types dans DISPLAY), ligne %d, colonne %d : sur l'entite %s et type %s >>\n",yylineo,col,vars[j-i-1],types[i]);
                                                            }
                                                            }
                                                          
                                                      }  j=0;
                                                         n=0;
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 119 "S.y"
    {
                                            n=nbSIGNE((yyvsp[(3) - (5)].str),types);
                                            if (n!=0) {printf("<< Erreur semantique ( Idf manquant ), ligne %d, colonne %d ",yylineo,col);}
          ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 124 "S.y"
    { strcpy(vars[j],(yyvsp[(1) - (3)].str)); //printf("vars[j] =%s\n",vars[j]);
                                if (doubleDeclaration((yyvsp[(1) - (3)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (3)].str));
                                                           
                              j++;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 128 "S.y"
    {strcpy(vars[j],(yyvsp[(1) - (1)].str)); //printf("vars[j] =%s\n",vars[j]);
                if (doubleDeclaration((yyvsp[(1) - (1)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (1)].str));
                j++;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 132 "S.y"
    {strcpy(sigtype,"STRING.");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 133 "S.y"
    {strcpy(sigtype,"CHAR.");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 134 "S.y"
    {strcpy(sigtype,"FLOAT.");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 135 "S.y"
    {strcpy(sigtype,"INTEGER.");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 145 "S.y"
    { if ((doubleDeclaration((yyvsp[(2) - (6)].str))==0)||(doubleDeclaration((yyvsp[(4) - (6)].str))==0)) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s ou %s >>\n",yylineo,col,(yyvsp[(2) - (6)].str),(yyvsp[(4) - (6)].str));;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 146 "S.y"
    { if (doubleDeclaration((yyvsp[(2) - (6)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(2) - (6)].str));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 147 "S.y"
    { if (doubleDeclaration((yyvsp[(4) - (6)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(4) - (6)].str));;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 150 "S.y"
    { if (doubleDeclaration((yyvsp[(1) - (4)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (4)].str));
                                         else { if (verifIDF((yyvsp[(1) - (4)].str))==1) printf ("<< Erreur semantique ( Constante ne peut pas changer de valeur), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (4)].str));
                                                else{
                                                    for(n=0;n<j;n++) {
                                                      if(strcmp((char*)TypeEntite((yyvsp[(1) - (4)].str)),(char*)TypeEntite(types[n]))!=0) {
                                                      printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",yylineo,col,(yyvsp[(1) - (4)].str),types[n]);
                                                       }
                                                      strcpy(types[n],"");
                                                    }
                                                
                                                }
                                              }
                                              j=0;
                                        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 170 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 171 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 172 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 173 "S.y"
    {(yyval.str)=(yyvsp[(1) - (1)].str); a=1;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 176 "S.y"
    {if (doubleDeclaration((yyvsp[(1) - (1)].str))==0) printf ("<< Erreur semantique ( Idf non declaree ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (1)].str));
          else {
              strcpy(types[j],(yyvsp[(1) - (1)].str));
              j++;
            if(a==1) {
                      if(recheche_val((yyvsp[(1) - (1)].str))==0) { printf("<< Erreur semantique ( division par 0 ), ligne %d, colonne %d : %s >>\n",yylineo,col,(yyvsp[(1) - (1)].str));}
                     }
            if(a==1) a=0;
           // if((b==1) && strcmp((char*)TypeEntite($1),cstype)!=0)  {printf("Erreur semantique: incompatibilite de type, ligne %d, colonne %d \n",nb,col); b=0; strcpy(cstype,"");}
          } 
          
        ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 188 "S.y"
    {strcpy(types[j],(yyvsp[(1) - (1)].str));
              j++;;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 192 "S.y"
    { //printf("csti=%d\n",$1);
              if(((yyvsp[(1) - (1)].entier)==0) && (a==1)) {printf("<< Erreur semantique ( division par 0 ), ligne %d, colonne %d : %d >>\n",yylineo,col,(yyvsp[(1) - (1)].entier)); a=0;}
              if(a==1) a=0;
              //if((b==1) && strcmp((char*)TypeEntite($1),cstype)!=0)  {printf("Erreur semantique: incompatibilite de type, ligne %d, colonne %d \n",nb,col); b=0;strcpy(cstype,"");}
              //itoa($1, buf, 10); 
              sprintf(buf,"%d",(yyvsp[(1) - (1)].entier)); (yyval.str)=buf;
                   ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 199 "S.y"
    { //printf("cstf=%f\n",$1);
              if(((yyvsp[(1) - (1)].reel)==0) && (a==1)) {printf("<< Erreur semantique ( division par 0 ), ligne %d, colonne %d : %f >>\n",yylineo,col,(yyvsp[(1) - (1)].reel)); a=0;}
              if(a==1) a=0;
              //if((b==1) && strcmp((char*)TypeEntite($1),cstype)!=0) {printf("Erreur semantique: incompatibilite de type, ligne %d, colonne %d \n",nb,col);b=0;strcpy(cstype,"");}
              //gcvt($1, 10, buf); 
              sprintf(buf,"%f",(yyvsp[(1) - (1)].reel));  (yyval.str)=buf; 
              ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 220 "S.y"
    { for(n=1;n<j;n++) {
                                                      if(strcmp((char*)TypeEntite(types[0]),(char*)TypeEntite(types[n]))!=0) {
                                                      printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",yylineo,col,types[0],types[n]);
                                                       }
                                                      strcpy(types[n],"");
                                                    }
                                                j=0; ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 227 "S.y"
    { for(n=1;n<j;n++) {
                                                      if(strcmp((char*)TypeEntite(types[0]),(char*)TypeEntite(types[n]))!=0) {
                                                      printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",yylineo,col,types[0],types[n]);
                                                       }
                                                      strcpy(types[n],"");
                                                    }
                                                j=0; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 234 "S.y"
    { for(n=1;n<j;n++) {
                                                      if(strcmp((char*)TypeEntite(types[0]),(char*)TypeEntite(types[n]))!=0) {
                                                      printf ("<< Erreur semantique ( Incompatibilite de types), ligne %d, colonne %d : entre %s et %s >>\n",yylineo,col,types[0],types[n]);
                                                       }
                                                      strcpy(types[n],"");
                                                    }
                                                j=0; ;}
    break;



/* Line 1455 of yacc.c  */
#line 1907 "S.tab.c"
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
#line 252 "S.y"

main ()
{
initialisation();
printf ("\n\n\t\t --------------------------- Debut de la compilation --------------------------- \n\n");
yyparse();
afficher();
}
yywrap()
{}
int yyerror (char *msg ) { 
        printf ("Erreur syntaxique, ligne %d, colonne %d \n",yylineo,col); 
        return 1; }
