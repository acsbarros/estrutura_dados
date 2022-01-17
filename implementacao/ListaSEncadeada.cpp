#include "ListaSEncadeada.h"
#include <iostream>
using namespace std;

lista* criar()
{
	lista* ptrCab;
	ptrCab = new lista;
	ptrCab->noCabeca = true;
	ptrCab->prox = ptrCab;
	return ptrCab;
}
bool isEmpty(lista* l)
{
	if(l->prox==l)
	{
		return true;
	}
	else {
		return false;
	}
}
bool add(lista* l, int valor) {

	struct No *ptrNovo;
	struct No* ptrAux;
	struct No* ptrAnterior;	
	int Pos;	
	ptrNovo = new No;
	if (ptrNovo == NULL) {
		return false;
	}
	ptrNovo->dado = valor;
	ptrNovo->noCabeca = false;

	ptrAux = l;
	ptrAux = ptrAux->prox;
	ptrAnterior = l;
	while (ptrAux->noCabeca != true) {
		ptrAnterior = ptrAux;
		ptrAux = ptrAux->prox;
	}
	ptrAnterior->prox = ptrNovo;
	ptrNovo->prox = ptrAux;
	return true;
}
void list(lista *l) {

	struct No* ptrAux;
	ptrAux = l->prox;
	while (ptrAux->noCabeca!=true) {
		cout << "\n" << ptrAux->dado;
		ptrAux = ptrAux->prox;
	}
}
bool remove(lista* l, int posRemover) {
	struct No *ptrAux;
	struct No* ptrAnterior;

	int pos;

	if (isEmpty(l)) {
		return false;
	}
	if (posRemover < 1)
	{
		return false;
	}
	ptrAux = l;
	ptrAnterior = l;
	pos = 0;
	while ((pos < posRemover) && (ptrAux != NULL)) {
		ptrAnterior = ptrAux;
		ptrAux = ptrAux->prox;
		pos++;
	}
	if (ptrAux == NULL) {
		//posicao invalida
		return false;
	}
	ptrAnterior->prox = ptrAux->prox;
	delete ptrAux;

}