#ifndef PILHA_COM_VETORES_H
#define	PILHA_COM_VETORES_H

#include <stdio.h>
#include <stdlib.h>
#define TAM_PILHA 3

typedef struct {
	int dados[TAM_PILHA];
	int topo;
}Pilha;

void init(Pilha& p);
bool isEmpty(Pilha& p);
bool isEFull(Pilha& p);
void list(Pilha p);//passagem de parametro por valor ou copia
bool push(Pilha& p, int valor);
bool pop(Pilha& p, int &valor);



#endif	/* PILHA_COM_VETORES_H */
