#include <stdio.h>

int main() {
	// declaração e inicialização de variáveis
	unsigned char c = 33; // primeiro caractere a ser exibido
	int i = 0;            // contador de caracteres por linha
	printf("Caracteres ASCII 33 ao 122\n");

laco: // rótulo para formação de laço
	printf("%c %3d| ", c, c); // exibe caractere e seu código
	i++;
	c++;   // incrementa o contador de caracteres e o caractere
	// se i é múltiplo de 10 pula linha
	if (i%10==0) {
		printf("\n");
	}
	// se caractere ainda não é o 122 'salta' para rótulo 'laco'
	if (c<=122) {
		goto laco;
	}
	return 0;
}


