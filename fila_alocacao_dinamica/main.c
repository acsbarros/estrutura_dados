#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyFila_A_D_Info_char.h"

using namespace std;

int main (int argc, char *argv[])
{
	cout << "Hello world!" << endl;

	int opcao,numeroVariaveis,i,j,tamanho,nTrsa;  
    int *x,*y,opera;
    char expressao[100];
    int tabelaCompra[100];
  	Fila f;
  	int k;
  	transacao *trs;
  	inicializa(&f);
  
    do{
        
        printf("\nEscolha uma das opçoes\n");
        printf("1: calcular lote \n2: para Finalizar\n");
        scanf("%d",&opcao);
         
        if(opcao==1){
	    printf("Digite numero de transacoes");
	    scanf("%d",&nTrsa);   
	    trs =  (transacao*)malloc(nTrsa*sizeof(transacao));
	     
	    for(k=0;k<nTrsa;k++){
	        printf("Digite uma transacao C:COMPRA V:VENDA");
	       	scanf("%c",&trs[k].operacao);
	        printf("\nDigite um Valor positivo\n");
	    	scanf("%d",&trs[k].valor);   
	    	if(trs[k].valor<0)    	
	    	{
		    	printf("\nVoce digitou um numero negativo\n");
	    	} 	
	    	printf("\nDigite Numero de Lotes positivo\n");
	    	scanf("%d",&trs[k].nLotes);	
	    	if(trs[k].nLotes<0)    	
	    	{
		    	printf("\nVoce digitou um numero negativo\n");
	    	}
	    	trs[k].valor=trs[k].valor*trs[k].nLotes;	    	
	    	if(trs[k].operacao=='C')
	    	{
		    	
		    	enqueue(&f,trs[k]);  
	    	}
	    	if(trs[k].operacao=='V')
	    	{
		    	transacao *aux;
		    	aux= dequeue(&f);
	    	}
	    	//enqueue(&f,trs[k]);  
	    }
	    
        }      
       
        else{
        printf("Finalizado \n");
       	break;
       
        }
        
       
        
    }while(1);   
	
	return 0;
}

