/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function declarations and field-attribute state
FILE *html_file; 
char *current_field = NULL;
char *current_password = NULL;

void yyerror(const char *s);
int yylex();
int yyparse(void);

//Defines helper functions
int is_required = 0;
char *pattern_val = NULL;
int min_val = -1;
int max_val = -1;
char *accept_val = NULL;

void reset_field_attrs() {
    is_required = 0;
    if (pattern_val) free(pattern_val);
    if (accept_val) free(accept_val);
    pattern_val = NULL;
    accept_val = NULL;
    min_val = -1;
    max_val = -1;
}

int main() {
    yyparse();
    if (current_password) free(current_password);
    if (current_field) free(current_field);
    return 0;
}


#line 111 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_NUMBER_VAL = 5,                 /* NUMBER_VAL  */
  YYSYMBOL_FORM = 6,                       /* FORM  */
  YYSYMBOL_SECTION = 7,                    /* SECTION  */
  YYSYMBOL_FIELD = 8,                      /* FIELD  */
  YYSYMBOL_META = 9,                       /* META  */
  YYSYMBOL_VALIDATE = 10,                  /* VALIDATE  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ERROR = 12,                     /* ERROR  */
  YYSYMBOL_TEXT = 13,                      /* TEXT  */
  YYSYMBOL_TEXTAREA = 14,                  /* TEXTAREA  */
  YYSYMBOL_EMAIL = 15,                     /* EMAIL  */
  YYSYMBOL_NUMBER = 16,                    /* NUMBER  */
  YYSYMBOL_DATE = 17,                      /* DATE  */
  YYSYMBOL_CHECKBOX = 18,                  /* CHECKBOX  */
  YYSYMBOL_DROPDOWN = 19,                  /* DROPDOWN  */
  YYSYMBOL_RADIO = 20,                     /* RADIO  */
  YYSYMBOL_PASSWORD = 21,                  /* PASSWORD  */
  YYSYMBOL_FILE_TYPE = 22,                 /* FILE_TYPE  */
  YYSYMBOL_REQUIRED = 23,                  /* REQUIRED  */
  YYSYMBOL_DEFAULT = 24,                   /* DEFAULT  */
  YYSYMBOL_MIN = 25,                       /* MIN  */
  YYSYMBOL_MAX = 26,                       /* MAX  */
  YYSYMBOL_PATTERN = 27,                   /* PATTERN  */
  YYSYMBOL_ACCEPT = 28,                    /* ACCEPT  */
  YYSYMBOL_ROWS = 29,                      /* ROWS  */
  YYSYMBOL_COLS = 30,                      /* COLS  */
  YYSYMBOL_LBRACE = 31,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 32,                    /* RBRACE  */
  YYSYMBOL_LBRACKET = 33,                  /* LBRACKET  */
  YYSYMBOL_RBRACKET = 34,                  /* RBRACKET  */
  YYSYMBOL_COLON = 35,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 36,                 /* SEMICOLON  */
  YYSYMBOL_EQUAL = 37,                     /* EQUAL  */
  YYSYMBOL_LT = 38,                        /* LT  */
  YYSYMBOL_GT = 39,                        /* GT  */
  YYSYMBOL_COMMA = 40,                     /* COMMA  */
  YYSYMBOL_NE = 41,                        /* NE  */
  YYSYMBOL_EQOP = 42,                      /* EQOP  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_form_def = 45,                  /* form_def  */
  YYSYMBOL_46_1 = 46,                      /* $@1  */
  YYSYMBOL_form_content = 47,              /* form_content  */
  YYSYMBOL_form_item = 48,                 /* form_item  */
  YYSYMBOL_meta_decl = 49,                 /* meta_decl  */
  YYSYMBOL_section_def = 50,               /* section_def  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_field_list = 52,                /* field_list  */
  YYSYMBOL_field_def = 53,                 /* field_def  */
  YYSYMBOL_54_3 = 54,                      /* $@3  */
  YYSYMBOL_55_4 = 55,                      /* $@4  */
  YYSYMBOL_field_attrs = 56,               /* field_attrs  */
  YYSYMBOL_field_attr = 57,                /* field_attr  */
  YYSYMBOL_option_list = 58,               /* option_list  */
  YYSYMBOL_dropdown_option_list = 59,      /* dropdown_option_list  */
  YYSYMBOL_validation_block = 60,          /* validation_block  */
  YYSYMBOL_validation_list = 61,           /* validation_list  */
  YYSYMBOL_validation_rule = 62            /* validation_rule  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   145

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  43
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  111

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    65,    65,   221,   222,   226,   227,   228,
     232,   239,   239,   249,   250,   255,   275,   288,   301,   311,
     328,   336,   336,   352,   365,   365,   382,   396,   397,   401,
     404,   405,   408,   411,   415,   423,   430,   441,   444,   451,
     455,   456,   460,   463
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "STRING",
  "NUMBER_VAL", "FORM", "SECTION", "FIELD", "META", "VALIDATE", "IF",
  "ERROR", "TEXT", "TEXTAREA", "EMAIL", "NUMBER", "DATE", "CHECKBOX",
  "DROPDOWN", "RADIO", "PASSWORD", "FILE_TYPE", "REQUIRED", "DEFAULT",
  "MIN", "MAX", "PATTERN", "ACCEPT", "ROWS", "COLS", "LBRACE", "RBRACE",
  "LBRACKET", "RBRACKET", "COLON", "SEMICOLON", "EQUAL", "LT", "GT",
  "COMMA", "NE", "EQOP", "$accept", "program", "form_def", "$@1",
  "form_content", "form_item", "meta_decl", "section_def", "$@2",
  "field_list", "field_def", "$@3", "$@4", "field_attrs", "field_attr",
  "option_list", "dropdown_option_list", "validation_block",
  "validation_list", "validation_rule", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-44)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       4,    25,    49,   -44,    19,   -44,   -44,   -44,     2,    48,
      52,    21,   -44,   -44,   -44,   -44,   -44,    26,    22,   -44,
     -44,    69,    -5,   -44,    20,    72,   -44,   -44,    -3,   -44,
      -8,    73,   -44,   -44,    74,    75,    42,    62,    65,   108,
      83,    85,   -44,   -44,   -44,   -44,   -44,   -44,    66,    80,
     -44,   -44,    94,   111,   -10,    -4,    12,    18,    38,    44,
     -44,   -44,    58,    64,    81,    82,   -44,    79,    95,    96,
      97,    98,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   115,
     127,   -44,   -44,   104,   105,   134,   135,   136,   138,   139,
     -44,    -9,   -44,    13,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   140,   -44,   141,    78,   -44,    84,   -44,   -44,
     -44
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     3,     6,     0,     0,
       0,     0,     4,     5,     7,     8,     9,     0,     0,    41,
      11,     0,     0,    14,     0,     0,    39,    40,     0,    10,
       0,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    27,    27,    27,    27,    27,     0,     0,
      27,    27,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    21,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,    15,    28,    20,    16,    17,    18,    23,     0,
       0,    19,    26,     0,     0,     0,     0,     0,     0,     0,
      37,     0,    35,     0,    42,    43,    30,    31,    32,    33,
      34,    27,     0,    27,     0,     0,    38,     0,    36,    25,
      22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -43,   -44,   -44,   -44,   -44,   -44,   -44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     7,     8,    13,    14,    15,    23,    28,
      33,    80,    79,    54,    73,    93,    91,    16,    22,    27
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      55,    56,    57,    58,    59,    31,    25,    62,    63,     9,
       1,    10,    11,    66,    67,    68,    69,    70,    71,    66,
      67,    68,    69,    70,    71,   101,    72,    26,     4,    32,
      34,   102,    74,    35,    12,    66,    67,    68,    69,    70,
      71,    66,    67,    68,    69,    70,    71,   103,    75,     5,
       6,    17,    19,   104,    76,    18,    29,    20,   105,    21,
     107,    66,    67,    68,    69,    70,    71,    66,    67,    68,
      69,    70,    71,    24,    77,    30,    36,    39,    38,    37,
      78,    66,    67,    68,    69,    70,    71,    66,    67,    68,
      69,    70,    71,    40,    81,    52,    41,    53,    64,    60,
      82,    66,    67,    68,    69,    70,    71,    66,    67,    68,
      69,    70,    71,    61,   109,    65,    85,    83,    84,    90,
     110,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    92,    86,    87,    88,    89,    94,    95,    96,     0,
      97,    98,    99,   100,   106,   108
};

static const yytype_int8 yycheck[] =
{
      43,    44,    45,    46,    47,     8,    11,    50,    51,     7,
       6,     9,    10,    23,    24,    25,    26,    27,    28,    23,
      24,    25,    26,    27,    28,    34,    36,    32,     3,    32,
      38,    40,    36,    41,    32,    23,    24,    25,    26,    27,
      28,    23,    24,    25,    26,    27,    28,    34,    36,     0,
      31,     3,    31,    40,    36,     3,    36,    31,   101,    37,
     103,    23,    24,    25,    26,    27,    28,    23,    24,    25,
      26,    27,    28,     4,    36,     3,     3,    35,     3,     5,
      36,    23,    24,    25,    26,    27,    28,    23,    24,    25,
      26,    27,    28,    31,    36,    12,    31,    12,     4,    33,
      36,    23,    24,    25,    26,    27,    28,    23,    24,    25,
      26,    27,    28,    33,    36,     4,    37,    36,    36,     4,
      36,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     4,    37,    37,    37,    37,    32,    32,     4,    -1,
       5,     5,     4,     4,     4,     4
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    44,    45,     3,     0,    31,    46,    47,     7,
       9,    10,    32,    48,    49,    50,    60,     3,     3,    31,
      31,    37,    61,    51,     4,    11,    32,    62,    52,    36,
       3,     8,    32,    53,    38,    41,     3,     5,     3,    35,
      31,    31,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    12,    12,    56,    56,    56,    56,    56,    56,
      33,    33,    56,    56,     4,     4,    23,    24,    25,    26,
      27,    28,    36,    57,    36,    36,    36,    36,    36,    55,
      54,    36,    36,    36,    36,    37,    37,    37,    37,    37,
       4,    59,     4,    58,    32,    32,     4,     5,     5,     4,
       4,    34,    40,    34,    40,    56,     4,    56,     4,    36,
      36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    46,    45,    47,    47,    48,    48,    48,
      49,    51,    50,    52,    52,    53,    53,    53,    53,    53,
      53,    54,    53,    53,    55,    53,    53,    56,    56,    57,
      57,    57,    57,    57,    57,    58,    58,    59,    59,    60,
      61,    61,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     6,     2,     0,     1,     1,     1,
       5,     0,     6,     2,     0,     6,     6,     6,     6,     6,
       6,     0,    10,     6,     0,    10,     6,     0,     2,     1,
       3,     3,     3,     3,     3,     1,     3,     1,     3,     4,
       2,     0,     9,     9
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* $@1: %empty  */
#line 65 "parser.y"
                   {
        html_file = fopen("output.html","w");
        if (!html_file) { 
        perror("fopen"); 
        exit(1); }

        fprintf(html_file,
            "  <!DOCTYPE html>\n"
            "  <html>\n"
            "  <head>\n"
            "  <meta charset=\"UTF-8\">\n"
            "  <title>%s Form</title>\n"

        "  <style>\n"
            "    body {\n"
            "      font-family: Arial, sans-serif;\n"
            "      margin: 20px;\n"
            "      background-color:rgb(230, 249, 247);\n"
            "    }\n"
                  
                  // Main form box
            "    .form-box {\n"
            "      border: 2px solid #ccc;\n"
            "      border-radius: 10px;\n"
            "      padding: 25px;\n"
            "      box-shadow: 0 0 15px rgba(0, 0, 0, 0.1);\n"
            "      background-color: #f0f2f5;\n"
            "      max-width: 600px;\n"
            "      margin: 40px auto;\n"
            "    }\n"
                 
                  // form elements 
            "     fieldset {\n"
            "      margin-bottom: 20px;\n"
            "      padding: 15px;\n"
            "      border: 1px solid #ccc;\n"
            "      border-radius: 5px;\n"
            "    }\n"

            "      legend {\n"
            "      font-weight: bold;\n"
            "      padding: 0 10px;\n"
            "    }\n"

            "      label {\n"
            "      display: block;\n"
            "      margin-bottom: 15px;\n"
            "    }\n"

            "      input[type=\"text\"], input[type=\"email\"], input[type=\"number\"],\n"
            "      input[type=\"date\"], input[type=\"password\"], select, textarea {\n"
            "      width: 100%%;\n"
            "      padding: 8px;\n"
            "      margin-top: 4px;\n"
            "      margin-bottom: 10px;\n"
            "      border: 1px solid #ddd;\n"
            "      border-radius: 4px;\n"
            "      box-sizing: border-box;\n"
            "    }\n"

            "      input[type=\"checkbox\"], input[type=\"radio\"] {\n"
            "      margin-bottom: 10px;\n"
            "      align-items: center;\n"
            "      transform: scale(1.5);\n"
            "    }\n"

            "    .form-submit {\n"
            "      text-align: center;\n"
            "      margin-top: 20px;\n"
            "    }\n"

            "      input[type=\"submit\"] {\n"
            "      background-color: #4CAF50;\n"
            "      color: white;\n"
            "      padding: 10px 20px;\n"
            "      border: none;\n"
            "      border-radius: 4px;\n"
            "      cursor: pointer;\n"
            "    }\n"

            "      input[type=\"submit\"]:hover {\n"
            "      background-color: #45a049;\n"
            "    }\n"

            "      h1 {\n"
            "      text-align: center;\n"
            "      margin-bottom: 20px;\n"
            "    }\n" 
        "  </style>\n"

        "  <script>\n"
            "      function handleSubmit(event) {\n"
            "      const form = event.target;\n"
            "      let isValid = true;\n"
            "      \n"

                  // Password validation\n"
            "      const password = form.userpassword ? form.userpassword.value : '';\n"
            "      const confirmPassword = form.confirmPassword ? form.confirmPassword.value : '';\n"
            "      if (password && !/^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)[a-zA-Z\\d]{8,}$/.test(password)) {\n"
            "         alert('Password must contain at least 8 characters, including uppercase, lowercase letters and numbers');\n"
            "      isValid = false;\n"
            "      }\n"
            "      if (password !== confirmPassword) {\n"
            "         alert('Passwords do not match.');\n"
            "         isValid = false;\n"
            "     }\n"
            "     \n"

            "      const nic = form['NIC']?.value || '';\n"
            "      if (!/^\\d{12}$/.test(nic)) {\n"
            "         errors.push('NIC must be exactly 12 digits');\n"
            "         isValid = false;\n"
            "      }\n"
            "      \n"

            "      const mob = form['Mobile_Number']?.value || '';\n"
            "      if (!/^\\d{10}$/.test(mob)) {\n"
            "          errors.push('Mobile number must be exactly 10 digits');\n"
            "          isValid = false;\n"
            "      }\n"
            "      \n"

            "      if (isValid) {\n"
            "          alert('Form submitted successfully!');\n"
            "          form.reset();\n"
            "       }\n"
            "      }\n"
            
        "  </script>\n"

            "</head>\n"
            "<body>\n"
            "  <div class=\"form-box\">\n" 
            "  <h1>Registration Form</h1>\n"
            "  <form name=\"%s\" action=\"#\" onsubmit=\"handleSubmit(event)\">\n",
            (yyvsp[-1].str), (yyvsp[-1].str)
        );
    }
