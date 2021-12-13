#include <stdio.h>
#include <stdlib.h>

float calcArea(float a, float b);

int main(int argc, char *argv[]) {
	float numA,numB,r;
	numA = 3;
	numB = 2;
	printf(" antes numA=%f,numB=%f",numA,numB);
	r = calcArea(numA,numB);
	printf("\n depois numA=%f,numB=%f",numA,numB);
	printf("\n %f",r);
	return 0;
}

float calcArea(float a, float b)
{
	a = b+2;//2+2 = 4
	b = b+1; //2+1 = 3
	printf("\n dentro da funcao a=%f,a=%f",a,b);
	return a*b;//4*3 = 12
}
