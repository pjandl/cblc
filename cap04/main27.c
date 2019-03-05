#include <stdio.h>
#include <string.h>

int main() {
    char nome[20], linha[80]; // duas strings

    // entrada de string com uso de scanf
    printf("Digite seu 1o nome: ");	// exibe mensagem
    scanf("%s", nome);		// efetua leitura com scanf
    fflush(stdin);			// descarta entrada excendente
    printf("Ola %s!\n", nome);	// exibe 1o nome

    printf("Digite uma ou mais frases.\n");
    printf("Enter finaliza frase e '.' finaliza programa.\n");
    do { // entrada de string com uso de gets
        gets(linha);			// lê tudo até 'ENTER'
        printf(">> %s\n", linha);
    // encerra laço se 1o ou último caractere for '.'
    } while (linha[0]!='.' && linha[strlen(linha)-1]!='.');
    printf("Tchau\n");
    return 0; // encerra programa
}

