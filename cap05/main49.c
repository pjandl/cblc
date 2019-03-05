#include <stdio.h>
#include <stdlib.h>

// declaração das funções
int* ObtemArranjo(int tamanho);
int Maior(const int*, int);

int main() {				// função principal
	int tam, posMaior, *v;			// declara variáveis
	printf("Qual tamanho do arranjo? ");
	scanf("%d", &tam);			// lê tamanho do arranjo
	v = ObtemArranjo(tam);		// função aloca e lê arranjo
	posMaior = Maior(v, tam);		// função acha posição do maior
	printf("Maior valor %d localizado na posicao %d.\n",
	       v[posMaior], posMaior);
	return 0;
}

// definição das funções
int* ObtemArranjo(int tamanho) {
	int i;
	int *tmp = (int *)malloc(tamanho*sizeof(int));	// aloca arranjo
	for(i=0; i<tamanho; i++) {		// laço para leitura de valores
		printf("Valor[%d] ?\b", i);
		scanf("%d", tmp+i);
	}
	return tmp;				// retorna arranjo
}

int Maior(const int arranjo[10], int tamanho) {
	int i, posMaior = 0;		// 'assume' que maior valor na 1a. posição
	for (i=0; i<tamanho; i++) {	// laço percorre demais posições
		// verifica se posição maior que posMaior e atualiza se necessário
		if (arranjo[i]>arranjo[posMaior]) {
			posMaior = i;
		}
	}
	return posMaior; // retorna posição do maior elemento
}

