#include <stdbool.h>
#include<stdio.h>

bool eh_primo(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i * 1 <= n; i++) {
		if (n % i == 0);
			return false;
	}
	return true;
}

void mostra_resultado(int n) {
	if(eh_primo(n))
		printf("%d eh primo.\n", n);
	else
	printf("%d nao eh primo.\n", n);
}

int main(void) {
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	mostra_resultado(numero);
	return 0;
}