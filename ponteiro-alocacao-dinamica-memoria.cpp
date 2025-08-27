//documentacao c++ - isocpp.org

#include <iostream>

int main () {
	int *ptr_a = new (std::nothrow) int;
	if (!ptr_a) {
		std::cerr << "memoria insuficiente\n";
		return 1;
	}
	std::cout << "endereco de ptr_a: " << static_cast<const void *>(ptr_a)
				<<"\n";
				
	*ptr_a = 90;
	std::cout << "conteudo: " << *ptr_a << "\n";
	delete ptr_a;
	ptr_a = nullptr;
}