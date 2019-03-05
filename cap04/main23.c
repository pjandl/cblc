#include <stdio.h>

int main() {
    // declaração e inicialização de arranjos
    long ar1[100];
    int ar2[5] = { 13, -28, 946, 50, 724 };

    // exibição do 1o e último elementos
    printf("ar1[0] = %8ld\tar1[99] = %8ld\n", ar1[0], ar1[99]);
    printf("ar2[0] = %8d\t ar2[4] = %8d\n", ar2[0], ar2[4]);

    // expressões envolvendo arranjos
    ar1[0] = 1354;
    ar1[99] = 2*ar2[0] - ar2[1];
    ar2[0] = 0;  ar2[1] = 1;  ar2[2] = 2;
    ar2[3] = 3;  ar2[4] = 4;

    // exibição do 1o e último elementos
    printf("ar1[0] = %8ld\tar1[99] = %8ld\n", ar1[0], ar1[99]);
    printf("ar2[0] = %8d\t ar2[4] = %8d\n", ar2[0], ar2[4]);
    return 0;
}

