#include <stdio.h>

// função principal com recebimento de argumentos
int main(int argc, char *argv[]) {
    int i;
    // exibe mensagem com número de argumentos recebidos
    printf("Argumentos recebidos: %d\n", argc);

    // exibe todos os argumentos recebidos
    for(i=0; i<=argc; i++) {
        printf("%2d: %s\n", i, argv[i]);
    }
    return 0; // encerra o programa
}

