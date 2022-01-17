#ifndef FILA_COM_VETORES_H
#define	FILA_COM_VETORES_H

#include <stdio.h>
#include <stdlib.h>
#define TAM_FILA 5
//Cria o TAD
typedef struct {
	int dados[TAM_FILA];
	int inicio,fim, nItens;
}Fila;//TAD - Tipo Abstrato de Dado
//operações ou regras para serem implementadas.
void init(Fila& f);
bool isEmpty(Fila& f);
bool isFull(Fila& f);
void list(Fila f);
bool enqueueFilaSimples(Fila& f, int valor);
bool dequeueFilaSimples(Fila& f, int &valor);
bool first(Fila& f, int &valor);

#endif	/* FILA_COM_VETORES_H */
