/****************************************************/
/* File: symtab.c                                   */
/* Symbol table implementation for the TINY compiler*/
/* (allows only one symbol table)                   */
/* Symbol table is implemented as a chained         */
/* hash table                                       */
/*Arquivo baseado no symtab.c presente no livro     */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "globals.h"
#include "symtab.h"
#include "util.h"

/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
void st_insert( TreeNode *t, int loc, int addflag )
{ int h = hash(t->attr.name);
  BucketList l =  hashTable[h];
  TreeNode * s;
  int tmp;

  while ((l != NULL) && (strcmp(t->attr.name,l->name) != 0))
    l = l->next;

  if (addflag) /* variable not yet in table */
    { l = (BucketList) malloc(sizeof(struct BucketListRec));
      l->name = t->attr.name;
      l->lines = (LineList) malloc(sizeof(struct LineListRec));
      l->lines->lineno = t->lineno;
      l->memloc = loc;
      l->scope = t->scope;

      l->tnode_p = t;
      l->lines->next = NULL;
      l->next = hashTable[h];

      if(t->kind.decl == funK){
	if(t->child[0]->type == Void){
	  t->type = Void;
	}
	else{
	  t->type = Integer;
	}

	//if(t->child[1]->type == Void){
	if(t->child[1]->array_size == -1){//void
	  t->paramnum = 0;
	}
	else{
	  tmp = 0;
	  s = t->child[1];
	  while(s != NULL){
	    tmp++;
	    s = s->sibling;
	  }
	  t->paramnum = tmp;
	}
      }
      else{
	t->paramnum = -1;
      }
      hashTable[h] = l;
    } else /* found in table, so just add line number */
    { LineList ll = l->lines;
      while (ll->next != NULL) ll = ll->next;
      ll->next = (LineList) malloc(sizeof(struct LineListRec));
      ll->next->lineno = t->lineno;
      ll->next->next = NULL;
    }
} /* st_insert */

void st_delete ( int scope ) {
  int i;

  for (i = 0; i < SIZE; i++) {
    BucketList l = hashTable[i];

    while ( (l != NULL) && (l->scope > scope) ){
      hashTable[i] = l->next;
      fprintf(listing,"%-5d  %-14s %-10d ",l->scope,l->name,l->memloc);
      //if(l->tnode_p->paramnum != -1){//function
      if(l->tnode_p->kind.decl == funK){
	if(l->tnode_p->child[0]->type == Void){
	  fprintf(listing,"%-6s ","void");
	}
	else if(l->tnode_p->child[0]->type == Integer){
	  fprintf(listing,"%-6s ","int");
	}else
 	  fprintf(listing,"%-5s ","string");
	fprintf(listing,"%-9s %-9d %-8s %-7s  ","não",0,"sim","não");
      }
      else if(l->tnode_p->kind.decl == paramK){
	if(l->tnode_p->array_size > 0){//array
	  if (l->tnode_p->type==Integer)
		  fprintf(listing,"%-6s %-9s %-9d %-8s %-8s  ","int","sim",l->tnode_p->array_size,"não","sim");
	  else
		  fprintf(listing,"%-5s %-9s %-9d %-8s %-8s  ","string","sim",l->tnode_p->array_size,"não","sim");
	}
	else{
	  if (l->tnode_p->type==Integer)
        	  fprintf(listing,"%-6s %-9s %-9d %-8s %-8s  ","int","não",0,"não","sim");
	  else
        	  fprintf(listing,"%-5s %-9s %-9d %-8s %-8s  ","string","não",0,"no","sim");
	}
      }
      else if(l->tnode_p->array_size > 0){//array
	  if (l->tnode_p->type==Integer)
		fprintf(listing,"%-6s %-9s %-9d %-8s %-8s  ","int","sim",l->tnode_p->array_size,"não","não");
	  else
		fprintf(listing,"%-5s %-9s %-9d %-8s %-8s  ","string","sim",l->tnode_p->array_size,"não","não");
      }
      else{
	if (l->tnode_p->type==Integer)
		fprintf(listing,"%-6s %-9s %-9d %-8s %-8s  ","int","não",0,"não","não");
	else
		fprintf(listing,"%-5s %-9s %-9d %-8s %-8s  ","string","não",0,"não","não");
      }

      LineList t = l->lines;
      while(t != NULL) {
	LineList next = t->next;
	fprintf(listing,"%4d ",t->lineno);
	free(t);
	t = next;
      }
      fprintf(listing,"\n");
      free(l);
      l = hashTable[i];
    }
  }
  return ;
}

/* Function st_lookup returns the memory 
 * location of a variable or -1 if not found
 */
int st_lookup ( char * name )
{ int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l == NULL) return -1;
  else return l->memloc;
}

/*
 */
int st_advanced_lookup ( char *name , int scope) {
  int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0 || l->scope != scope))
    l = l->next;
  if (l == NULL) return -1;
  else return l->memloc;
}

BucketList st_type_lookup ( char *name ){
  int h = hash(name);
  BucketList l =  hashTable[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;

  if (l == NULL){
    return NULL;
  }
  else{
    return l;
  }
}

/* Procedure printSymTab prints a formatted 
 * listing of the symbol table contents 
 * to the listing file
 */
void printSymTab(FILE * listing)
{ int i;
  fprintf(listing,"Scopo  Variavel       Local     Type    Vet     NVet      Func    Param    Linnhas\n");
  fprintf(listing,"-----  ---------      -----     ----    ----    ----      ----    ------   -------\n");
  for (i=0;i<SIZE;++i)
    { if (hashTable[i] != NULL)
	{ BucketList l = hashTable[i];
	  while (l != NULL)
	    { LineList t = l->lines;
	      fprintf(listing,"%-5d  ",l->scope);
	      fprintf(listing,"%-14s ",l->name);
	      fprintf(listing,"%-8d  ",l->memloc);
	      while (t != NULL)
		{ fprintf(listing,"%4d ",t->lineno);
		  t = t->next;
		}
	      fprintf(listing,"\n");
	      l = l->next;
	    }
	}
    }
} /* printSymTab */

