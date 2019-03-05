#include <stdio.h>

double Soma(double, double);			// declaração da função

int main() {							// função principal
	double a, b;						// declara variáveis
	printf("Digite dois valores: ");	// exibe mensagem
	scanf("%lf %lf", &a, &b); 		// leitura das variáveis
	// chama função e exibe resultado
	printf("%lf + %lf = %lf\n", a, b, Soma(a, b));
	return 0;
}

double Soma(double a, double b) {		// definição da função
	return a + b; // retorna soma dos argumentos recebidos
}

