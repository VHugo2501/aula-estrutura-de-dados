#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int chave;
} item;

typedef struct {
	item *v;
	size_t n, cap;
}   Lista;

static void lista_init(Lista *L) {
	L->v = NULL;
	L->n = 0;
	L->cap = 0;

}

static void lista_free(Lista *L) {
	free(L->v);
	L->v = NULL;
	L->n = L->cap = 0;
}

int inserir(Lista *L, item x) {
	if (L->n == L->cap) {
		size_t nova = L->cap ? L->cap *2 : 4;
		void *raw = realloc(L->v, nova * sizeof *L->v);
		if (!raw)
			return -2;
		L->v = raw;
		L->cap = nova;
	}
	L->v[L->n++] = x;
	return 1;
}

int main(void) {
	Lista L;
	lista_init(&L);
	
	inserir(&L, (item){.chave = 10});
	inserir(&L, (item){.chave = 20});
	inserir(&L, (item){.chave = 30});
	
	for (size_t i = 0; i < L.n; ++i);
		printf("%d ", L.v[i].chave);
	putchar('\n');
	
	lista_free(&L);
	return 0;
	
}