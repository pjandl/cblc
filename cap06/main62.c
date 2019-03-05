#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// função principal
int main() {
    FILE *arq;
    int quant, mes, pluv;
    float tmin, tmax;
    char cid[21];
	
    // ajusta o programa para definições do local atual
    setlocale(LC_ALL, "");
	
	// leitura dos dados no arquivo
	quant = 0; // contador de linhas
	arq = fopen("dados.dat", "rt");
	// arquivo é lido enquanto seu fim não é alcançado
	while (fscanf(arq, "%d %s %f %f %d",
                    &mes, cid, &tmin, &tmax, &pluv) != 5) {
		quant++; // incrementa contador de linha após leitura
    	printf("linha %4d: %02d %20s %6.2f %6.2f %4d\n",
                    quant, mes, cid, tmin, tmax, pluv);
	}
    fclose(arq);

    return 0;
}
