
#ifndef LISTALINEARESSIMPLES_H
#define	LISTALINEARESSIMPLES_H

struct lista{
   int info;
   struct lista* prox;
};

typedef struct lista Lista;

Lista* inicializa();

Lista* insere(Lista* l, int i);

void imprime(Lista* l);

int isEmpty(Lista* l);

Lista* find(Lista* l, int v);

Lista* retira(Lista* l, int v);

void libera(Lista* l);


#endif	/* LISTALINEARESSIMPLES_H */
