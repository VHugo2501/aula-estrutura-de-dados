#include <stdio.h>
#include <stdlib.h>

double media(const double *p, size_t n) {
	const double *fim = p + n;
	double s = 0.0;
	for (const double *q = p; q < fim; ++q)
		s += *q;
	return n ? s / (double)n : 0.0;
}

size_t conta_acima(const double *p, size_t n, double m) {
	const double *fim = p + n;
	size_t c = 0;
	for (const double *q = p; q < fim; ++q)
		if (*q > m)
			++c;
	return c;
}

int main (void) {
	size_t n;
	printf("quantos dias (>=1)? ");
	if (scanf("%zu", &n) != 1 || n ==0) {
		fprintf(stderr, "entrada invalida. \n");
		return 1;
	}
	
	double *t = (double *)malloc(n * sizeof *t);
	if (!t) {
		fprintf(stderr, "memoria insuficiente. \n");
		return 1;
	}
	
	double *q = t;
	for (size_t i = 0; i < n; ++i, ++q) {
		printf("temperatura do dia %zu: ", i + 1);
		if (scanf("%lf", q) != 1) {
			fprintf(stderr, "entrada invalida. \n");
			free(t);
			return 1;
		}
	}
	
	double m = media (t, n);
	size_t acima = conta_acima(t, n, m);
	
	printf("\nMedia: %.2f\n", m);
	printf("dias acima da media: %zu\n", acima);
	
	free(t);
	
	return 0;
	
}
