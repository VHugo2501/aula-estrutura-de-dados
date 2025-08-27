#include <iostream>
#include <cstddef>

using namespace std;

int main () {
	//ponteiro par inteiro
	int *p;
	
	// ponteiro para um array de 5 inteiros
	int (*ptr)[5];
	
	//um array de cinco inteiros
	int arr[5] = {10, 20, 30, 40, 50};
	
	//p aponta para o elemento 0 do array
	p = arr;
	
	//ptr aponta apar o array inteiro
	ptr = &arr;
	cout << "p = " << p << ", ptr = " << ptr << endl;
	
	//avancando os ponteiros
	p++; //avanca 1 inteiro (4 bytes normalmente)
	ptr++; // avanca 1 bloco de 5 inteiros (20 bytes normalmente)
	cout << "p = " << p << ", ptr = " << ptr << endl;
	return 0;
	
}