#line 1372 "parser.tab.c"
    break;

  case 4: /* form_def: FORM ID LBRACE $@1 form_content RBRACE  */
#line 205 "parser.y"
           {
        fprintf(html_file,
            "   <div class=\"form-submit\">\n"
            "   <input type=\"submit\" value=\"Submit Form\">\n"
            "   </div>\n"
            "  </form>\n"
            "  </div>\n"
            "</body>\n"
            "</html>\n"
        );
        fclose(html_file);
    }
#line 1389 "parser.tab.c"
    break;

  case 10: /* meta_decl: META ID EQUAL STRING SEMICOLON  */
#line 232 "parser.y"
                                   {
        fprintf(html_file, "<!-- Meta %s = %s -->\n", (yyvsp[-3].str), (yyvsp[-1].str));
    }
#line 1397 "parser.tab.c"
    break;

  case 11: /* $@2: %empty  */
#line 239 "parser.y"
                      {
        fprintf(html_file, "<fieldset>\n<legend>%s</legend>\n", (yyvsp[-1].str));
    }
#line 1405 "parser.tab.c"
    break;

  case 12: /* section_def: SECTION ID LBRACE $@2 field_list RBRACE  */
#line 243 "parser.y"
           {
        fprintf(html_file, "</fieldset>\n");
    }
