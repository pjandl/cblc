#include<stdio.h>
#include<string.h>

int main(){
    FILE *arq;
    char str[256];	// uma string (buffer) grande
    // abre arquivo para gravação
    arq = fopen("outro_arquivo.txt", "w");
    // laço para leitura de texto e gravação no arquivo
    printf("Digite seu texto. Use 'parar de gravar' para encerrar.\n");
    do {
        gets(str);			// leitura de string do console
        fputs(str, arq);	// escrita de string no arquivo
    } while(strcmp(str, "parar de gravar")!=0);
    // fechamento do arquivo
    fclose(arq);
    // encerramento do programa
    return 0;
}

