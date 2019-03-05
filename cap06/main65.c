#include <stdio.h>

int main() {
    FILE *arq;
    float dados[] = { 01.23, 12.34, 23.45, 34.56, 45.67, 56.78, 67.89, 78.90 };
    
    if ((arq = fopen("teste02.bin", "wb")) == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }
    // escrita binária no arquivo
    int res = fwrite(dados, sizeof(float), 8, arq);
    if (res==8) {
        printf("%d dados gravados\n", res);
    } else {
        printf("Erro na gravacao do arquivo.\n");
        return -2;
    }
    // fechamento do arquivo
    fclose(arq);
    
	return 0;
}
