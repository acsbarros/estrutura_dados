
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
//A IMPLEMENTAÇAO DA PILHA É USADA EM SALA DE AULA APENAS SEPAREI EM ARQUIVOS
#include "PilhaComAlocacaoDinamicaInt.h"

int main()
{
    Pilha p;  
    inicializa(&p);
    push(&p,3);
    push(&p, 4);
    push(&p, 5);
    push(&p, 10);
    pop(&p);
    pop(&p);
  

    listarPilhaPD(&p);



}



/*
cout << "p: " << &p;
    //printf("\n p: %x", &p);
   // printf("\n p.topo: %x", &p.topo);
    inicializa(&p);
    cout << "\n p: " << &p.topo;
    cout << "\n p: " << &p;
   // printf("\n p.topo: %x", &p.topo);

    //PUSH
    No* novo;
    novo = (No*)malloc(sizeof(No));
    cout << "\n novo: " << &novo;
   // printf("\n novo: %x", &novo);
    novo->info = 2;
    novo->anterior = p.topo;
    cout << "\n novo->anterior: " << &novo->anterior;

  //  printf("\n novo->anterior: %x", &p.topo);
    p.topo = novo;
    cout << "\n p.topo: " << &p.topo;
  //  printf("\n p.topo: %x", &p.topo);
    //PUSH
    No* novo2;
    novo2 = (No*)malloc(sizeof(No));
 //   printf("\n novo: %x", &novo2);
    novo2->info = 678;
    novo2->anterior = p.topo;
 //   printf("\n novo->anterior: %x", &p.topo);
    p.topo = novo2;
 //   printf("\n p.topo: %x", &p.topo);

    No* noAux;
    noAux = p.topo;
    while (noAux != NULL) {
        // printf("[%c]\n",noAux->info);
        printf("\n[%d]\n", noAux->info);
    //    printf("\n p.topo: %x", &noAux);
        noAux = noAux->anterior;
    }

*/



















