#include <stdio.h>

int main() {
    FILE *arq;
    int valor = 123456;
    
    if ((arq = fopen("teste01.bin", "wb")) == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }
    // escrita binária no arquivo
    int res = fwrite(&valor, sizeof(int), 1, arq);
    printf("%d\n", res);
    // fechamento do arquivo
    fclose(arq);
    
	return 0;
}
