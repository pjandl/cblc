#include <stdio.h>

main () {
    int a=0, b=0;
    printf("Digite dois valores inteiros a e b: ");
    scanf("%d %d", &a, &b);

    printf("Incremento e Decremento\n");
    printf("a = %d\t\tb = %d\n", a, b);
    printf("\tb = ++a\n"); b = ++a;
    printf("a = %d\t\tb = %d\n", a, b);
    printf("\tb = a++\n"); b = a++;
    printf("a = %d\t\tb = %d\n", a, b);
    printf("\ta = --b\n"); a = --b;
    printf("a = %d\t\tb = %d\n", a, b);
    printf("\ta = b--\n"); a = b--;
    printf("a = %d\t\tb = %d\n", a, b);
    return 0;
}