#line 1413 "parser.tab.c"
    break;

  case 15: /* field_def: FIELD ID COLON TEXT field_attrs SEMICOLON  */
#line 255 "parser.y"
                                             {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-4].str));

        if (strcmp((yyvsp[-4].str), "NIC")==0 && !pattern_val) {
            pattern_val = strdup("\\d{12}");
        }

        if (strcmp((yyvsp[-4].str), "Mobile_Number")==0 && !pattern_val) {
            pattern_val = strdup("\\d{10}");
        }

        fprintf(html_file,
            "  <label>%s: <input type=\"text\" name=\"%s\"", (yyvsp[-4].str), (yyvsp[-4].str));
        if (is_required)     fprintf(html_file, " required");
        if (pattern_val)     fprintf(html_file, " pattern=\"%s\"", pattern_val);
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }
#line 1437 "parser.tab.c"
    break;

  case 16: /* field_def: FIELD ID COLON EMAIL field_attrs SEMICOLON  */
#line 275 "parser.y"
                                               {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-4].str));

        fprintf(html_file, "    <label>%s: <input type=\"email\" name=\"%s\"", (yyvsp[-4].str), (yyvsp[-4].str));
        if (is_required) fprintf(html_file, " required");
        if (pattern_val) {
            fprintf(html_file, " pattern=\"%s\"", pattern_val);
        }
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }
#line 1454 "parser.tab.c"
    break;

  case 17: /* field_def: FIELD ID COLON NUMBER field_attrs SEMICOLON  */
