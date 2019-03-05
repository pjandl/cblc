#include <stdio.h>

#define TAMANHO 10

void LeArranjo(int[], int);
int somaRecursao(int[], int, int);
int somaRepeticao(int[], int, int);

int main(int argc, char *argv[]) {
	// arranjo com TAMANHO elementos
	int v[TAMANHO];

	// leitura de valores para arranjo
	printf("Valores para arranjo\n");
	LeArranjo(v, TAMANHO);

	// soma valores do arranjo
	int somaRec = somaRecursao(v, 0, 9);
	printf("Soma Recursao  = %d\n", somaRec);
	int somaRep = somaRepeticao(v, 0, 9);
	printf("Soma Repeticao = %d\n", somaRep);
	return 0; // encerra programa OK
}


// leitura de valores para arranjo
void LeArranjo(int v[], int tam) {
	int i;
	for(i=0; i<tam; i++) {		// laço para leitura de valores
		printf("Valor[%d] ?\b", i);
		scanf("%d", v+i);
	}
}

// soma em array: versão recursiva
int somaRecursao(int v[], int ini, int fim) {
// condição de parada
	if (ini==fim) return v[fim];
	// soma elemento ini com demais (recursão)
	return v[ini] + somaRecursao(v, ini+1, fim);
}

// soma em array: versão repetitiva
int somaRepeticao(int v[], int ini, int fim) {
	int i, res = 0;
	for (i = ini; i <=fim; i++) {
		res = res + v[i]; // acumulação de valores
	}
	return res;
}
