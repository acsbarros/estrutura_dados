#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int c;
	printf("\n \t qtd de argumentos %d",argc);
	for(c=0;c<argc;c++){
		printf("\n argumento %d: \t %s",c+1,argv[c]);
	}
	return 0;
}
