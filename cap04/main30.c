#include <stdio.h>
#define MAX 8

int main() {
    int a[MAX], i, j, tmp;
    printf("Entrada de valores\n");
    for(i=0; i<MAX; i++) {
        printf("a[%d] ?\b", i); scanf("%d", &a[i]);
    }
    printf("Exibicao do arranjo\n[ ");
    for(i=0; i<MAX-1; i++) { printf("%d, ", a[i]); }
    printf("%d ]\n", a[i]);
    printf("Invertendo posicao do elementos...\n");
    for(i=0,j=MAX-1; i<j; i++, j--) {
        tmp = *(a+i);	// uso de aritmética de ponteiros
        *(a+i) = *(a+j);	// para acessar e modificar
        *(a+j) = tmp;	// elementos do arranjo
    }
    printf("Exibicao do arranjo invertido\n[ ");
    for(i=0; i<MAX-1; i++) { printf("%d, ", a[i]); }
    printf("%d ]\n", a[i]);
    return 0;
}

