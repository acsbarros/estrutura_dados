#include "MyFila_A_D_Info_char.h"

void inicializa(Fila *f){
    f->inicio = NULL;
    f->fim = NULL;

}
int isEmpty(Fila *f){
    if(f->inicio==NULL && f->fim==NULL){
       return 1;
    }else{
       return 0;
    }

}

int enqueue(Fila *f, transacao info){
    No *novoNo;
    novoNo = (No*)malloc(sizeof(No));
    if(novoNo == NULL){
      return 0;
    }else{
       novoNo->info = info;
       novoNo->proximo = NULL;

       if(isEmpty(f)){
           f->inicio = novoNo;
       }else{
           f->fim->proximo = novoNo;
       }
       f->fim = novoNo;
       return 1;
    }
}


transacao* dequeue(Fila *f){
       if(isEmpty(f)){
          return NULL;
       }else{
          No *noRemovido;
          transacao *infoRemovida;

          infoRemovida = (transacao*)malloc(sizeof(transacao));

           noRemovido = f->inicio;
          *infoRemovida = f->inicio->info;

          //Esse if testa se a fila contém
          //apenas um elemento. Nesse caso,
          //o fim da fila passará a ser NULL
          if(f->inicio->proximo == NULL){
             f->fim = NULL;
          }

          f->inicio = f->inicio->proximo;

          free(noRemovido);

          return infoRemovida;
       }
}


void listar(Fila *f){
    No *noAux;
    noAux = (No*)malloc (sizeof(No));

    noAux = f->inicio;
    while (noAux != NULL){
        printf ("%d ", noAux -> info);
        noAux = noAux -> proximo;
    }
}