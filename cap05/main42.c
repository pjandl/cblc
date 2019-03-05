#include <stdio.h>
#include <stdlib.h>
const int TAM = 10;	// constante para tamanho do arranjo
int* ObtemArranjo(int);	// declaração de função

int main() {		// função principal
	int i;			// variável auxiliar
	int* arranjo;		// ponteiro para arranjo de inteiros
	arranjo = ObtemArranjo(TAM); // lê arranjo de tamanho TAM
	printf("[ ");		// exibe arranjo obtido
	for(i=0; i<TAM-1; i++) {
		printf("%d, ", arranjo[i]);
	}
	printf("%d ]\n", arranjo[i]);
	free(arranjo);		// libera memória alocada
	return 0;
}

// definição da função ObtemArranjo(int)
int* ObtemArranjo(int tamanho) {
	int i;			// variável auxiliar
	int* tmp = (int*)malloc(tamanho*sizeof(int));	// alocação do arranjo
	for(i=0; i<tamanho; i++) { // laço para leitura de valores
		printf("Valor[%d] ?\b", i);
		scanf("%d", tmp+i);
	}
	return tmp; // retorna arranjo
}

