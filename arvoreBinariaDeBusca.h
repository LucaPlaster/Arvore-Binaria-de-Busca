#include <stdio.h>
#include <stdlib.h>

typedef struct arvBinaria{
    int info;
    struct arvBinaria *esq;
    struct arvBinaria *dir;
}arvoreBinaria;

arvoreBinaria* criarArvoreVazia();
void destruirArvore(arvoreBinaria *arvore);
