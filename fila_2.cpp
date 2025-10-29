#include <stdio.h>

#define MAX_FILA 5
typedef int Elemento;

typedef struct {
	Elemento v[MAX_FILA];
	int inicio;
	int fim;
} Fila;

static void fila_preenche_demo(Fila *f) {
	
	f->v[3] = 40;
	f->v[4] = 50;
	f->v[0] = 60;
	f->inicio = 3;
	f->fim = 0;
}

int desenfileirar(Fila *f, Elemento *out) {
	if (f->inicio == -1)
		return 0;
	
	*out = f->v[f->inicio];
	if (f->inicio == f->fim) {
		f->inicio = f->fim = -1;
	} else if (f->inicio == MAX_FILA -1) {
		f->inicio = 0;
	} else {
		f->inicio++;
	}
	return 1;
}

int main(void) {
	Fila F = {.inicio = -1, .fim = -1};
	fila_preenche_demo(&F);
	
	Elemento x;
	while (desenfileirar(&F, &x))
		printf("desenfileirar -> %d\n", x);
		
	if (!desenfileirar(&F, &x))
		puts("fila vazia (underflow).");
	
	return 0;
}