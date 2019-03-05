#include <stdio.h>

int main() {
	int numero;		// declaração do valor a ser testado
	int i, primo = 1;	// variavel auxiliar

	printf("Teste para numeros primos\n");
	printf("Digite um inteiro para verificar se primo: ");
	scanf("%d", &numero);

	// laço para todas as possibilidade de teste
	for (i=2; i<=numero/2; i++) {
		// verifica se numero divisivel por i
		if (numero%i==0) {
			primo = 0; 	// caso afirmativo numero nao é primo
			break;		// nao é preciso prosseguir com laço
		}
	}
	// uso do operador ?: para formatar mensagem final
	printf("%d %s primo!\n", numero, (primo ? "e" : "nao e"));
	return 0;
}

