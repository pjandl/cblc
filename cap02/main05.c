#include <stdio.h>

int valorGlobal = 33; // declaração de variável escopo global

int main() {
    // bloco de código da função principal define
    // um escopo próprio, mais restrito que o global
    // variável valorGlobal está dentro de seu escopo
    printf("(1) valorGlobal = %d\n", valorGlobal);

    {   // bloco de código interno a função principal
        // mais restrito que os escopos externos
        // variável valorGlobal está dentro de seu escopo
        printf("(2) valorGlobal = %d\n", valorGlobal);
    }
    return 0;
}

