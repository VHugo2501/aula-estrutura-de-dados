#include <iostream>
#include <memory>

int main () {
	auto ptr_a = std::make_unique<int>(); // aloca e incializa
	*ptr_a = 90;
	std::cout << "enderco: " << static_cast<const void *>(ptr_a.get()) << "\n";
	std::cout << "conteudo: " << *ptr_a << "\n";
	
}