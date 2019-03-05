#include <stdio.h>

int main() {
    FILE *arq;
    int valor;
    
    if ((arq = fopen("teste01.bin", "rb")) == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }
    // leitura binária do arquivo
    int res = fread(&valor, sizeof(int), 1, arq);
    printf("%d dado lido de valor %d\n", res, valor);
    // fechamento do arquivo
    fclose(arq);
    
	return 0;
}
