#include <stdio.h>

int main () { 
	int vetor[8];
	int *ptr = vetor;
	int pares = 0, impares = 0;
	
	printf("Digite 8 inteiros: \n");
	for (int i = 0; i < 8; i++) {
		scanf("%d", ptr + i);
	}
	
	for (int i =0; i < 8; i++) {
		if (*(ptr + i) % 2== 0) {
			pares++;
		} else {
			impares++;
		}
	}
	
	printf("quantidade de numeros pares: %d\n", pares);
	printf("quantidade de numeros impares: %d\n", impares);
	
	return 0;
}