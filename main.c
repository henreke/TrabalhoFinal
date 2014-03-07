/****************************************************/
/* File: main.c                                     */
/* Main program for TINY compiler                   */
/*Arquivo baseado no main.c presente no livro       */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include "globals.h"

/* set NO_PARSE to TRUE to get a scanner-only compiler */
#define NO_PARSE FALSE
/* set NO_ANALYZE to TRUE to get a parser-only compiler */
#define NO_ANALYZE FALSE

#include "util.h"
#if NO_PARSE
#include "scan.h"
#else
#include "c-.tab.h"
#if !NO_ANALYZE
#include "analyze.h"
#endif
#endif

/* allocate global variables */
int lineno = 0;
FILE * source;
FILE * listing;
FILE * code;
extern FILE * yyin;
extern FILE *  yyout;
/* allocate and set tracing flags */
int EchoSource = FALSE;
int TraceScan = FALSE;
int TraceParse = TRUE;
int TraceAnalyze = TRUE;
int TraceCode = FALSE;

int Error = FALSE;
int firstTime = TRUE;
main( int argc, char * argv[] )
{ TreeNode * syntaxTree;
  char pgm[120]; /* source code file name */
  if (argc != 2)
    { fprintf(stderr,"usage: %s <filename>\n",argv[0]);
      exit(1);
    }
  strcpy(pgm,argv[1]) ;
  if (strchr (pgm, '.') == NULL)
     strcat(pgm,".tny");
  source = fopen(pgm,"r");
  if (source==NULL)
  { fprintf(stderr,"File %s not found\n",pgm);
    exit(1);
  }
  listing = stdout; /* send listing to screen */
  lineno = 1;

#if NO_PARSE
  while (getToken()!=ENDFILE);
#else
  yyin=source;
  yyout=listing;
  syntaxTree = parse();
  if (TraceParse) {
    fprintf(listing,"\nSyntax tree:\n");
    printTree(syntaxTree);
  }
Error=FALSE;
#if !NO_ANALYZE
  if (! Error)
  { 
	if(TraceAnalyze) fprintf(listing,"\nBuilding Symbol Table & Checking Types...\n\n");
		buildSymtab(syntaxTree);
        if (TraceAnalyze) fprintf(listing,"\nType Checking Finished\n");
  }
#endif
#endif
  fclose(source);
  return 0;
}

