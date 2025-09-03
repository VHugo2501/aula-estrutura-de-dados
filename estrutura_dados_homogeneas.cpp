#include <iostream>
#include <array>

int main(){
	std::array<int, 5> numeros;
	int contador = 0;
	
	std::cout << "digite 5 numeros inteiros:\n";
	for (std::size_t i = 0; i < numeros.size(); i++) {
		std::cout << "numero" << i + 1 << ": ";
		std::cin >> numeros[i];
		if (numeros[i] > 100) {
			contador++;
		}
	}
	
	
	std::cout << "quantidade de numeros maiores que 100: " << contador << '\n';
	
	return 0;
}