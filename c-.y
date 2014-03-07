/****************************************************/
/* File: c-.y                                       */
/* Arquivo baseado no TINY.Y presente no livro      */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/
%{
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
%}

%token IF ELSE INT RETURN VOID WHILE
%token ID NUM
%token LEQ LT BEQ BT EQ NEQ SEMI
%token LPAREN RPAREN LCHAVE RCHAVE LCOLCH RCOLCH
%token ERROR ENDFILE
%token STRING
%token STR
%token COMENTARIO
%left PLUS MINUS
%left MUL DIV COMMA
%right ASSIGN

%%

program     : declar_list { savedTree = $1;}
            ;
declar_list : declar_list declar
                 { YYSTYPE t = $1;
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = $2;
                     $$ = $1; }
                   else $$ = $2;
                 }
            | declar  { $$ = $1; }
            ;
declar      : var_declar { $$ = $1; }
            | fun_declar { $$ = $1; }
            ;
var_declar  : type_spec ID SEMI
                 { $$ = newDeclNode(varK);
                   $$->child[0] = $1;
                   $$->attr.name = copyString(st_pop());
                   $$->array_size = 0;
                 }
            | type_spec ID LCOLCH NUM RCOLCH SEMI
                 { $$ = newDeclNode(varK);
                   $$->child[0] = $1;
                   $$->array_size = atoi(st_pop());
                   $$->attr.name = copyString(st_pop());
                 }
            ;
type_spec   : INT
            { $$ = newExpNode(TypeK);
              $$->type = Integer;
            }
	    | STRING//tipo string adicionado
	    { $$ = newExpNode(TypeK);
	      $$->type = String;
	    }
            | VOID
            { $$ = newExpNode(TypeK);
              $$->type = Void;
            }
            ;
fun_declar  : type_spec ID { savedLineNo = lineno;} 
		 LPAREN params RPAREN compound_stmt
                 { $$ = newDeclNode(funK);
                   $$->child[0] = $1;
                   $$->child[1] = $5;
                   $$->child[2] = $7;
                   $$->attr.name = copyString(st_pop());
		   $$->lineno = savedLineNo;
                 }
            ;
params      : param_list { $$ = $1; }
            | VOID
            { $$ = newDeclNode(paramK);
		$$->array_size = -1;
		$$->type = Void;
		$$->paramnum = 0;
            }
            ;
param_list  : param_list COMMA param
                 { YYSTYPE t = $1;
                   if (t != NULL)
                       { while (t->sibling != NULL)
                           t = t->sibling;
                         t->sibling = $3;
                         $$ = $1; }
                   else $$ = $3;
                 }
            | param { $$ = $1; }
            ;
param       : type_spec ID
                 { $$ = newDeclNode(paramK);
                   $$->child[0] = $1;
                   $$->attr.name = copyString(st_pop());
                   $$->array_size = 0;
                 }
            | type_spec ID LCOLCH RCOLCH
                 { $$ = newDeclNode(paramK);
                   $$->child[0] = $1;
                   $$->attr.name = copyString(st_pop());
		   $$->array_size = 1;
                 }
            ;
compound_stmt : LCHAVE local_declar stmt_list RCHAVE
                 { $$ = newStmtNode(CompoundK);
                   $$->child[0] = $2;
                   $$->child[1] = $3;
                 }
             ;
local_declar : local_declar var_declar
                 { YYSTYPE t = $1;
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = $2;
                     $$ = $1; }
                     else $$ = $2;
                 }
             | empty { $$ = $1; }
             ;
stmt_list    : stmt_list stmt
                 { YYSTYPE t = $1;
                   if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = $2;
                     $$ = $1; }
                     else $$ = $2;
                 }
             | empty { $$ = $1; }
             ;
stmt         : expr_stmt { $$ = $1; }
	     | compound_stmt { $$ = $1; }
	     | selection_stmt { $$ = $1; }
	     | iteration_stmt { $$ = $1; }
	     | return_stmt { $$ = $1; }
	     ;
expr_stmt    : expr SEMI { $$ = $1; }
             | SEMI { $$ = NULL; }
             ;
