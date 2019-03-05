#include <stdio.h>

int main(void) {
    int a, dia, mes, ano;
    float x, y;
    printf("Forneca um inteiro: ");
    scanf("%d", &a);
    printf("Inteiro fornecido foi %d.\n", a);
    printf("Forneca dois reais: ");
    scanf("%f %f", &x, &y);
    printf("Reais fornecidos foram %f e %f.\n", x, y);
    printf("Forneca uma data na forma dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data: %02d/%02d/%04d.\n", dia, mes, ano);
    return 0;
}

