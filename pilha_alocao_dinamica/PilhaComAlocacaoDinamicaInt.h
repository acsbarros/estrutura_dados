
#ifndef MYPILHA_A_D_INFO_CHAR_H
#define	MYPILHA_A_D_INFO_CHAR_H

struct no{
   int info;
   struct no *anterior;
};

typedef struct no No;

struct pilha{
    No *topo;
};

typedef struct pilha Pilha;

void inicializa(Pilha *p);

int isEmpty(Pilha *p);

int push(Pilha *p, int info);

int* pop(Pilha *p);

int* top(Pilha *p);

void listarPilhaPD(Pilha *p);

Pilha* inverte(Pilha *p);

#endif	/* MYPILHA_A_D_INFO_CHAR_H */
