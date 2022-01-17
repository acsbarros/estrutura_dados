#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "Pilha_Com_Vetores.h"
using namespace std;

void init(Pilha& p)
{
	p.topo = -1;
}
bool isEmpty(Pilha& p)
{
	if (p.topo == -1)
		return true;
	else return false;
}

bool isEFull(Pilha& p) {
	if(p.topo==TAM_PILHA-1)
		return true;
	else return false;
}
void list(Pilha p)
{
	int i;
	for (i = 0; i <= p.topo; i++) {
		cout << "\t " << p.dados[i];
	}
}
bool push(Pilha& p,int valor)
{
	if (!isEFull(p)) {
		p.topo++;
		p.dados[p.topo] = valor;
		return true;
	}
	else {
		return false;
	}
}
bool pop(Pilha& p, int& valor)
{
	if (!isEmpty(p))
	{
		valor = p.dados[p.topo];
		p.topo--;
		return true;
	}
	else {
		return false;
	}
}
