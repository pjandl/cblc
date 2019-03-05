#include <stdio.h>

main () {
    int a=0, b=0;
    printf("Digite dois valores inteiros a e b: ");
    scanf("%d %d", &a, &b);

    printf("Operacoes Relacionais\n");
    printf("a == b : %d\n", a==b);
    printf("a != b : %d\n", a!=b);
    printf("a <  b : %d\n", a<b);
    printf("a >  b : %d\n", a>b);
    printf("a <= b : %d\n", a<=b);
    printf("a >= b : %d\n", a>=b);
    return 0;
}

