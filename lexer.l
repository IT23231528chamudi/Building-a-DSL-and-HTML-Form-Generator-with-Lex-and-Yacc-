%{
#include "parser.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

/*Regular Expression Patterns*/
DIGIT   [0-9]
ID      [a-zA-Z_][a-zA-Z0-9_]*
STRING  \"([^\\\"]|\\.)*\"

%%

 
"form"              { return FORM; }
"section"           { return SECTION; }
"field"             { return FIELD; }
"meta"              { return META; }
"validate"          { return VALIDATE; }
"if"                { return IF; }
"error"             { return ERROR; }

 
"text"              { return TEXT; }
"textarea"          { return TEXTAREA; }
"number"            { return NUMBER; }
"email"             { return EMAIL; }
"date"              { return DATE; }
"checkbox"          { return CHECKBOX; }
"dropdown"          { return DROPDOWN; }
"radio"             { return RADIO; }
"password"          { return PASSWORD; }
"file"              { return FILE_TYPE; }

 
"required"          { return REQUIRED; }
"default"           { return DEFAULT; }
"min"               { return MIN; }
"max"               { return MAX; }
"pattern"           { return PATTERN; }
"accept"            { return ACCEPT; }
"rows"              { return ROWS; }
"cols"              { return COLS; }

 
"!="                { return NE; }
"=="                { return EQOP; }


{STRING}            { 
    /*Remove surrounding quotes*/
    char *str = malloc(yyleng - 1);
    strncpy(str, yytext + 1, yyleng - 2);
    str[yyleng - 2] = '\0';
    yylval.str = str;
    return STRING;
}
{ID}                { yylval.str = strdup(yytext); return ID; }
{DIGIT}+            { yylval.num = atoi(yytext); return NUMBER_VAL; }

"["                 { return LBRACKET; }
"]"                 { return RBRACKET; }
"{"                 { return LBRACE; }
"}"                 { return RBRACE; }
":"                 { return COLON; }
";"                 { return SEMICOLON; }
"="                 { return EQUAL; }
"<"                 { return LT; }
">"                 { return GT; }
","                 { return COMMA; }

 
[ \t\n\r]+          { /* skip whitespace */ }
.                   { printf("Unknown character: %s\n", yytext); }

%%

int yywrap() {
    return 1;
}
