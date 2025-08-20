#include <stdio.h>
#include <inttypes.h>
#include <stdint.h>

int main(void) {
	int i = 1234;
	printf("i = %d\n", i);
	//forma correta/portavel de imprimir um endereco
	
	printf("&i = %p\n", (void *)&i);
	//(opicional) endereco como numero hexadecimal, de forma portavel
	
	uintptr_t addr = (uintptr_t)(void *)&i;
	printf("endereco numerico (hex) = 0x%" PRIxPRT "\n", addr);
	
	//informativo
	printf("sizeof(int) = %zu, sizeof(void) = %zu\n", sezeof i, sizeof(void *));
	
	return 0;
	
	
}