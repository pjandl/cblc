#include <stdio.h>
#include <math.h>

int main() {
    int i, l; // contadores
    double a, b, c, x, xi, xf; // coeficientes e ordenadas

    printf("Polinomio de 2o. grau\n");
    printf("Coeficientes reais a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Ordenada inicial e final: ");
    scanf("%lf %lf", &xi, &xf);

    // desenha eixo da abcissa
    printf("      0");
    for(i=1; i<6; i++) { printf("---------%d", i); }
    printf("\n");

    // determina pontos do polinômio
    for (x=xi; x<=xf; x+=0.2) {
        // exibe valor da ordenada
        printf("%6.1lf ", x);
        // calcula abcissa
        double y = a*pow(x,2) + b*x + c;
        if (y<0 || y>5) { // se abcissa fora de [0, 5]
          printf("\n"); // finaliza linha
          continue;     // não realiza o resto da iteração
        }
        // plota valor da abcissa em escala 10:1
        for(i=0, l=(int)(10*y-1); i<l; i++) { printf(" "); }
        printf("+\n");
    }
    return 0;
}

