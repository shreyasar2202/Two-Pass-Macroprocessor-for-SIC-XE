
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


