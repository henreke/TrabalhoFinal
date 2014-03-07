all: c-.tab lex.yy main
c-.tab:c-.y
	bison -d c-.y
lex.yy:c-.l c-.tab.c
	flex c-.l
main:main.o c-.tab.o lex.yy.o analyze.o symtab.o util.o
	gcc main.o c-.tab.o lex.yy.o analyze.o symtab.o util.o -lfl -w
