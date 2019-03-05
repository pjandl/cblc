#include <stdio.h>
#include <stdlib.h>

int main() {
    int max, i;
    double soma = 0;
    printf("Quantidade de elementos ?\b");
    scanf("%d", &max);
    // aloca arranjo dinamicamente
    double *pDouble = (double*)malloc(max*sizeof(double));
    if (pDouble==NULL) {
        printf("Nao ha memoria suficiente no sistema.\n");
        return 1; // encerra programa com erro
    }
    printf("Entrada de valores\n");
    for(i=0; i<max; i++) {
        printf("valor[%d] ?\b", i);
        scanf("%lf", pDouble+i);
    }
    printf("Exibicao do arranjo\n[");
    for(i=0; i<max-1; i++) {
        printf("%7.3lf, ", *(pDouble+i));
        soma += pDouble[i]; // acumula valores dados
    }
    // exibe última valor e média
    printf("%7.3lf ]\nMedia = %7.3lf\n", *(pDouble+i), soma/max);
    free(pDouble); // libera memória alocada
    return 0;
}

