/****************************************************/
/* File: c-.l                                       */
/* Arquivo baseado no TINY.L presente no livro:     */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/
%{
#include "globals.h"
#include "util.h"
#include "scan.h"
#include "c-.tab.h"

/* lexeme of identifier or reserved word */
char tokenString[MAXTOKENLEN+1];
extern YYSTYPE yylval;
%}

digit       [0-9]
number      {digit}+
letter      [a-zA-Z]
identifier  {letter}+
newline     \n
whitespace  [ \t]+

%%

"if"		{return IF;}
"else"		{return ELSE;}
"int"		{return INT;}
"string"	{return STRING;}
"return"	{return RETURN;}
"void"		{return VOID;}
"while"		{return WHILE;}
"+"		{return PLUS;}
"-"		{return MINUS;}
"*"		{return MUL;}
"/"		{return DIV;}
"<="		{return LEQ;}
"<"		{return LT;}
">="		{return BEQ;}
">"		{return BT;}
"=="		{return EQ;}
"!="		{return NEQ;}
"="		{return ASSIGN;}
";"		{return SEMI;}
","		{return COMMA;}
"("		{return LPAREN;}
")"		{return RPAREN;}
"{"		{return LCHAVE;}
"}"		{return RCHAVE;}
"["		{return LCOLCH;}
"]"		{return RCOLCH;}
"/*"		{comentario();/* return COMENTARIO;*/}
{number}        {st_push(yytext); return NUM;}
"\""		{strment(); return STR;}
{identifier}    {st_push(yytext); return ID;}
{newline}       {lineno++;}
{whitespace}    {/* skip whitespace */}
<<EOF>>		{return ENDFILE;}
.               {return ERROR;}
%%

TokenType getToken(void)
{ static int firstTime = TRUE;
  TokenType currentToken;
  if (firstTime)
  { firstTime = FALSE;
    lineno++;
    yyin = source;
    yyout = listing;
  }
  currentToken = yylex();
  if (currentToken != STR)
    strncpy(tokenString,yytext,MAXTOKENLEN);
  if (TraceScan) {
    fprintf(listing,"\t%d",lineno);
    printToken(currentToken,tokenString);
  }
  return currentToken;
}
strment()
{
	
	char c,c2;
        char *c1;
	char *temp;
        c=input();
        c1=malloc(1*sizeof(char));
        int n=1;
	while (c != 34	)
	{
		if (c==92)
		{
			c2=c;
			c=input();
			if (c==34)
			{
				char *temp2 = realloc(c1, n*sizeof(int));
		                c1=temp2;
        			c1[n-1]=c2;
				n++;
			}
		}
		temp = realloc(c1, n*sizeof(int));
                c1=temp;
                c1[n-1]=c;
		c=input();
		n++;
		
	}
        strncpy(tokenString,temp,MAXTOKENLEN);
	
}
comentario()
{
    char c,c1;
    int n=1;
    c=input();
    while (n!=0)
    {
      c1=input();
      if ((c=='/') && (c1=='*'))
      {
          c1=input();
          n++;
      }else  if ((c=='*') &&(c1=='/'))
      {
	  n--;
          c1=input();
      }
      c=c1;
    }
}
