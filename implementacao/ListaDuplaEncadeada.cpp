#include "ListaDuplaEncadeada.h"
#include <iostream>
using namespace std;

listaDupla* criar()
{
	listaDupla* ptrCab;
	ptrCab = new listaDupla;
	ptrCab->prox = NULL;
	ptrCab->ant = NULL;
	return ptrCab;
}
bool isEmpty(listaDupla* l) {
	return (l->prox ==NULL) ? true : false;
}
bool add(listaDupla* ptrCab, int valor, int posAdd) {
	No* ptrNovo;
	No* ptrAux;
	No* ptrAnterior;
	int Pos;
	//Cria o novo nó
	ptrNovo = new No;
	if (ptrNovo == NULL) {
		cout << "Memória insulficiente!";
		return false;
	}
	ptrNovo->dado = valor;
	// Se a lista estiver vazia, insere no início da lista
	if (isEmpty(ptrCab)) {
		// Liga o primeiro nó ao nó cabeça
		ptrCab->prox = ptrNovo;
		ptrNovo->ant = ptrCab;
		return true;
	}
	// Se não foi informada a posição, então insere no fim da lista
	if (posAdd == 0)
	{
		// Localiza o último nó
		ptrAux = ptrCab->prox;
		while (ptrAux->prox != NULL)
			ptrAux = ptrAux->prox;

		ptrAux->prox = ptrNovo;
		ptrNovo->ant = ptrAux;
		return true;
	}
	// Insere na posição informada
	ptrAux = ptrCab;
	ptrAnterior = ptrCab;
	Pos = 0;
	// Localiza a posição a ser inserida
	while ((Pos < posAdd) && (ptrAux != NULL)) {
		ptrAnterior = ptrAux;
		ptrAux = ptrAux->prox;
		Pos++;
	}
	if (ptrAux == NULL) {
		cout << "Posição não encontrada!";
		return false;
	}
	ptrNovo->prox = ptrAux;
	ptrNovo->ant = ptrAnterior;
	ptrAnterior->prox = ptrNovo;
	ptrAux->ant = ptrNovo;
	return true;
}
int findNo(listaDupla* ptrCab, int valor) {

	No* ptrAux;
	int Posicao;
	// Se a lista estiver vazia
	if (isEmpty(ptrCab)) {		
		return -1;
	}
	ptrAux = ptrCab;
	Posicao = 0;
	// Localiza o nó
	while (ptrAux != NULL) {
		if (ptrAux->dado == valor)
			break;
		Posicao++;
		ptrAux = ptrAux->prox;
	}
	if (ptrAux == NULL) {	
		return -1;
	}
	return Posicao;

}
void list(listaDupla* ptrCab) {
	No* ptrAux;
	int ind;
	ptrAux = ptrCab->prox;
	ind = 1;
	while (ptrAux != NULL) {
		cout << "posicao" << ind << endl;
		cout << "valor" << ptrAux->dado << endl;
		ind++;
		ptrAux = ptrAux->prox;
	}
}
bool remove(listaDupla* ptrCab, int posRemover)
{
	No* ptrAux;
	No* ptrAnterior;
	No* ptrProximo;
	int pos;
	// Se a lista estiver vazia
	if (isEmpty(ptrCab) || posRemover < 1) {
		return false;
	}
	ptrAux = ptrCab;
	ptrAnterior = ptrCab;
	pos = 0;

	// Localiza a posição a ser removida
	while ((pos < posRemover) && (ptrAux != NULL)) {
		ptrAnterior = ptrAux;
		ptrAux = ptrAux->prox;
		pos++;
	}

	if (ptrAux == NULL) {
		
		return false;
	}
	else
	{
		ptrProximo = ptrAux->prox;
	}
	ptrAnterior->prox = ptrProximo;
	if (ptrProximo != NULL)
		ptrProximo->ant = ptrAnterior;
	delete ptrAux;

}




