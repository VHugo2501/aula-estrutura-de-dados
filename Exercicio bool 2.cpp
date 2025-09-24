#include <iostream>

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
	  std::cout << n << " eh primo.\n";
	else
	  std::cout << n << " nao eh primo.\n";
}

int main() {
	int numero;
	std::cout << "Digite um numero: ";
	std::cin >> numero;
	mostra_resultado(numero);
	return 0;
}