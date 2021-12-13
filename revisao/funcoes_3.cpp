#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

//Construa uma função que recebe o peso e altura de uma 
//pessoa e retorna o valor do imc.
//assinatura da função
float calIMC(float peso, float h);
//Construa uma função que recebe por referencia a base, a area e altura de 
//um triangulo e calcula a area.
void calcAreaTriangulo(float *b,float *h, float *a);//usando C ANSI .c
void calcAreaTrianguloRef(float &b,float &h, float &a);//usando C ANSI ou C++
//*,&,vetor - indica passagem de parametros por referencia
struct Pessoa{
	char nome[20];
	int idade;
	float peso;
};

typedef struct Pessoa pessoa;
typedef float real;

void exibirDadosPessoa(pessoa x);
void alterarDadosPessoa(pessoa &x);

float somaVetorModificado(float vet[],int tam);

double media(double vet[],int n,int &i);

void teste(int n, int &b, int &k);


int main(int argc, char** argv) {
	
/*	float imc,h,peso;
	cout<<"\n Digite o peso";
	cin>>peso;
	cout<<"\n Digite a altura";
	cin>>h;	
	cout<<"\n Peso: "<<peso;
	//utilização da função	
	imc = calIMC(peso,h);
	cout<<"\n Peso: "<<peso;
	cout<<"\n IMC: = "<<imc;*/
	/*
	float b,h,a;
	cout<<"\n Digite a base";
	cin>>b;
	cout<<"\n Digite a altura";
	cin>>h;		
	a = 0.0;
	cout<<"\nAntes Area: "<<a;
	//utilização da função
	//calcAreaTriangulo(&b,&h,&a);
	calcAreaTrianguloRef(b,h,a);
	cout<<"\nDepois Area: "<<a;*/
	//TAD
/*	pessoa jose;
	jose.idade=18;
	jose.peso=58;
	strcpy(jose.nome,"Jose");
	
	exibirDadosPessoa(jose);
	
	alterarDadosPessoa(jose);
	
	exibirDadosPessoa(jose);*/
	
	float notas[]={8.0,5.5,9.6,5.5};
	int tam = sizeof(notas)/sizeof(float);
	for(int i=0;i<tam;i++){
		cout<<"\n "<<notas[i];
	}	
	
	somaVetorModificado(notas,tam);
	
	for(int i=0;i<tam;i++){
		cout<<"\n "<<notas[i];
	}
	
	
	
	
	
	return 0;
}

//definição da função
float calIMC(real peso, real h)
{
	float imc;
	peso= peso*2;
	cout<<"\n Peso: "<<peso;
	imc = peso/(h*h);
	return imc;
}
void calcAreaTriangulo(real *b,float *h, real *a)
{	
	(*a)= ((*b)*(*h))/2;	
}
void calcAreaTrianguloRef(real &b,real &h, real &a)
{
	a = (b*h)/2;
}
void exibirDadosPessoa(pessoa x)
{
	cout<<"==========================\n";
	cout<<"\n Nome: "<<x.nome;
	cout<<"\n Idade: "<<x.idade;
	cout<<"\n Peso: "<<x.peso;
	cout<<"\n==========================";
}
void alterarDadosPessoa(pessoa &x)
{
	cout<<"==========================\n";
	cout<<"\n Digite o Nome: ";
	gets(x.nome);
	cout<<"\n Digite a Idade: ";
	cin>>x.idade;
	cout<<"\n Digite o Peso: ";
	cin>>x.peso;
	cout<<"\n==========================";	
}

float somaVetorModificado(float vet[],int tam)
{
	float soma;
	soma = 0;
	for(int i=0;i<tam;i++){
		vet[i]=vet[i]-1.5;	
		soma = soma+vet[i];	
	}
	return soma;
}
double media(double vet[],int n,int &i)
{
	
}

void teste(int n, int &b, int &k)
{
	int nn;
	nn = pow(b,k);
		
}
