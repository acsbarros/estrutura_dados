#include <stdio.h>
#include <stdlib.h>

float calcArea(float *a, float *b);
float calcAreaa(const float &a,const float &b);

int tamanho = 12;

int main(int argc, char *argv[]) {
	float numA,numB,r;
	numA = 3;
	numB = 2;
	printf(" antes numA=%f,numB=%f",numA,numB);
	//r = calcArea(&numA,&numB);
	r = calcAreaa(numA,numB);
	printf("\n depois numA=%f,numB=%f",numA,numB);
	printf("\n %f",r);
	return 0;
}

float calcArea(float *a, float *b)
{
	(*a) = (*b)+2;
	(*b) = (*b)+1;
	return (*a)*(*b);
}
float calcAreaa(const float &a, const float &b)
{
	int c;
	c = 3;
	a = b+2;
	b = b+1;
	return a*b;
}
