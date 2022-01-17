#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "Fila_Com_Vetores.h"

using namespace std;

void init(Fila& f)
{
	f.inicio = 0;
	f.fim = 0;
	f.nItens = 0;
}
bool isEmpty(Fila& f)
{
	return f.inicio == f.fim;
}
bool isFull(Fila& f) {
	if ((f.fim == TAM_FILA && f.inicio==0))
		return true;
	else return false;
}
void list(Fila f)
{
	int cont, i;

	for (i = f.inicio; i <= f.fim - 1 ;i++) {
		printf("%d\t", f.dados[i]);		
	}
	printf("\n\n");
}
bool enqueueFilaSimples(Fila& f, int valor)
{
	if (f.fim >= TAM_FILA)
		f.fim = 0;

	if (!isFull(f)) {
		f.dados[f.fim] = valor;
		f.fim++;
		f.nItens++; // mais um item inserido
		return true;
	}
	else {
		return false;
	}
}
bool dequeueFilaSimples(Fila& f, int& valor)
{

	if (!isEmpty(f)) {
		if (f.inicio >= TAM_FILA)
			f.inicio = 0;

		valor = f.dados[f.inicio];
		f.inicio++;
		f.nItens--; // mais um item removido
		return true;
	}
	else {
		return false;
	}
}

/*int incrr(int i)
{
	return (i + 1) % TAM_FILA;
}
int incr(int i)
{
	if (i == TAM_FILA - 1)
		return 0;
	else
		return i + 1;
}*/

