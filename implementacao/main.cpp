#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale>
#include "Fila_Com_Vetores.h"
#include "ListaSEncadeada.h"
#define LISTA_ENCADEADA 1
using namespace std;
//#define FILA_ESTATICA 1
// #define FILA_ESTATICA 1
//A IMPLEMENTAÇAO DA PILHA É USADA EM SALA DE AULA APENAS SEPAREI EM ARQUIVOS
/*
#define FILA_ESTATICA 1

#ifdef FILA_ESTATICA
#elif defined(FILA_DINAMICA)
#include "Fila_Com_Vetores.h"
#elif defined(LISTA_ENCADEADA_SIMPLES)
#include "ListaLinearesSimples.h"
#endif // FILA_ESTATICA
*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
#ifdef FILA_ESTATICA
    Fila f;
    init(f);
    cout << "F.Fim" << f.fim<<endl;
    cout << "F.Inicio" << f.inicio << endl;
    enqueueFilaSimples(f, 88);//f=1
    enqueueFilaSimples(f, 99);//f=2
    enqueueFilaSimples(f, 120);//f=3
    cout << "F.Fim" << f.fim << endl;
    cout << "F.Inicio" << f.inicio << endl << endl;
    list(f);
    int pessoa;
    dequeueFilaSimples(f, pessoa);
    dequeueFilaSimples(f, pessoa);
    cout << "\n" << "Pessoa atendida \t" << pessoa;
#elif defined(LISTA_ENCADEADA)
    lista* lista = criar();
    add(lista, 3);
    add(lista, 4);
    add(lista, 5);
    add(lista, 6);
    remove(lista, 1);
    list(lista);

#elif defined(LISTA_ENCADEADA_SIMPLES)
#endif // FILA_ESTATICA


/*
#ifdef FILA_ESTATICA
    Fila f;

    init(f);

    cout << "\n F.inicio: " << f.inicio << endl;
    cout << "F.fim: " << f.fim;

    enqueueFilaSimples(f, 1);
    cout << "\n F.inicio: " << f.inicio << endl;
    cout << "F.fim: " << f.fim;

    enqueueFilaSimples(f, 2);
    cout << "\n F.inicio: " << f.inicio << endl;
    cout << "F.fim: " << f.fim;

    enqueueFilaSimples(f, 3);
    cout << "\n F.inicio: " << f.inicio << endl;
    cout << "F.fim: " << f.fim;

    int valor;
    dequeueFilaSimples(f, valor);
    cout << "\n F.inicio: " << f.inicio << endl;
    cout << "F.fim: " << f.fim;
    cout << "F.Valor: " << valor;

    dequeueFilaSimples(f, valor);
    cout << "\n F.inicio: " << f.inicio << endl;
    cout << "F.fim: " << f.fim;
    cout << "F.Valor: " << valor;
#elif defined(FILA_DINAMICA)

#elif defined(LISTA_ENCADEADA_SIMPLES)
    Lista* l;
    l = inicializa();
    l = insere(l, 23);
    l = insere(l, 45);
    


#endif // FILA_ESTATICA

    
*/








}



/*
cout << "p: " << &p;
    //printf("\n p: %x", &p);
   // printf("\n p.topo: %x", &p.topo);
    inicializa(&p);
    cout << "\n p: " << &p.topo;
    cout << "\n p: " << &p;
   // printf("\n p.topo: %x", &p.topo);

    //PUSH
    No* novo;
    novo = (No*)malloc(sizeof(No));
    cout << "\n novo: " << &novo;
   // printf("\n novo: %x", &novo);
    novo->info = 2;
    novo->anterior = p.topo;
    cout << "\n novo->anterior: " << &novo->anterior;

  //  printf("\n novo->anterior: %x", &p.topo);
    p.topo = novo;
    cout << "\n p.topo: " << &p.topo;
  //  printf("\n p.topo: %x", &p.topo);
    //PUSH
    No* novo2;
    novo2 = (No*)malloc(sizeof(No));
 //   printf("\n novo: %x", &novo2);
    novo2->info = 678;
    novo2->anterior = p.topo;
 //   printf("\n novo->anterior: %x", &p.topo);
    p.topo = novo2;
 //   printf("\n p.topo: %x", &p.topo);

    No* noAux;
    noAux = p.topo;
    while (noAux != NULL) {
        // printf("[%c]\n",noAux->info);
        printf("\n[%d]\n", noAux->info);
    //    printf("\n p.topo: %x", &noAux);
        noAux = noAux->anterior;
    }

*/





















/*
char tabelaLetras[]={'A','B','C','D','E','F','G','H','I','J','L','M','N','O','P','Q','R','S','T','U','V','X','Z','\0'};

int buscaValor(char caracter,int *tabela,int size)
{
	for(int i=0;i<size;i++){	
	if(tabelaLetras[i]==caracter)
		return tabela[i];  
	}
}
int calc(int op1, int op2, char opcao){
    int aux=0;

    if(opcao == '+'){
        aux = op1 + op2;
    }
    if(opcao == '-'){
        aux = op1 - op2;
    }
    if(opcao == '*'){
        aux = op1 * op2;
    } 
    if(opcao == '/'){
        aux = op1 / op2;
    }   
    return aux;
}
int calcularExpressao()
{
	int numeroVariaveis,i,j,tamanho;
	Pilha p;
	inicializa(&p);
	
	  int *tabelaValores;
    int *x,*y,opera;
    char expressao[100];
  
	
	
	//A IMPLEMENTAÇAO DA PILHA É USADA EM SALA DE AULA APENAS SEPAREI EM ARQUIVOS
			printf("Digite um inteiro\n");
             scanf("%d",&numeroVariaveis);
             tabelaValores = (int*)malloc(numeroVariaveis*sizeof(int));
             
             for(i=0;i<numeroVariaveis;i++){
                 printf("Digite um valor para %c \n",tabelaLetras[i]);
                 scanf("%d",&tabelaValores[i]);                 
             }
             printf("Digite uma expressao\n");       
             scanf("%s",&expressao);
             printf("\n expressao =%s\n",expressao);
             tamanho =strlen(expressao);              
             char* charRemovido;
             charRemovido = (char*)malloc(sizeof(char));
           
             for(int k=0;k<=strlen(expressao)-1;k++)
             {
	            *charRemovido = expressao[k];
	             char  c = *charRemovido;
	            switch(*charRemovido){
		            
		            case '+':
		            case '-':
		            case '*':
		            case '/':		            
		            printf("\n OPerador = %c\n",*charRemovido);
		            x=pop(&p);
		            y=pop(&p);
		            push(&p,calc(*x,*y,*charRemovido));	       		            
		            break;		    		            
		            default:
		            printf("\n Operando = %c \n",*charRemovido); 		            
		            push(&p,buscaValor(c,tabelaValores,tamanho));
		            break;
	            }
             }
             
}

int main (int argc, char *argv[])
{
	int opcao;
    
    do{
        printf("\nEscolha uma das opçoes\n");
        printf("1: calcular expressao \n2: para Finalizar\n");
        scanf("%d",&opcao);
                
        if(opcao==1){            
             printf("\nValor da operacao=%d",calcularExpressao());
        }
        else
        {
            printf("\nPrograma Finalizado\n");
            break;
        }
        
    }while(1);   
    
	return 0;
}*/

