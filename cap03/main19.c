#include <stdio.h>

int main() {
	int max, i; // limite da contagem e contador
	printf("Contagem simples\n");
	printf("Digite um inteiro como limite da contagem: ");
	scanf("%d", &max);
	for(i=0; i<max; i++) {	// laço automático
		printf("%d, ", i);	// exibição do valor do contador
	}
	printf("Fim.\n");
	return 0;
}

