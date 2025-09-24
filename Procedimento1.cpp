#include <stdio.h>

void linha(void){
	printf("--------------\n");
}

int main(void){
	printf("Antes da linha\n");
	linha();
	printf("Depois da linha\n");
	return(0);
}