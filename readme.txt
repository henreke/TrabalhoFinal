Aqui segue os comando para compilar o código completo(Análise Léxica, Sintática e semântica)

bison -d c-.y
flex c-.l
gcc main.c c-.tab.c lex.yy.c analyze.c symtab.c util.c -lfl -w
./a.out arquivoteste

Ele vai imprimir a arvore sintática e vai fazer a análise semântica imprimindo as variaveis e informando se há algum conflito.

se quiser imprimir apenas a análise lexica basta definir os parametros NO_PARSE e NO_ANALYZE para TRUE, E o TraceScan para TRUE.

