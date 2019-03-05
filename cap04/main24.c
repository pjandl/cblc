#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20000

int main() {
	double valor[MAX], resultado[MAX];
	int i, ini, fim;
	printf("Geracao de valores reais\n");
	// inicia gerador de números aleatórios com time
	srand(time(0));
	// inicializa arranjo valor
	for(i=0; i<MAX; i++) {
		valor[i] = (double)RAND_MAX/rand();
	}
	printf("\n");
	printf("Processamento dos valores\n");
	for(i=0; i<MAX; i++) {
		resultado[i] = i*valor[i]/2.0;
	}
	printf("Exibicao de resultados\n");
	char resp;
	do {
		// solicita faixa de posições para exibição
		printf("Forneca faixa de posicoes desejada [0, %d]\n", MAX-1);
		printf("Posicao inicial: ?\b");
		scanf("%d", &ini);
		printf("Posicao final  : ?\b");
		scanf("%d", &fim);
		if (ini>=0 && ini<fim && fim<MAX) { // só processa faixa válida
			for(i=ini; i<=fim; i++) {
				printf("%5d.atan(%9.6lf) =  %13.6lf\n", i, valor[i], resultado[i]);
			}
		} else {
			printf("Faixa invalida!\n");
		}
		printf("Exibir mais resultados (S|N) ?\b");
		fflush(stdin);
		scanf("%c", &resp);
	} while (resp=='s' || resp=='S');
	return 0;
}

