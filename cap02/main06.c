#include <stdio.h>
int globalInt = -3; // declaração de variável de escopo global

int main() {
    // declaração de variável de escopo local
    char letra = 'A';
    // uso das variáveis
    printf("1. main()\nglobalInt = %d\nletra = %c\n\n",
        globalInt, letra);
    // declaração de varíavel no "meio" de um bloco
    double tmp = 0.0293;
    printf("2. main()\nglobalInt = %d\nletra = %c\ntmp = %f\n\n",
        globalInt, letra, tmp);
    {   // bloco de código interno a função principal
        // define novo escopo ainda mais restrito
        float tmp = 10.5;
        char letra = 66;
        // uso das variáveis
        globalInt = 13;
        printf("3. bloco\nglobalInt = %d\nletra = %c\ntmp = %f\n\n",
            globalInt, letra, tmp);
    } // fim do bloco
    // uso das variáveis
    printf("4. main()\nglobalInt = %d\nletra = %c\ntmp = %f\n\n",
        globalInt, letra, tmp);
    return 0;
} // fim de main
// fim do programa

