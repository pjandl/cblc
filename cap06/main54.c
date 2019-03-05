#include <stdio.h>

int main(){
    FILE *arq;
    // abertura do arquivo
    arq = fopen("meu_arquivo.txt", "w");
    if(arq != NULL) {
        printf("arquivo aberto com sucesso!");
    } else {
        printf("erro ao abrir arquivo!");
    }
    // encerramento do programa
    return 0;
}