#line 288 "parser.y"
                                                {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-4].str));

        fprintf(html_file, 
            "    <label>%s: <input type=\"number\" name=\"%s\"", (yyvsp[-4].str), (yyvsp[-4].str));
        if (min_val >= 0) fprintf(html_file, " min=\"%d\"", min_val);
        if (max_val >= 0) fprintf(html_file, " max=\"%d\"", max_val);
        if (is_required) fprintf(html_file, " required");
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }
#line 1471 "parser.tab.c"
    break;

  case 18: /* field_def: FIELD ID COLON DATE field_attrs SEMICOLON  */
#line 301 "parser.y"
                                              {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-4].str));

        fprintf(html_file, "    <label>%s: <input type=\"date\" name=\"%s\"", (yyvsp[-4].str), (yyvsp[-4].str));
        if (is_required) fprintf(html_file, " required");
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }
#line 1485 "parser.tab.c"
    break;

  case 19: /* field_def: FIELD ID COLON PASSWORD field_attrs SEMICOLON  */
#line 311 "parser.y"
                                                  {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-4].str));

        fprintf(html_file, "    <label>%s: <input type=\"password\" name=\"%s\"", (yyvsp[-4].str), (yyvsp[-4].str));
        if (is_required) fprintf(html_file, " required");
        fprintf(html_file, " pattern=\"(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)[a-zA-Z\\d]{8,}\"");
        fprintf(html_file, " title=\"Must contain at least 8 characters, including uppercase, lowercase letters and numbers\">");
        fprintf(html_file, "</label><br>\n");
        
        if (strcmp((yyvsp[-4].str), "password") == 0) {
            if (current_password) free(current_password);
            current_password = strdup((yyvsp[-4].str));
        }
        reset_field_attrs();
    }
