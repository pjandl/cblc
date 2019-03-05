#include <stdio.h>

void Troca(double*, double*); 			// declaração da função

int main() { 							// função principal
    double a, b;						// declara variáveis
    printf("Digite dois valores: ");	// exibe mensagem
    scanf("%lf %lf", &a, &b);			// leitura das variáveis
    printf("Valores dados: a = %lf  b = %lf\n", a, b);
    Troca(&a, &b);						// chama função
    printf("Valores trocados: a = %lf  b = %lf\n", a, b);
    return 0;							// encerra programa
}

void Troca(double *a, double *b) { 		// definição da função
    double aux = *a;					// armazena valor de a em aux
    *a = *b;							// armazena valor de b em a
    *b = aux;							// armazena valor de aux (=a) em b
}

