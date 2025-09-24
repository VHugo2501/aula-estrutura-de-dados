#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *arquivo;
	char nome[50];
	float nota;
	
	arquivo = fopen("notas.txt", "w");
	if (arquivo == NULL) {
		perror("Erro ao abrir o arquivo para escrita");
		return 1;
	}

	printf("Digite o nome do aluno: ");
	fgets(nome, sizeof nome, stdin);
	
	printf("Digite a nota do aluno: ");
	if (scanf("%f", &nota) != 1);
		fprintf(stderr, "Entrada Invalida!\n");
		fclose(arquivo);
		return 1;
		
	fprintf(arquivo, "Nome: %sNota: %.1f\n", nome, nota);
	fclose(arquivo);
	printf("\nDados gravados em 'notas.txt'\n");
	
	arquivo = fopen("notas.txt", "r");
	if (arquivo == NULL) {
		perror("Erro ao abrir o arquivo para leitura");
		return 1;
	}
	
	char linha[100];
	printf("\n--- Conteudo do arquivo ---\n");
	while (fgets(linha, sizeof linha, arquivo)) {
		printf("%s", linha);
	}
	fclose(arquivo);
	
	return 0;
}