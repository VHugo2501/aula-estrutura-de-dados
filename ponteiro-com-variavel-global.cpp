#include <stdio.h>

//variavel global com alocação estatica
static int a = 0;
void incrementa(void) {
	int b =0; // variavel total automatica (é criada a cada chamada)
	static int c = 0; // variavel local estatica (mantem valor entre chamadas)
	printf("a: %d, b: %d, c: %d\n", a, b, c);
	a++; //persiste, pois é global estatica
	b++; // nao persiste, é recriada com 0 a cada chamada
	c++; // persiste entre chamadas, pois é estatico global
}
int main(void) {
	for (int i = 0; i <5; i++) {
		incrementa();
	}
	return 0;
}