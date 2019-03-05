#include <stdio.h>
#define COUNT 8

int main() {
    FILE *arq;
    float dados[COUNT];
    int res, i;
    
    if ((arq = fopen("teste02.bin", "rb")) == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }
    // leitura binária no arquivo
    res = fread(dados, sizeof(float), COUNT, arq);
    if (res==COUNT) {
        printf("%d dados recuperados\n", res);
        for (i = 0; i < res; i++) {
            printf("%7.2f", dados[i]);
        }
        printf("\n");
    } else {
        printf("Erro na leitura do arquivo.\n");
        return -2;
    }
    // fechamento do arquivo
    fclose(arq);
    
    return 0;
}

