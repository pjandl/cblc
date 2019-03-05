#include <stdio.h>

int LeInteiro() {			// definição da função
    int temp;				// declaração de variável inteira
    // exibição da mensagem e leitura da variável
    printf("Digite um valor inteiro: ");
    scanf("%d", &temp);
    return temp;			// retorno do valor lido
}

int main() {				// definição da função principal
    int quant;				// declaração de variável inteira
    quant = LeInteiro();	// chamada da função e
 							// atribuição do valor retornado
    printf("Valor lido: %d\n", quant);	// exibição do valor lido pela função
    return 0;
}


