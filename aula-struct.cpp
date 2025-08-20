#include <stdio.h>

// definicao do tipo struct data
typedef struct{
	int dia;
	int mes;
	int ano;
}Data;

int main(void){
	printf("sizeof(data) = %zu bytes\n", sizeof(Data));
}