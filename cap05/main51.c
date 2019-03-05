#include <stdio.h>
#include <stdlib.h>

// função principal com recebimento de argumentos
int main(int argc, char *argv[]) {
    // avalia número de argumentos recebidos
    if (argc<4) {
        printf("uso:\n\tEx1115 <inteiro> <real> <string>\n");
        return 1;					// encerra programa com código de erro
    }
    // efetua conversões necessárias
    long inteiro = atol(argv[1]);	// primeiro argumento para long
    double real = atof(argv[2]);	// segundo argumento para double
    char *string = argv[3];			// terceiro argumento sem conversão
    // exibe argumentos convertidos
    printf("Arg1: %ld\nArg2: %lf\nArg3: %s\n", inteiro, real, string);
    return 0;						// encerra o programa OK
}

