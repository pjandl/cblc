#include <stdio.h>

int main() {
	int numero;		// declara��o do valor a ser testado
	int i, primo = 1;	// variavel auxiliar

	printf("Teste para numeros primos\n");
	printf("Digite um inteiro para verificar se primo: ");
	scanf("%d", &numero);

    // Verifica entrada
    if (numero < 2) {
        printf("Inteiro < 2 nao pode ser verificado\n");
        return 0;
    }
    // la�o para todas as possibilidade de teste
	for (i=2; i<=numero/2; i++) {
		// verifica se numero divisivel por i
		if (numero%i==0) {
			primo = 0; 	// caso afirmativo numero nao � primo
			break;		// nao � preciso prosseguir com la�o
		}
	}
	// uso do operador ?: para formatar mensagem final
	printf("%d %s primo!\n", numero, (primo ? "e" : "nao e"));
	return 0;
}

