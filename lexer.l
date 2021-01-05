%{
#include<stdio.h>
#include"y.tab.h"


void yyerror(char const *s) {
      fprintf(stderr, "line %d: %s\n", yylineno, s);
    
    }
%}
%option yylineno

%%


"bool"			    return BOOL ;
"char"			    return CHAR;
"if"                        return IF;
"else"                      return ELSE;
"int"                       return INT;
"real"			    return REAL;
"string"		    return STRING;
"int*"		            return INT_P;
"char*"	                    return CHAR_P;
"real*"			    return REAL_P;
"var"			    return VAR;
"func"			    return FUNC;
"proc"			    return PROC;
"return"                    return RETURN;
"while"                     return WHILE;
"null"			    return NULL_P;
"&&"			    return LOGICAL_AND;
"&"			    return ADDRESS;
"!"			    return NOT;
"||"			    return OR;
"+"                         return PLUS;
"-"                         return MINUS;
"*"                         return MULTIPLY;
"/"                         return DIVIDE;
"<="                        return LESS_OR_EQUAL;
"<"                         return LESS_THAN;                     
">="                        return GREATER_OR_EQUAL;
">"                         return GREATER_THAN;
"=="                        return EQUALS;
"!="                        return NOT_EQUALS;
"="                         return ASSIGNMENT;
";"                         return EOL;
","                         return COMMA;
"{"                         return '{';
"}"                         return '}';
"("                         return '(';
")"                         return ')';
"["                         return '[';
"%"                         return '%';
"]"                         return ']';
"^"                         return POWER;
[']                        return SYMPOL;
\"(\\.|[^"\\])*\"            {yylval.valueToShow=strdup(yytext);return STRINGVALUE;}
[_a-zA-Z][_a-zA-Z0-9]*        {yylval.valueToShow=strdup(yytext); return ID;}
[a-zA-Z][_a-zA-Z0-9]*       {yylval.valueToShow=strdup(yytext); return FUNCID;}

[0x][0-9A-F]|0-9]+	  { yylval.valueToShow=strdup(yytext); return INT_VALUE;}
"true"|"false"		   {yylval.valueToShow=strdup(yytext); return BOOL_VALUE;}
":" return DECLARE;	
[0-9]+ { yylval.valueToShow=strdup(yytext); return NUM;}
[\n]                        yylineno+1;

"/%"                    return BCOMMENT;
"%/"                       return ECOMMENT;


%%

