#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaLinearesSimples.h"

Lista* inicializa(void)
{
	return NULL;
}

Lista* insere (Lista* l, int i)
{
 Lista* novo = (Lista*) malloc(sizeof(Lista));
 novo->info = i;
 novo->prox = l;
 return novo;
}

void imprime(Lista* l)
{
	Lista* p; /* vari�vel auxiliar para percorrer a lista */
	for (p = l; p != NULL; p = p->prox)
		printf("info = % d\n", p->info);
}

int isEmpty(Lista* l)
{
	return (l == NULL);
}
Lista* find(Lista* l, int v)
{
	Lista* p;
	for (p = l; p != NULL; p = p->prox)
		if (p->info == v)
			return p;
	return NULL; /* n�o achou o elemento */
}

Lista* retira(Lista* l, int v) {
	Lista* ant = NULL; /* ponteiro para elemento anterior */
	Lista* p = l; /* ponteiro para percorrer a lista*/
	/* procura elemento na lista, guardando anterior */
	while (p != NULL && p->info != v) {
		ant = p;
		p = p->prox;
	}
	/* verifica se achou elemento */
	if (p == NULL)
		return l; /* n�o achou: retorna lista original */
		/* retira elemento */
	if (ant == NULL) {
		/* retira elemento do inicio */
		l = p->prox;
	}
	else {
		/* retira elemento do meio da lista */
		ant->prox = p->prox;
	}
	free(p);
	return l;
}

void libera(Lista* l)
{
	Lista* p = l;
	while (p != NULL) {
		Lista* t = p->prox; /* guarda refer�ncia para o pr�ximo elemento
	   */
		free(p); /* libera a mem�ria apontada por p */
		p = t; /* faz p apontar para o pr�ximo */
	}
}


