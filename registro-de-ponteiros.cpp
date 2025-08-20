#include <stdlib.h>
#include <stdio.h>

void exemplo_um(void) {
	int a = 10, b = 20, c;
	int *p, *q;

	p = &a; // p aponta para a
	q = &b; //q aponta para b
	
	c = *p + *q;
	
	printf("exemplo 1: ponteiros simples\n");
	printf("a = %d, b = %d\n", a, b);
	printf("*p = %d, *q = %d\n", *p, *q);
	printf(" c = *p + *q = %d\n\n", c);
}


//exemplo 2
void exemplo_dois(void){
	
	int a = 15, b = 25, c;
	int *p;
	int **r; //ponteiro para ponteiro para inteiro
	
	p = &a; // p aponta para a
	r = &p; // r aponta para p e *r aponta para a
	
	c = **r +b;
	printf("exemplo 1: ponteiros para ponteiro\n");
	printf("a = %d, b = %d\n", a, b);
	printf("*p = %d, **r = %d\n", *p, **r);
	printf(" c = **r + b = %d\n\n", c);
}