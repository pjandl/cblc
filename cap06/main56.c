#include<stdio.h>

int main() {
    FILE *arq;
    char ch;
    // abertura do arquivo
    arq = fopen("meu_arquivo.txt", "w");
    printf("Digite texto para armazenar, '0' finaliza.\n");
    // laço para leitura de caracteres e gravação no arquivo
    do {
        ch = getchar();	// lê caractere do console
        fputc(ch,arq);	// escreve caractere no arquivo
    } while(ch != '0');
    // fechamento do arquivo
    fclose(arq);
    // encerramento do programa
    return 0;
}

