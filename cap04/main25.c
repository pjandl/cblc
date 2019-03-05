#include <stdio.h>

int main() {
    int l, c;
    // declara e inicializa matrizes
    int matriz[3][4] = {  {   31,  713,  37, 512 },
  			        { 102, -82,     9, -28 },
 			        {     8, 946, 546,   91 }  };
    double res[3][4];
    // exibe matriz organizada em linhas e colunas
    printf("Matriz dada:\n");
    for(l=0; l<3; l++) {
        printf("[ ");
        for(c=0; c<4; c++) printf("%7d ",matriz[l][c]);
        printf("]\n");
    }
    printf("Normalizando Matriz...\n");
    // determina maior elemento da matriz
    double maior = matriz[0][0];
    for(l=0; l<3; l++) {
        for(c=0; c<4; c++) {
            if (maior<matriz[l][c]) maior = matriz[l][c];
        }
    }
    // normaliza matriz: maior=1 e outros proporcionais a maior
    for(l=0; l<3; l++) {
        for(c=0; c<4; c++) res[l][c] = matriz[l][c]/maior;
    }
    printf("Matriz resultado:\n");
    // exibe matriz organizada em linhas e colunas
    for(l=0; l<3; l++) {
        printf("[ ");
        for(c=0; c<4; c++) printf("%7.4lf ", res[l][c]);
        printf("]\n");
    }
    return 0; // encerra programa
}