#line 1506 "parser.tab.c"
    break;

  case 20: /* field_def: FIELD ID COLON TEXTAREA field_attrs SEMICOLON  */
#line 328 "parser.y"
                                                  {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-4].str));
        
        fprintf(html_file, "  <label>%s: <textarea name=\"%s\" rows=\"5\" cols=\"40\"></textarea></label><br>\n", (yyvsp[-4].str), (yyvsp[-4].str));
        reset_field_attrs();
    }
#line 1518 "parser.tab.c"
    break;

  case 21: /* $@3: %empty  */
#line 336 "parser.y"
                                  {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-3].str));

        fprintf(html_file, "   <div class=\"radio-group\">\n<label>%s:</label>\n", (yyvsp[-3].str));
    }
#line 1529 "parser.tab.c"
    break;

  case 22: /* field_def: FIELD ID COLON RADIO LBRACKET $@3 option_list RBRACKET field_attrs SEMICOLON  */
#line 343 "parser.y"
                                               {
        if (is_required) {
            fprintf(html_file, 
            "  <input type=\"radio\" name=\"%s\" style=\"display:none\" tabindex=\"-1\" required>\n", current_field);
    }
            fprintf(html_file, "  </div><br>\n");
        reset_field_attrs();
    }
#line 1542 "parser.tab.c"
    break;

  case 23: /* field_def: FIELD ID COLON CHECKBOX field_attrs SEMICOLON  */
