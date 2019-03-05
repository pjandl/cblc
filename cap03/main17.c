#include <stdio.h>

int main() {
    int i;  // declaração da variável contador
    printf("Contagem regressiva\n");

    // leitura do valor inicial
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &i);
    while (i>0) {		// laço condicional while
        printf("%d, ", i);	// exibe valor da contagem
        i--;			// decrementa variável
    }
    printf("Fim.\n");
    return 0;
}

