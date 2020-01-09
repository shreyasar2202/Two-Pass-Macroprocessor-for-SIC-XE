
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
#line 1 "macroprocessor.y"
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "data_structures.h"
extern FILE * yyin;
extern FILE * yyout;
extern char * yytext;
extern int yyleng;
struct namtab NAMTAB[100];
char DEFTAB[2000][200];
struct argtab ARGTAB[100];
int count=0;
int line_count=0;
void check(char s[50]);
void addarg(char s[50]);
void replacecall(char text[50]);
char *replaceWord(const char *s, const char *oldW,const char *newW);
void changelabel();
char head[100];
int head_count=0;
int linecount=0;
int argtabcount=0;//no of macro calls
int defnparametercount=0;
int defnreplacecount=0;//expand defn
int pass_no=1;
char unique[2]="AA";
void addlbl(char str[50]);
void checkforlabel(char str[50],int c);
int labelcnt=0;
void removeSubstring(char *s,const char *toremove);
void addvariable(char s[50]);

struct variabletable
{char varname[50];
 int varvalue;
 }vartable[50];
int varcount=0;


/* Line 189 of yacc.c  */
#line 114 "y.tab.c"

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
     START = 258,
     END = 259,
     MACRO = 260,
     MEND = 261,
     OPRTYPE1 = 262,
     OPRTYPE2 = 263,
     OPRTYPE3 = 264,
     REGOPR = 265,
     REG = 266,
     TYPE1 = 267,
     LABEL = 268,
     COM = 269,
     WS = 270,
     MACROPARAM = 271,
     WORD = 272,
     BYTE = 273,
     RESERVE = 274,
     MACROCALL = 275,
     CONCATPARAM = 276,
     OPRTYPE4 = 277,
     EQU = 278,
     ORG = 279,
     IF = 280,
     ENDIF = 281,
     SMAC = 282
   };
