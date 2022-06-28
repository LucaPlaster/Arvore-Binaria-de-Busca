/*
    Arvore Binaria de Busca

    Gustavo Rodrigues Ribeiro - 202003570
    Luca Mascarenhas Plaster - 202014610
    Maria Heloisa de Paula Souza - 202003599

            fflush(stdin); 
            continuar = getchar();
            system("cls");
*/

#include "arvoreBinariaDeBusca.h"

int main(){
    printf("-----------Arvore Binaria de Busca----------\n");

    int operacao;
    char continuar;
    arvoreBinaria *arvore;

    criarArvoreVazia();

    printf("0 - Finalizar progama\n");
    printf("1 - Destruir arvore binaria\n");

    switch (operacao)
    {
    case 0:
        free(arvore);
        return 0;
        break;

    case 1:
        destruirArvore(arvore);
        break;  
    
    default:
        break;
    }
}

arvoreBinaria *criarArovreVazia(){
    return NULL;
}

//Destruir a árvore
void destruirArvore(arvoreBinaria *arv){
    if(arv != NULL){
        destruirArvore(arv->dir);
        destruirArvore(arv->esq);
        free(arv);
    }
    else{
        printf("Nao ha arvores existentes para serem destruidas\n");
    }   

    return 0;
}


