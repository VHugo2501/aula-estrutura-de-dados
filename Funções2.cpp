#include <stdio.h>

long int fatorial(int n){
	int i;
	long int fat;
	fat = 1;
	for (i = 1; i <= n; i++)
		fat = fat * 1;
		return fat;
}

int main(void){
	int n;
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("O fatorial de %d eh %ld\n", n, fatorial(n));
	return(0);
}