#endif
/* Tokens.  */
#define START 258
#define END 259
#define MACRO 260
#define MEND 261
#define OPRTYPE1 262
#define OPRTYPE2 263
#define OPRTYPE3 264
#define REGOPR 265
#define REG 266
#define TYPE1 267
#define LABEL 268
#define COM 269
#define WS 270
#define MACROPARAM 271
#define WORD 272
#define BYTE 273
#define RESERVE 274
#define MACROCALL 275
#define CONCATPARAM 276
#define OPRTYPE4 277
#define EQU 278
#define ORG 279
#define IF 280
#define ENDIF 281
#define SMAC 282




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 210 "y.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   40

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  44
/* YYNRULES -- Number of states.  */
#define YYNSTATES  55

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

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
      25,    26,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,    11,    14,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    38,
      41,    42,    43,    44,    51,    52,    53,    54,    65,    66,
      70,    71,    73,    74,    75,    79,    80,    82,    84,    86,
      88,    90,    92,    94,    96
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      29,     0,    -1,    30,    -1,    -1,     3,    31,    32,     4,
      -1,    33,    32,    -1,    -1,    10,    -1,     7,    -1,    12,
      -1,     8,    -1,    18,    -1,    17,    -1,    19,    -1,    23,
      -1,    24,    -1,    35,    -1,    39,    -1,    -1,    34,    20,
      -1,    -1,    -1,    -1,    36,    27,    37,    43,    38,     6,
      -1,    -1,    -1,    -1,    40,    13,    15,     5,    45,    46,
      41,    43,    42,     6,    -1,    -1,    44,    48,    43,    -1,
      -1,    15,    -1,    -1,    -1,    47,    16,    46,    -1,    -1,
      10,    -1,     7,    -1,     8,    -1,     9,    -1,    22,    -1,
      21,    -1,    25,    -1,    26,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    47,    47,    49,    50,    52,    53,    54,
      55,    56,    57,    59,    60,    61,    62,    63,    64,    64,
      67,    78,    79,    67,    82,    93,    94,    82,    98,    98,
      99,   101,   102,   104,   104,   112,   114,   115,   116,   117,
     118,   119,   120,   121,   122
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START", "END", "MACRO", "MEND",
  "OPRTYPE1", "OPRTYPE2", "OPRTYPE3", "REGOPR", "REG", "TYPE1", "LABEL",
  "COM", "WS", "MACROPARAM", "WORD", "BYTE", "RESERVE", "MACROCALL",
  "CONCATPARAM", "OPRTYPE4", "EQU", "ORG", "IF", "ENDIF", "SMAC",
  "$accept", "S", "E", "$@1", "STAT1", "ST", "$@2", "SINGMAC", "$@3",
  "$@4", "$@5", "MAC", "$@6", "$@7", "$@8", "STAT2", "$@9", "WHITE",
  "PARAMS", "$@10", "ST2", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    28,    29,    31,    30,    32,    32,    33,    33,    33,
      33,    33,    33,    33,    33,    33,    33,    33,    34,    33,
      36,    37,    38,    35,    40,    41,    42,    39,    44,    43,
      43,    45,    45,    47,    46,    46,    48,    48,    48,    48,
      48,    48,    48,    48,    48
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     4,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     0,     0,     6,     0,     0,     0,    10,     0,     3,
       0,     1,     0,     0,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     2,     6,     1,     8,    10,     7,     9,
      12,    11,    13,    14,    15,     0,     6,     0,    16,     0,
      17,     0,     4,     5,    19,    21,     0,    28,     0,    22,
       0,    32,     0,    37,    38,    39,    36,    44,    41,    40,
      42,    43,    28,    31,    35,    23,    29,    25,     0,    28,
      35,    26,    34,     0,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    15,    16,    17,    18,    19,    27,
      32,    20,    21,    49,    53,    29,    30,    44,    47,    48,
      42
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -41
static const yytype_int8 yypact[] =
{
       1,   -41,     7,   -41,    -7,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,     4,    -7,    -6,   -41,   -12,
     -41,     5,   -41,   -41,   -41,   -41,    10,    13,    22,   -41,
      14,    15,    23,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,    13,   -41,    12,   -41,   -41,   -41,    16,    13,
      12,   -41,   -41,    25,   -41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -41,   -41,   -41,   -41,    17,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -40,   -41,   -41,   -16,   -41,
     -41
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -34
static const yytype_int8 yytable[] =
{
       6,     7,    46,     8,     1,     9,   -24,     5,    22,    51,
      10,    11,    12,   -18,    24,    25,    13,    14,    26,   -30,
     -20,    33,    34,    35,    36,    28,    37,    31,   -33,    45,
      43,    54,    50,    23,    52,    38,    39,     0,     0,    40,
      41
};

static const yytype_int8 yycheck[] =
{
       7,     8,    42,    10,     3,    12,    13,     0,     4,    49,
      17,    18,    19,    20,    20,    27,    23,    24,    13,     6,
      27,     7,     8,     9,    10,    15,    12,     5,    16,     6,
      15,     6,    16,    16,    50,    21,    22,    -1,    -1,    25,
      26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    29,    30,    31,     0,     7,     8,    10,    12,
      17,    18,    19,    23,    24,    32,    33,    34,    35,    36,
      39,    40,     4,    32,    20,    27,    13,    37,    15,    43,
      44,     5,    38,     7,     8,     9,    10,    12,    21,    22,
      25,    26,    48,    15,    45,     6,    43,    46,    47,    41,
      16,    43,    46,    42,     6
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
#line 47 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 47 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 52 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 53 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 54 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 55 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 56 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 57 "macroprocessor.y"
    {if(pass_no==1){addvariable(yytext);}
        else if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 59 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 60 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 61 "macroprocessor.y"
    {if(pass_no==2){fprintf(yyout,"%s",yytext);}}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 64 "macroprocessor.y"
    {if(pass_no==1)addarg(yytext); 
	}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 65 "macroprocessor.y"
    {if(pass_no==2)replacecall(yytext);}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 67 "macroprocessor.y"
    { if(pass_no==1)
		{removeSubstring(yytext," MACRO\n");
		check(yytext);
		defnparametercount=0;
		strcpy(NAMTAB[count].name,yytext); 
		strcpy(head,yytext);
		head_count+=yyleng+1;
		strcat(head," ");
		labelcnt=0;
	    NAMTAB[count].defStart=line_count;}
		}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 78 "macroprocessor.y"
    {if(pass_no==1){strcpy(DEFTAB[line_count],head);line_count++;head_count=0;}}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 79 "macroprocessor.y"
    {if(pass_no==1){strcpy(DEFTAB[line_count],yytext);line_count++;}}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 80 "macroprocessor.y"
    {if(pass_no==1){NAMTAB[count].defEnd=line_count-1;count++;}
				}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 82 "macroprocessor.y"
    { if(pass_no==1)
		{check(yytext);
		defnparametercount=0;
		strcpy(NAMTAB[count].name,yytext); 
		strcpy(head,yytext);
		head_count+=yyleng+1;
		strcat(head," ");
		labelcnt=0;
	    NAMTAB[count].defStart=line_count;}
		
		}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 93 "macroprocessor.y"
    {if(pass_no==1){strcpy(DEFTAB[line_count],head);line_count++;head_count=0;}}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 94 "macroprocessor.y"
    {if(pass_no==1){strcpy(DEFTAB[line_count],yytext);line_count++;}}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 95 "macroprocessor.y"
    {if(pass_no==1){NAMTAB[count].defEnd=line_count-1;count++;}
				}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 98 "macroprocessor.y"
    {if(pass_no==1){strcpy(DEFTAB[line_count],yytext); if(strstr(yytext,":"))addlbl(yytext);line_count++; } }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 99 "macroprocessor.y"
    {if(pass_no==1){NAMTAB[count].label_count=labelcnt;}}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 104 "macroprocessor.y"
    {if(pass_no==1)
		{strcat(head,yytext);
		head_count+=yyleng;
		if(yytext[yyleng-1]==',')
		strncpy(NAMTAB[count].params[defnparametercount],yytext,yyleng-1);
		else strcpy(NAMTAB[count].params[defnparametercount],yytext);
		defnparametercount++;}
		}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 112 "macroprocessor.y"
    {if(pass_no==1){NAMTAB[count].no_of_parameters=defnparametercount;}}
    break;



/* Line 1455 of yacc.c  */
#line 1655 "y.tab.c"
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
#line 124 "macroprocessor.y"

int main()
{int kk;
if(yyin=fopen("test.txt","r"))

yyparse();
printf("NAMTAB:\n\n");
int i;
printf("Macro Name\tStart\tEnd\tNo of parameters\tParameters\n");
for(i=0;i<count;i++)
{
printf("%s\t\t%d\t %d\t%d\t",NAMTAB[i].name,NAMTAB[i].defStart,NAMTAB[i].defEnd,NAMTAB[i].no_of_parameters);
for(kk=0;kk<NAMTAB[i].no_of_parameters;kk++)
	printf("%s",NAMTAB[i].params[kk]);
//printf("\t%d\t%s",NAMTAB[i].label_count,NAMTAB[0].labels[0]);
printf("\n");
}
printf("\n\nDEFTAB:\n");
printf("\nIndex\t Statement");
for(i=0;i<line_count;i++)
{
printf("\n%d\t %s",i,DEFTAB[i]);
}
fclose(yyin);
fopen("test.txt","r");
pass_no=2;
yyout=fopen("output.txt","w");
//Pass2
yyparse();
}

int yyerror()
{printf("Error");
}

void check(char s[50])
{
int i;
for(i=0;i<count;i++)
{
 if (strcmp(s,NAMTAB[i].name)==0)
 {yyerror();
  printf(" : Macro %s already defined\n",s);
 exit(0);}
 }
}
void addarg(char s[50])
{ int j=0;
//printf("%s",s);
char *p=strstr(s,":");
char name[50];
char param[50];
int paramcount=0;
if(p!=NULL)
	{
		int i=1;
		while(p[i]!=' ' && p[i]!='\n')
		{name[i-1]=p[i];
		 i++;
		}
		name[i-1]='\0';
		i++;//to move 1 step after space
		strcpy(ARGTAB[argtabcount].macroname,name);
		
		//printf("Macro %s identified",name);
		while(p[i]!='\0')
		{ j=0; 
			while(p[i]!=',' && p[i]!='\n')
			{ param[j]=p[i];
				j++;i++;
			}
			param[j]='\0';
			strcpy(ARGTAB[argtabcount].params[paramcount],param);
			//printf("Arg %d : %s",paramcount,param);
			paramcount++;
			i++;
			
		}
		ARGTAB[argtabcount].number=paramcount;
		//printf("\nArgtabcount=%d\n",argtabcount);
		argtabcount++;
	}
else
	{
		p=s;
		int i=0;
		while(p[i]!=' ' && p[i]!='\n')
		{name[i]=p[i];
		 i++;
		}
		name[i]='\0';
		i++;//to move 1 step after space
		strcpy(ARGTAB[argtabcount].macroname,name);
		
		//printf("Macro %s identified",name);
		while(p[i]!='\0')
		{ j=0; 
			while(p[i]!=',' && p[i]!='\n')
			{ param[j]=p[i];
				j++;i++;
			}
			param[j]='\0';
			strcpy(ARGTAB[argtabcount].params[paramcount],param);
			//printf("Arg %d : %s",paramcount,param);
			paramcount++;
			i++;
			
		}
		ARGTAB[argtabcount].number=paramcount;
		//printf("\nArgtabcount=%d\n",argtabcount);
		argtabcount++;
	}
}
void replacecall(char text[50])
{ int c;
 char name[50];
char temp[50];
char temp2[50];
char temp4[50];
 int j;
 char * result;
 char * lab;
 char * lab2;
 char temp3[50];
 int flag=0;
 int flag_if=1;
 int labelchangeflag=0;
 strcpy(name,ARGTAB[defnreplacecount].macroname);
 for(c=0;c<count;c++)
 {
  if(strcmp(NAMTAB[c].name,name)==0)
  { 
  defnreplacecount++;
  break;
  }
  }
  if(c==count)return;
  if(ARGTAB[defnreplacecount-1].number!=NAMTAB[c].no_of_parameters)printf("number mismatch");
  if(lab=strstr(text,":"))
  {int p=0;
   while(&text[p]!=lab+1)
   {fprintf(yyout,"%c",text[p]);
    p++;}
   }
   
  int startIndex=NAMTAB[c].defStart;
  int endIndex=NAMTAB[c].defEnd;
  int index;
  for(index=startIndex+1;index<=endIndex-1;index++)
  { flag=0;
	if(strstr(DEFTAB[index],"ENDIF\n"))
	{flag_if=1;
	 continue;
	}
	if(flag_if==0)
	{continue;}
	strcpy(temp,DEFTAB[index]);
	//printf("Temp= %s\n",temp);
	strcpy(temp3,unique);
	//printf("Temp= %s\n",temp3);
	if(lab2=strstr(temp,":"))
	{
		strncpy(temp2,temp,lab2-&temp[0]+2);
		temp2[lab2-&temp[0]+1]='\0';
		strcat(temp3,temp2);
		strcat(temp3,lab2+1);
		strcpy(temp,temp3);
		labelchangeflag=1;
		
				
	}
	checkforlabel(temp,c);
	
	for(j=0;j<NAMTAB[c].no_of_parameters;j++)
     { 
	 if(strstr(temp,NAMTAB[c].params[j]))
		{result=replaceWord(temp,NAMTAB[c].params[j],ARGTAB[defnreplacecount-1].params[j]);
		//printf("result is %s \n",result);
		
		if(strstr(result,"->"))
		{ removeSubstring(result,"->");}
		if(strstr(temp,"IF "))
		{
		flag_if=evaluatecondition(result);
		 flag=1;
		 break;
		}
		fprintf(yyout,"%s",result);flag=1;
		
		
		
		break;}
		}
	 
	if(flag==0)fprintf(yyout,"%s",temp);
	
	
  }
if(labelchangeflag==1)
{ changelabel();
}
  
}
char *replaceWord(const char *s, const char *oldW, const char *newW)
{
    char *result;
    int i, cnt = 0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);
 
    // Counting the number of times old word
    // occur in the string
    for (i = 0; s[i] != '\0'; i++)
    {
        if (strstr(&s[i], oldW) == &s[i])
        {
            cnt++;
 
            // Jumping to index after the old word.
            i += oldWlen - 1;
        }
    }
 
    // Making new string of enough length
    result = (char *)malloc(i + cnt * (newWlen - oldWlen) + 1);
 
    i = 0;
    while (*s)
    {
        // compare the substring with the result
        if (strstr(s, oldW) == s)
        {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
        }
        else
            result[i++] = *s++;
    }
 
    result[i] = '\0';
    return result;
}
void changelabel()
{
if(unique[1]!='Z')
{unique[1]=unique[1]+1;}
else unique[0]=unique[0]+1;
}
void addlbl(char s[50])
{ //printf("yytext is %s",s);
char * ptr;
char temp[50];
ptr=strstr(s,":");
strncpy(temp,s,ptr-&s[0]);
temp[ptr-&s[0]]='\0';
//printf("Label identified %s:\n",temp);
strcpy(NAMTAB[count].labels[labelcnt],temp);
labelcnt++;
}
void checkforlabel(char temp[50], int num)
{
char t1[50];
char t2[50];
int x;
char t3[50];
char *p;
strcpy(t3,unique);
//printf("%s\n",temp);
for(x=0;x<NAMTAB[num].label_count;x++)
{//strcpy(t1,NAMTAB[num].labels[x]);
 //strcat(t1," ");
 strcpy(t2,NAMTAB[num].labels[x]);
 strcat(t2,"\n");
 if(p=strstr(temp,t2))
 {
  strcat(t3,t2);
  strncpy(t1,temp,p-&temp[0]);
  strcat(t1,t3);
  strcpy(temp,t1);
//printf("string is :%s\n",temp);
  break;
 }
}
}
void removeSubstring(char *s,const char *toremove)
{
  while( s=strstr(s,toremove) )
    memmove(s,s+strlen(toremove),1+strlen(s+strlen(toremove)));
}

void addvariable(char s[50])
{char temp[50];
char *p;
char *q;
p=strstr(s," ");
strncpy(temp,s,p-&s[0]);
temp[p-&s[0]]='\0';
strcpy(vartable[varcount].varname,temp);
q=strstr(p+1," ");
//printf("Label value=%s",q);
removeSubstring(q,"\n");
int val=atoi(q);
//printf("Label value1=%s",temp);
vartable[varcount].varvalue=val;
varcount++;
}
int evaluatecondition(char s[50])
{
 char *p;
 char *q;
 char *r;
 char *t;
 char temp[50];
 char operand[50];
 char value[50];
 int val;
 p=strstr(s,"(");
 q=strstr(p," ");
 p=p+1;
 strncpy(temp,p,q-p);
 temp[s-p-1]='\0';
 //printf("lab is %s\n",temp);
 q=q+1;
 r=strstr(q," ");
 strncpy(operand,q,r-q);
 operand[r-q+1]='\0';
 //printf("opr is %s\n",operand);
 r=r+1;
 t=strstr(r,")");
 strncpy(value,r,t-r);
 val=atoi(value);
  //printf("opr is %d\n",val);
  int i;
  for(i=0;i<varcount;i++)
  {
  if(strcmp(vartable[i].varname,temp)==0)
  {
	if(strcmp(operand,"EQ")==0)
	{
		if(vartable[i].varvalue==val)
		{ 
		 return 1;
		}
		else return 0;
	}
	else if(strcmp(operand,"NE")==0)
	{
		if(vartable[i].varvalue!=val)
		{ 
		 return 1;
		}
		else return 0;
	}
	else if(strcmp(operand,"LE")==0)
	{
		if(vartable[i].varvalue<=val)
		{ 
		 return 1;
		}
		else return 0;
	}
	else if(strcmp(operand,"GT")==0)
	{
		if(vartable[i].varvalue>val)
		{ 
		 return 1;
		}
		else return 0;
	}
  }
  }
 return 0;
}

