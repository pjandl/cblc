#include<stdio.h>

int main() {
    FILE *arq;
    char ch;
    // abertura do arquivo
    arq = fopen("meu_arquivo.txt", "r");
    // laço para leitura do arquivo e exibição no console
    do {
        ch = fgetc(arq);	// lê caractere do arquivo
        printf("%c",ch);	// exibe caractere no console
    } while(!feof(arq));
    // fechamento do arquivo
    fclose(arq);
    // encerramento do programa
    return 0;
}

