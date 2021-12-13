#include <iostream>
#include <sys/time.h>

using namespace std;
struct timeval start, end;

int main(int argc, char** argv) {	
	/*cout<<"TAM do int "<<sizeof(int);//4bytes = 32bits
	cout<<"\n TAM do char "<<sizeof(char);//1 byte = 8bits
	cout<<"\n TAM do float "<<sizeof(float);//4bytes = 32bits
	cout<<"\n TAM do double "<<sizeof(double);//8bytes = 64bits
	*/
	//antes
//	gettimeofday(&start, NULL);

	float notas[90000];
	for(int i=0;i<90000;i++)
		notas[i]=0;	
	//depois	
//	gettimeofday(&end, NULL);
	
/*	double elapsed = ((end.tv_sec - start.tv_sec) * 1000) 
        + (end.tv_usec / 1000 - start.tv_usec / 1000);
		cout<<"\n tempo em milisegundos "<<elapsed;*/
		
     //usei ponteiro para guardar endereco de outra variavel
	/* int idade;
	 int *ptr;
	 idade = 38;
	 ptr= &idade;
	 cout<<"conteudo de idade"<<idade<<endl;
	 cout<<"conteudo de ptr"<<ptr<<endl;;
	 cout<<"endereo de idade"<<&idade;*/
	 
	 //usei ponteiro para alocação dinamica
	 float *precos;
	 /*int tamVetor;
	 cout<<"Digite o tamanho do vetor de precos";
	 cin>>tamVetor;
	 //C ou C++
	 precos = new float[tamVetor];
	 
	 precos[0]=78.98;
	 
	 cout<<precos[0];*/
	
	
	 
	 
	 
	 
        
        
	
	
	return 0;
}