selection_stmt : IF LPAREN expr RPAREN stmt
               { $$ = newStmtNode(IfK);
                 $$->child[0] = $3;
                 $$->child[1] = $5;
               }
               | IF LPAREN expr RPAREN stmt ELSE stmt
               { $$ = newStmtNode(IfK);
                 $$->child[0] = $3;
                 $$->child[1] = $5;
                 $$->child[2] = $7;
               }
               ;
iteration_stmt : WHILE LPAREN expr RPAREN stmt
                 { $$ = newStmtNode(WhileK);
                   $$->child[0] = $3;
                   $$->child[1] = $5;
                 }
               ;
return_stmt    : RETURN SEMI
                 { $$ = newStmtNode(ReturnK);
		   $$->type = Void;
		 }
               | RETURN expr SEMI
                 { $$ = newStmtNode(ReturnK);
                   $$->child[0] = $2;
                 }
               ;
expr           : var ASSIGN expr
               { $$ = newStmtNode(AssignK);
                 $$->child[0] = $1;
                 $$->child[1] = $3;
               }
               | simple_expr
               { $$ = $1;
               }
               ;
var            : ID
               { $$ = newExpNode(IdK);
                 $$->attr.name = copyString(st_pop());
		 $$->array_size = 0;
		 $$->type = Integer;
               }
               | ID LCOLCH expr RCOLCH
               { $$ = newExpNode(IdK);
                 $$->attr.name = copyString(st_pop());
                 $$->child[0] = $3;
		 $$->array_size = 1;
		 $$->type = Integer;
               }
               ;
simple_expr : additive_expr relop additive_expr
                { $$ = newExpNode(CalcK);
                  $$->child[0] = $1;
                  $$->child[1] = $2;
                  $$->child[2] = $3;
                }
            | additive_expr { $$ = $1; }
            ;
relop       : LEQ
                { $$ = newExpNode(OpK);
                  $$->attr.op = LEQ;
                }
            | LT
                { $$ = newExpNode(OpK);
                  $$->attr.op = LT;
                }
            | BT
                { $$ = newExpNode(OpK);
                  $$->attr.op = BT;
                }
            | BEQ
                { $$ = newExpNode(OpK);
                  $$->attr.op = BEQ;
                }
            | EQ
                { $$ = newExpNode(OpK);
                  $$->attr.op = EQ;
                }
            | NEQ
                { $$ = newExpNode(OpK);
                  $$->attr.op = NEQ;
                }
            ;
additive_expr : additive_expr addop term
                { $$ = newExpNode(CalcK);
                  $$->child[0] = $1;
                  $$->child[1] = $2;
                  $$->child[2] = $3;
                }
              | term { $$ = $1; }
              ;
addop         : PLUS
                { $$ = newExpNode(OpK);
                  $$->attr.op = PLUS;
                }
              | MINUS
                { $$ = newExpNode(OpK);
                  $$->attr.op = MINUS;
                }
              ;
term          : term mulop factor
                { $$ = newExpNode(CalcK);
                  $$->child[0] = $1;
                  $$->child[1] = $2;
                  $$->child[2] = $3;
                }
               | factor { $$ = $1; }
               ;
mulop          : MUL
                { $$ = newExpNode(OpK);
                  $$->attr.op = MUL; }
               | DIV { $$ = newExpNode(OpK);
                  $$->attr.op = DIV; }
               ;
factor    : LPAREN expr RPAREN { $$ = $2; }
          | var { $$ = $1; }
          | call { $$ = $1; }
          | NUM
            { $$ = newExpNode(ConstK);
	      $$->type = Integer;
              $$->attr.val = atoi(st_pop());
            }
	  | STR //string aqui
	    { $$ = newExpNode(StrK);
	      $$->type = String;
	      $$->attr.vals = tokenString;
	    };
call      : ID LPAREN args RPAREN
            { $$ = newStmtNode(CallK);
              $$->attr.name = copyString(st_pop());
              $$->child[0] = $3;
              /* $$->lineno = savedLineNo; */
            };
args       : arg_list { $$ = $1; } | empty { $$ = $1; };

arg_list : arg_list COMMA expr
             { YYSTYPE t = $1;
               if (t != NULL)
                 { while (t->sibling != NULL)
                     t = t->sibling;
                   t->sibling = $3;
                   $$ = $1; }
               else $$ = $3;
             }
          | expr { $$ = $1; }
          ;
empty     : { $$ = NULL; };
%%

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

