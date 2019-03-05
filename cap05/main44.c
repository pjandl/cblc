#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declaração da função 'Inverte(const char*)'
char* Inverte(const char*);

int main() {				// função principal
    char palavra[256];		// declara string
    printf("Digite uma palavra: ");	// exibe mensagem
    scanf("%s", palavra);	// lê palavra
    char* invertida = Inverte(palavra);				// aciona função
    printf("Palavra invertida: %s\n", invertida);	// exibe resultado
    return 0;
}
// definição da função 'Inverte(const char*)'
char* Inverte(const char* str) {
    // variáveis e tamanho da string recebida
    int i, j, tamanho = strlen(str);
    // aloca espaço idêntico para string invertida
    char *tmp = (char *)malloc((tamanho+1)*sizeof(char));
    // copia caracteres da string recebida na invertida
    // 1o para último, 2o para penúltimo, ...
    for(i=0, j=tamanho-1;i<tamanho;i++,j--) {
        tmp[j] = str[i];
    }
    tmp[tamanho] = '\0';	// finaliza string invertida
    return tmp;				// retorna a string invertida
}

