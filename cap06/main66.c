#include <stdio.h>
#include <string.h>
#include "produto.h"

int main() {
    FILE *arq;
    // declaração da estrutura
    s_produto produto;
    // inicialização da estrutura
    produto.codigo = 102030;
    produto.preco = 19.12;
    strcpy(produto.descricao,"Defletor quantico");

    if ((arq = fopen("teste03.bin", "wb")) == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }
    // escrita binária no arquivo
    int res = fwrite(&produto, sizeof(s_produto), 1, arq);
    if (res==1) {
        printf("sizeof(s_produto)=%d\n", sizeof(s_produto));
        printf("Dados gravados\n", res);
    } else {
        printf("Erro na gravacao do arquivo.\n");
        return -2;
    }
    // fechamento do arquivo
    fclose(arq);
    
    return 0;
}
