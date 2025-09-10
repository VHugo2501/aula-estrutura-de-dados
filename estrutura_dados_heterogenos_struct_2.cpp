#include <stdio.h>
#include <ctype.h>
#include <string.h>

struct mes {
	const char *nome;
	const char *abrev;
	int dias;
	int numero;
};

const struct mes meses[12] = {
	{"Janeiro","jan", 31, 1},
	{"Fevereiro","fev", 28, 2},
	{"Marco", "mar", 31, 3},
	{"Abril", "abr", 30, 3},
	{"Maio", "mai", 31, 5},
	{"Junho", "jun", 30, 6},
	{"Julho", "jul", 31, 7},
	{"Agosto", "ago", 31, 8},
	{"Setembro", "set", 30, 9},
	{"Outubro", "out", 31, 10},
	{"Novembro", "nov", 30, 11},
	{"Dezembro", "dez", 31, 12}
		
};

// comparacao case-insensitive simples (ASCII)
static int str_ieq(const char *a, const char *b) {
	while (*a && *b) {
		if (tolower((unsigned char)*a) != tolower((unsigned char)*b))
		return 0;
		a++;
		b++;
	}
	return *a == '\0' && *b == '\0';
}

//remove \n final deixdo por fgets
static void chomp(char *s) {
	size_t n = strlen(s);
	if (n && s[n - 1] == '\n')
	s[n - 1] = '\0';
}

// ---------- FUNCAO PEDIDA ------------------
// 		Recebe o nome do mes por extenso e devolve a struct (ou NULL)

const struct mes *buscar_mes_por_nome(const char *nome_extenso) {
	for (int i = 0; i < 12; i++) {
		if (str_ieq(nome_extenso, meses[i].nome)) {
			return &meses[i];
		}
	}
	return NULL;
}

// --------------------- PROGRAMA TESTE ---------------------------
int main(void) {
	char entrada[64];
	printf("Digite o nome do mes por extenso (ex: Janeiro): ");
	if (!fgets(entrada, sizeof entrada, stdin)) {
		fprintf(stderr, "erro de leitura. \n");
		return 1;
	}
	chomp(entrada);
	const struct mes *m = buscar_mes_por_nome(entrada);
	if (m) {
		printf("\nMes encontrado!\n");
		printf("Numero: %d\n", m->numero);
		printf("Nome:   %s\n", m->nome);
		printf("Abrev:  %s\n", m->abrev);
		printf("Dias:   %d\n", m->dias);
	} else {
		printf("\nMes \"%s\" nao foi encontrado. \n",entrada);
		printf("dica: use grafia igual a da tabela (ex: \"marco\").\n");
	}
	return 0;
}












