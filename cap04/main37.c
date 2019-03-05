#include <stdio.h>
int main() {
    union { // declaração de união anônima
        float dollars;
        float reais;
        float yens;
    } q;
    q.dollars = 10;
    printf("US$: %8.2f  R$: %8.2f Y: %8.2f\n", q.dollars, q.reais, q.yens);
    q.reais = q.dollars * 3.735;
    printf("US$: %8.2f  R$: %8.2f Y: %8.2f\n", q.dollars, q.reais, q.yens);
    q.yens = q.reais * 1.987;
    printf("US$: %8.2f  R$: %8.2f Y: %8.2f\n", q.dollars, q.reais, q.yens);
    return 0;
}

