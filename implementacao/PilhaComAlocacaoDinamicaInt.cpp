#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhaComAlocacaoDinamicaInt.h"

void inicializa(Pilha *p){
    p->topo = NULL;
}

int isEmpty(Pilha *p){
   if(p->topo == NULL){
      return 1;
   }else{
      return 0;
   }
}

/*A funcao push aloca espaco para um novo No
da pilha. Alem disso, ela retorna 1 se conseguir
alocar espaco para o novo no e 0 caso contrario*/

int push(Pilha *p, int info){
    /*Alocacao de um novo no*/
    No *novoNo;
    novoNo = (No*)malloc(sizeof(No));

    if(novoNo == NULL){
        //Retorna 0, indicando insucesso na insercao
        return 0;
    }else{
        //Encadeia o novo no na pilha p
        //Retorna 1 indicando sucesso na insercao
        novoNo->info = info;
        novoNo->anterior = p->topo;
        p->topo = novoNo;
        return 1;
    }

}

int* pop(Pilha *p){
    if(isEmpty(p)==1){
        return NULL;
    }else{
        No *noRemovido;
        noRemovido = (No*)malloc(sizeof(No));
        int *infoRemovida;

        infoRemovida = (int*)malloc(sizeof(int));

        noRemovido = p->topo;
        *infoRemovida = noRemovido->info;

        p->topo = p->topo->anterior;

        free(noRemovido);

        return infoRemovida;
    }


}

int* top(Pilha *p){
    if(isEmpty(p)==1){
        return NULL;

    }else{
        int *infoRemovida;
        infoRemovida = (int*)malloc(sizeof(int));
        *infoRemovida = p->topo->info;
        return infoRemovida;
    }


}
void listarPilhaPD(Pilha *p)
{
     No *noAux;
     noAux = p->topo;

     while(noAux != NULL){
        // printf("[%c]\n",noAux->info);
         printf("[%d]\n", noAux->info);
         noAux = noAux->anterior;
     }
}
Pilha* inverte(Pilha *p){
    Pilha *pAux;
    pAux = (Pilha*)malloc(sizeof(Pilha));
    inicializa(pAux);
    int *aux;
    while(!isEmpty(p)){
        aux = pop(p);
        push(pAux, *aux);
    }
    return pAux;
}