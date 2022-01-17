
#ifndef LISTALINEARESDUPLAMENTEENCADEADA_H
#define	LISTALINEARESDUPLAMENTEENCADEADA_H

struct no{
   int info;
   struct no* prox;
   struct no* ant;
};

typedef struct no Lista;

Lista* inicializa();

Lista* insere(Lista* l, int i);

void imprime(Lista* l);

int isEmpty(Lista* l);

Lista* find(Lista* l, int v);

Lista* retira(Lista* l, int v);

void libera(Lista* l);


#endif	/* LISTALINEARESDUPLAMENTEENCADEADA_H */
