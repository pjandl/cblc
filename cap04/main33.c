#include <stdio.h>

int main() {
    // enumeração anônima
    enum {branco, cinza, preto};
    printf("cores: %d, %d e %d\n", branco, cinza, preto);

    // enumeração nominada com valores default
    enum nivel { FUNDAMENTAL, MEDIO, SUPERIOR, POSGRADUACAO };
    enum nivel escola1 = 3;
    enum nivel escola2 = (enum nivel)2; // type casting
    enum nivel escola3 = FUNDAMENTAL; // constantes enumeradas
    printf("escolas: %d, %d e %d\n", escola1, escola2, escola3);

    // enumeração nominada com valores definidos pelo programador
    enum zoom { um=1, dois=2, quatro=4, oito=8 };
    enum zoom z1 = (enum zoom)(um+quatro);
    enum zoom z2 = (enum zoom)66;	// valor aceito, mas inválido
    printf("zoom: %d - %d\n", z1, z2);

    // enumeração nominada com valor inicial dado pelo programador
    enum meses { janeiro=1, fevereiro, marco, abril, maio, junho,
               julho, agosto, setembro, outubro, novembro, dezembro };
    printf("meses: %d - %d\n", janeiro, dezembro);
    return 0;
}

