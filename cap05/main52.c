#include <stdio.h>
#include <stdlib.h>

unsigned long  fatorial(unsigned int);

int main(int argc, char *argv[]) {
    int n;
    printf("Digite um inteiro: ?\b"); scanf("%d", &n);
    if (n<0) {
        printf("Fatorial e' definido apenas para inteiros positivos\n");
        return 2; // encerra programa com erro
    }
    printf("Fatorial(%d) = %ld\n", n, fatorial(n));
    return 0; // encerra programa OK
}

unsigned long fatorial(unsigned int n) {
    // definição inicial de fatorial
    if (n==0) { return 1; }
    return n*fatorial(n-1); // uso recursivo
}

