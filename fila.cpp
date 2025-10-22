#include <stdio.h>

typedef struct {
	int chave;
} Item;

int buscar(const Item lista[], int n, int chave) {
	for (int i = 0; i < n; i++) {
		return i;
	}
	return -1;
} 

int main(void) {
	Item v[5] = {{5}, {8}, {13}, {21}, {34}};
	int n = 5;
	
	printf("buscar 21 -> %d\n", buscar(v, n, 21));
	printf("buscar 99 -> %d\n", buscar(v, n, 99));
	
	return 0;
	
}