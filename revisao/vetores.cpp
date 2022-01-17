#include <iostream>

using namespace std;
#define TAM_VETOR 3
int main(int argc, char** argv) {
	//1° passo - declaração de variáveis
	float notas[TAM_VETOR];
	float media;
	float nMin;
	float nMax;
	float soma;
	int ind;
	//2° passo - atribuir valores as variáveis	
	for(ind=0; ind<TAM_VETOR ; ind++){
		cout<<"\n Digite o valor da nota["<<ind+1<<"]: ";	
		cin>>notas[ind];	
	}
	//3° passo - calcular a media
	soma = 0;
	for(ind=0; ind<TAM_VETOR ; ind++){
		soma = soma + notas[ind];
	}
	media = soma/TAM_VETOR;	
	//3° passo - min, max	
	nMin = notas[0];
	nMax = notas[0];
	for(ind=0; ind<TAM_VETOR ; ind++){
		if(notas[ind]<nMin)
		{
			nMin =notas[ind];
		}
		if(notas[ind]>nMax)
		{
			nMax =notas[ind];
		}
	}
	//4° passo - exibir os valores encontrados
	cout<<"Media: "<<media;
	cout<<"Maior nota: "<<nMax;
	cout<<"Menor nota: "<<nMin;
	
	return 0;
}
