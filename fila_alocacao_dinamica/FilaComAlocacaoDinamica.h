/* 
 * File:   MyFila_A_D_Info_char.h
 * Author: carlosbarros
 *
 * Created on 8 de Novembro de 2011, 17:08
 */

#ifndef MYFILA_A_D_INFO_CHAR_H
#define	MYFILA_A_D_INFO_CHAR_H

#include <stdio.h>
#include <stdlib.h>

struct transacao
{
	int valor; //valor
	int nLotes;
	char operacao;//'C': compra 'V' venda
};
struct no{
   transacao info;
   struct no *proximo;
};
typedef struct no No;

struct fila{
    No *inicio;
    No *fim;
};
typedef struct fila Fila;

void inicializa(Fila *f);
int isEmpty(Fila *f);
int enqueue(Fila *f, transacao info);
transacao* dequeue(Fila *f);

void listar(Fila *f);
#endif	/* MYFILA_A_D_INFO_CHAR_H */

