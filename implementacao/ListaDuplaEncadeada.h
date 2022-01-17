#ifndef LISTAS_ENCADEADA_H
#define	LISTAS_ENCADEADA_H

#include <stdio.h>
#include <stdlib.h>

//Cria o TAD
struct No {
	int dado;	
	struct No* prox;
	struct No* ant;
};//TAD - Tipo Abstrato de Dado
typedef No listaDupla;

//operações ou regras para serem implementadas.
listaDupla* criar();
bool isEmpty(listaDupla* l);
void list(listaDupla* l);
bool add(listaDupla* l, int valor, int posAdd);
bool remove(listaDupla* l, int posRemover);

int findNo(listaDupla* l, int pos);

#endif	/* LISTAS_ENCADEADA_H */

