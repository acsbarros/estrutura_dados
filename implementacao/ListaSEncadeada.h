#ifndef LISTAS_ENCADEADA_H
#define	LISTAS_ENCADEADA_H

#include <stdio.h>
#include <stdlib.h>

//Cria o TAD
struct No{
	int dado;
	bool noCabeca;
	struct No *prox;	
};//TAD - Tipo Abstrato de Dado
typedef No lista;

//operações ou regras para serem implementadas.
lista* criar();
bool isEmpty(lista* l);
void list(lista *l);
bool add(lista* l, int valor);
bool remove(lista* l, int pos);

#endif	/* LISTAS_ENCADEADA_H */

