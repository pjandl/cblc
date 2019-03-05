#include<stdio.h>
#include<string.h>

int main(){
    FILE *arq;
    char str[256];	// uma string (buffer) grande
    // abre arquivo para leitura
    arq = fopen("outro_arquivo.txt", "r");
    // laço para leitura do arquivo e exibição do texto no console
    do{
        fgets(str,256, arq);	// leitura de string do arquivo
        puts(str);				// exibição da string no console
    }while(!feof(arq));
    // fechamento do arquivo
    fclose(arq);
    // encerramento do programa
    return 0;
}

