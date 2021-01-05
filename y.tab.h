/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    BCOMMENT = 258,
    ECOMMENT = 259,
    IF = 260,
    ELSE = 261,
    INT = 262,
    RETURN = 263,
    VOID = 264,
    WHILE = 265,
    PLUS = 266,
    MINUS = 267,
    MULTIPLY = 268,
    DIVIDE = 269,
    LESS_THAN = 270,
    LESS_OR_EQUAL = 271,
    GREATER_THAN = 272,
    GREATER_OR_EQUAL = 273,
    EQUALS = 274,
    ASSIGNMENT = 275,
    NOT_EQUALS = 276,
    EOL = 277,
    COMMA = 278,
    LEFT_PARANTHESIS = 279,
    RIGHT_PARANTHESIS = 280,
    LEFT_BRACKET = 281,
    RIGHT_BRACKET = 282,
    LEFT_SQR_BRACKET = 283,
    RIGHT_SQR_BRACKET = 284,
    DECLARE = 285,
    VAR = 286,
    BOOL = 287,
    CHAR = 288,
    STRING = 289,
    INT_P = 290,
    CHAR_P = 291,
    REAL_P = 292,
    FUNC = 293,
    PROC = 294,
    NULL_P = 295,
    LOGICAL_P = 296,
    AND = 297,
    POWER = 298,
    NOT = 299,
    OR = 300,
    LENGTH = 301,
    REAL_VALUE = 302,
    REAL = 303,
    LOGICAL_AND = 304,
    ADDRESS = 305,
    NL = 306,
    SYMPOL = 307,
    STRINGVALUE = 308,
    ID = 309,
    FUNCID = 310,
    INT_VALUE = 311,
    BOOL_VALUE = 312,
    NUM = 313
  };
#endif
/* Tokens.  */
#define BCOMMENT 258
#define ECOMMENT 259
#define IF 260
#define ELSE 261
#define INT 262
#define RETURN 263
#define VOID 264
#define WHILE 265
#define PLUS 266
#define MINUS 267
#define MULTIPLY 268
#define DIVIDE 269
#define LESS_THAN 270
#define LESS_OR_EQUAL 271
#define GREATER_THAN 272
#define GREATER_OR_EQUAL 273
#define EQUALS 274
#define ASSIGNMENT 275
#define NOT_EQUALS 276
#define EOL 277
#define COMMA 278
#define LEFT_PARANTHESIS 279
#define RIGHT_PARANTHESIS 280
#define LEFT_BRACKET 281
#define RIGHT_BRACKET 282
#define LEFT_SQR_BRACKET 283
#define RIGHT_SQR_BRACKET 284
#define DECLARE 285
#define VAR 286
#define BOOL 287
#define CHAR 288
#define STRING 289
#define INT_P 290
#define CHAR_P 291
#define REAL_P 292
#define FUNC 293
#define PROC 294
#define NULL_P 295
#define LOGICAL_P 296
#define AND 297
#define POWER 298
#define NOT 299
#define OR 300
#define LENGTH 301
#define REAL_VALUE 302
#define REAL 303
#define LOGICAL_AND 304
#define ADDRESS 305
#define NL 306
#define SYMPOL 307
#define STRINGVALUE 308
#define ID 309
#define FUNCID 310
#define INT_VALUE 311
#define BOOL_VALUE 312
#define NUM 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 56 "lexer.y"

 
   char *valueToShow;
   struct node* n;

#line 179 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
