#include <stdio.h>
#include <string.h>
#include "produto.h"

int main() {
    FILE *arq;
    // declaração da estrutura
    s_produto produto;

    // abertura do arquivo
    if ((arq = fopen("teste03.bin", "rb")) == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }
    // leitura binária do arquivo
    int res = fread(&produto, sizeof(s_produto), 1, arq);
    if (res==1) {
        printf("Dados lidos: %d bytes\n", sizeof(s_produto));
        printf("Codigo   : %d\n", produto.codigo);
        printf("Preco    : %.2f\n", produto.preco);
        printf("Descricao: %s\n", produto.descricao);
    } else {
        printf("Erro na leitura do arquivo.\n");
        return -2;
    }
    // fechamento do arquivo
    fclose(arq);

    return 0;
}

