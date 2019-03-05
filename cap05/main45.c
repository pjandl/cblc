#include <stdio.h>

double var = 1;		// variável global

double F1(double);	// declaração de função

// função principal
int main() {
    double valor = 25;
    printf("F1(%lf) = %lf\n", valor, F1(valor));	// (1)
    printf("F1(%lf) = %lf\n", var, F1(var));		// (2)
    double var = 55; // oculta variável global
    printf("F1(%lf) = %lf\n", var, F1(var));		// (3)
    return 0;
}

// definição da função F1(double)
double F1(double var) { // oculta variável global
    printf("parametro formal var = %lf\n", var);
    return 2*var;
}

