#include <stdio.h>

int main() {
    int prog;   // contador progressivo
    float regr; // contador regressivo
    printf("Contagem dupla\n");
    printf("Valor inicial da contagem progressiva: ");
    scanf("%d", &prog);
    do {			// do/while garante valor adequado
        printf("%s\n%s", "Valor inicial da contagem regressiva",
        "(deve ser maior que valor inicial da contagem progressiva: ");
        scanf("%f", &regr);
    } while (prog>=regr);
    for(; prog<=regr; prog++, regr-=0.5) {	// contagem
        printf("[Prog = %+3d Regr = %+6.1f]", prog, regr);
        if (prog%3==0) printf("\n");
    }
    if (prog%3!=0) printf("\n");
    return 0;
}

