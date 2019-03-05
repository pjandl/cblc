#include <stdio.h>
// declaração da função ConverteCparaF(double)
double ConverteCparaF(double);

int main() {				// função principal
    double tempC, tempF;			// declara variáveis
    printf("Temperatura em graus Celsius: ");
    scanf("%lf", &tempC);			// lê temperatura C
    tempF = ConverteCparaF(tempC);	// conversão da temperatura
    // exibe resultado e encerra programa
    printf("%7.2lf'C equivalem a %7.2lf'F\n", tempC, tempF);
    return 0;
}

// definição da função ConverteCparaF(double)
double ConverteCparaF(double celsius) {
    double fahrenheit;				// declara variável
    fahrenheit = celsius*9/5+32;		// efetua conversão
    return fahrenheit;				// retorna resultado
}

