#include <stdio.h>

int main() {
	int prog;	// contador progressivo
	int regr;	// contador regressivo

	printf("Contagem dupla\n");
	printf("Valor inicial da contagem progressiva: ");
	scanf("%d", &prog);
	do { // do/while garante valor adequado
		printf("%s\n%s", "Valor inicial da contagem regressiva",
		       "(deve ser maior que valor inicial da contagem progressiva: ");
		scanf("%d", &regr);
	} while (prog>=regr);

	do {
		printf("Prog = %4d Regr = %4d\n", prog, regr);
		prog++;		// incrementa contador progressivo
		regr--;		// decrementa contador regressivo
	} while (prog<=regr);	// condição da contagem dupla
	return 0;
}

