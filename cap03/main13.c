#include <stdio.h>
#include <math.h>

int main() {
    float raio; // declara uma variável raio
    float area; // declara uma variável area

    printf("Area da Circunferencia\n");
    printf("Digite o valor do raio: "); // exibe mensagem
    scanf("%f", &raio); // efetua leitura da variável raio

    area = M_PI * raio * raio; // efetua cálculo da área

    printf("Area = %f\n", area); // exibe resultado
    return 0;
}

