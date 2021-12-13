#include <iostream>
//tad - tipos abstratos de dados

struct Pessoa{
	char nome[20];
	int idade;
	float peso;
};
struct Ponto{
	float x;
	float y;
};
struct Reta{
	struct Ponto p1;
	struct Ponto p2;
};
using namespace std;
int main(int argc, char** argv) {
	Reta r;
	
	r.p1.x=35;
	r.p1.y=0;
	r.p2.x=90;
	r.p2.y=80;
	
	Pessoa jose;
	cout<<"Digite idade do jose ";
	cin>>jose.idade;
	
	cout<<"idade do jose "<<jose.idade;
	
	return 0;
}