#line 352 "parser.y"
                                                  {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-4].str));

        fprintf(html_file, "  <div class=\"checkbox-option\">\n");
        fprintf(html_file, "  <input type=\"checkbox\" name=\"%s\"", (yyvsp[-4].str));

        fprintf(html_file, ">\n");
        fprintf(html_file, "  <label>%s</label>\n", (yyvsp[-4].str));
             fprintf(html_file, "   </div><br>\n");
        reset_field_attrs();
    }
#line 1559 "parser.tab.c"
    break;

  case 24: /* $@4: %empty  */
#line 365 "parser.y"
                                     {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-3].str));

        fprintf(html_file, "    <label>%s: ", (yyvsp[-3].str));
        fprintf(html_file, "     <select name=\"%s\"", (yyvsp[-3].str));
        if (is_required) fprintf(html_file, " required");
        fprintf(html_file, ">\n");

        fprintf(html_file,"    <option value=\"\" disabled selected hidden>Select an option</option>\n");
    }
#line 1575 "parser.tab.c"
    break;

  case 25: /* field_def: FIELD ID COLON DROPDOWN LBRACKET $@4 dropdown_option_list RBRACKET field_attrs SEMICOLON  */
#line 377 "parser.y"
                                                        {
             fprintf(html_file, "    </select></label><br>\n");
        reset_field_attrs();
    }
#line 1584 "parser.tab.c"
    break;

  case 26: /* field_def: FIELD ID COLON FILE_TYPE field_attrs SEMICOLON  */
#line 382 "parser.y"
                                                   {
        if (current_field) free(current_field);
        current_field = strdup((yyvsp[-4].str));

        fprintf(html_file, "    <label>%s: <input type=\"file\" name=\"%s\"", (yyvsp[-4].str), (yyvsp[-4].str));
        if (is_required) fprintf(html_file, " required");
        if (accept_val) fprintf(html_file, " accept=\"%s\"", accept_val);
            fprintf(html_file, "></label><br>\n");
        reset_field_attrs();
    }
#line 1599 "parser.tab.c"
    break;

  case 29: /* field_attr: REQUIRED  */
#line 401 "parser.y"
             {
        is_required = 1;
    }
#line 1607 "parser.tab.c"
    break;

  case 30: /* field_attr: DEFAULT EQUAL STRING  */
