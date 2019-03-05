#include <stdio.h>
#include "cliente.h"
#define MAX 100000

int main() {
    FILE *arq; // arquivo
    s_cliente cliente; // declaração da estrutura
    long i; // contador

    // abertura do arquivo modo de escrita binária
    if ((arq = fopen("clientes.dat", "wb")) == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }
    // escrita binária no arquivo
    for(i = 0; i < MAX; i++) {
        // inicialização da estrutura
        cliente.codigo = i;
        sprintf(cliente.nome, "Cliente #%7ld", i);
        // escrita no arquivo
        if (fwrite(&cliente, sizeof(s_cliente), 1, arq) != 1) {
           printf("Erro na gravacao do arquivo.\n");
           return -2;
        }
        printf("%8ld\r", i);
    }
    printf("%8ld registros de %d bytes", i, sizeof(s_cliente));
    // fechamento do arquivo
    fclose(arq);

    return 0;
}

