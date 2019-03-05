#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função principal
int main() {
    FILE *arq;
    int quant, a, b, c, d, e, f, i;
	
    // ajusta o programa para definições do local atual
    setlocale(LC_ALL, "");
	
	// leitura dos dados no arquivo
	quant = 0; // contador de linhas
	arq = fopen("numeros.txt", "rt");
	printf("arquivo aberto\n");
	// arquivo é lido enquanto seu fim não é alcançado
	while (fscanf(arq, "%d %d %d %d %d %d",
                    &a, &b, &c, &d, &e, &f) != EOF) {
		quant++; // incrementa contador de linha após leitura
    	printf("linha %4d: %6d %6d %6d %6d %6d %6d\n",
                    quant, a, b, c, d, e, f);
	}
    fclose(arq);

    return 0;
}
