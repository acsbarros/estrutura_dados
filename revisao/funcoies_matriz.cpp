// ConsoleApplication2.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>

int maiorElementodaMatriz(int **matriz);
void apagarMatriz(int **matriz,int m);

#define M 3
#define N 3

int main()
{
	int** matriz = NULL;
	
	matriz = (int**)malloc(M*sizeof(int*));//Alocação Dinamica usando C	
	for (int i = 0; i < M; i++)
		matriz[i] = (int*)malloc(N*sizeof(int));
	
	
	/*matriz = new int*[M];//Alocação Dinamica usando C++
	for (int i = 0; i < M; i++)
		matriz[i] = new int[N];*/
	
	int p = 0;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++) {
			matriz[i][j] = p;
			p++;
		}
	
	for (int i = 0; i < M; i++) {
		
		for (int j = 0; j < M; j++) {
			printf("\t %d", matriz[i][j]);
		}
		printf("\n");
	}
	printf("Maior = %d", maiorElementodaMatriz(matriz));
	apagarMatriz(matriz,M);
	matriz[0][0]=84;
	
	
   
}

int maiorElementodaMatriz(int** matriz)
{
	int maior = matriz[0][0];
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			if (matriz[i][j] > maior)
				maior = matriz[i][j];
		}		
	}
	return maior;
}
void apagarMatriz(int **matriz,int m)
{
	int i=0;
	for(i=0;i<m;i++){
		free(matriz[i]);
	}
	free(matriz);	
}