#line 404 "parser.y"
                         {}
#line 1613 "parser.tab.c"
    break;

  case 31: /* field_attr: MIN EQUAL NUMBER_VAL  */
#line 405 "parser.y"
                         {
        min_val = (yyvsp[0].num);
    }
#line 1621 "parser.tab.c"
    break;

  case 32: /* field_attr: MAX EQUAL NUMBER_VAL  */
#line 408 "parser.y"
                         {
        max_val = (yyvsp[0].num);
    }
#line 1629 "parser.tab.c"
    break;

  case 33: /* field_attr: PATTERN EQUAL STRING  */
#line 411 "parser.y"
                         {
        if (pattern_val) free(pattern_val);
        pattern_val = strdup((yyvsp[0].str));
    }
#line 1638 "parser.tab.c"
    break;

  case 34: /* field_attr: ACCEPT EQUAL STRING  */
#line 415 "parser.y"
                        {
        if (accept_val) free(accept_val);
        accept_val = strdup((yyvsp[0].str));
    }
#line 1647 "parser.tab.c"
    break;

  case 35: /* option_list: STRING  */
#line 423 "parser.y"
           {
        fprintf(html_file, "<div class=\"radio-option\">\n");
        fprintf(html_file, "  <input type=\"radio\" name=\"%s\" value=\"%s\" id=\"%s_%s\">\n", 
                current_field, (yyvsp[0].str), current_field, (yyvsp[0].str));
        fprintf(html_file, "  <label for=\"%s_%s\">%s</label>\n", current_field, (yyvsp[0].str), (yyvsp[0].str));
        fprintf(html_file, "</div>\n");
    }
#line 1659 "parser.tab.c"
    break;

  case 36: /* option_list: option_list COMMA STRING  */
#line 430 "parser.y"
                             {
        fprintf(html_file, "<div class=\"radio-option\">\n");
        fprintf(html_file, "  <input type=\"radio\" name=\"%s\" value=\"%s\" id=\"%s_%s\">\n", 
                current_field, (yyvsp[0].str), current_field, (yyvsp[0].str));
        fprintf(html_file, "  <label for=\"%s_%s\">%s</label>\n", current_field, (yyvsp[0].str), (yyvsp[0].str));
        fprintf(html_file, "</div>\n");
    }
#line 1671 "parser.tab.c"
    break;

  case 37: /* dropdown_option_list: STRING  */
#line 441 "parser.y"
           {
        fprintf(html_file, "  <option value=\"%s\">%s</option>\n", (yyvsp[0].str), (yyvsp[0].str));
    }
#line 1679 "parser.tab.c"
    break;

  case 38: /* dropdown_option_list: dropdown_option_list COMMA STRING  */
#line 444 "parser.y"
                                      {
        fprintf(html_file, "   <option value=\"%s\">%s</option>\n", (yyvsp[0].str), (yyvsp[0].str));
    }
#line 1687 "parser.tab.c"
    break;

  case 42: /* validation_rule: IF ID LT NUMBER_VAL LBRACE ERROR STRING SEMICOLON RBRACE  */
#line 460 "parser.y"
                                                             {
        fprintf(html_file, "<!-- Validation: if %s < %d, error: %s -->\n", (yyvsp[-7].str), (yyvsp[-5].num), (yyvsp[-2].str));
    }
#line 1695 "parser.tab.c"
    break;

  case 43: /* validation_rule: IF ID NE ID LBRACE ERROR STRING SEMICOLON RBRACE  */
#line 463 "parser.y"
                                                     {
        fprintf(html_file, "<!-- Validation: if %s != %s, error: %s -->\n", (yyvsp[-7].str), (yyvsp[-5].str), (yyvsp[-2].str));
    }
#line 1703 "parser.tab.c"
    break;


#line 1707 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 468 "parser.y"


//handles parsing errors
void yyerror(const char *s) {
    extern char *yytext;
    fprintf(stderr, "Parse error: %s at '%s'\n", s, yytext);
    if (html_file) fclose(html_file);
    exit(1);
}
