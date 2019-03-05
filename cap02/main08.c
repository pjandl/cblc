#include <stdio.h>

main () {
    float a=0, b=0;

    printf("Digite dois valores reais 'a' e 'b': ");
    scanf("%f %f", &a, &b);

    printf("Operacoes Aritmeticas\n");
    printf("   -b = %f\n", -b);
    printf("a + b = %f\n", a + b);
    printf("a - b = %f\n", a - b);
    printf("a * b = %f\n", a * b);
    printf("a / b = %f\n", a / b);
    printf("7 %% 2 = %d\n", 7 % 2);
    return 0;
}

