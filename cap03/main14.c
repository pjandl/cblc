#include <stdio.h>

int main() {
    double a, b; // declaração de variáveis

    // solicitação de valores a e b
    printf("Digite um numero: "); scanf("%lf", &a);
    printf("Digite outro numero: "); scanf("%lf", &b);

    // compara valores fornecidos
    if (a>b) { // if #1
        printf("%lf maior que %lf\n", a, b);
    } else { // else #1
        if (a<b) { // if #2
            printf("%lf menor que %lf\n", a, b);
        } else { // else #2
            printf("%lf igual a %lf\n", a, b);
        }
    }
    return 0;
}

