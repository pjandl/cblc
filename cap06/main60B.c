#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 4

// função lê RA e nomes, armazenando nos arrays supridos
void le_RA_e_Nomes(char ra[][10], char nome[][30]) {
     int i;
     for (i=0; i<MAX; i++) {
         printf("  RA? "); scanf("%s", &ra[i]); fflush(stdin);
         printf("Nome? "); gets(nome[i]);
     }
}

// função le notas do aluno n, armazenando-as no array
void le_Notas(float nota[][3], int n) {
     printf("Nota 1? ");
     scanf("%f", &nota[n][0]);
     printf("Nota 2? ");
     scanf("%f", &nota[n][1]);
     nota[n][2] = (nota[n][0] + nota[n][1])/2;
}

// função principal

int main() {
    FILE *arq;
    char ra[MAX][10];
    char nome[MAX][30];
    float nota[MAX][3];
    int i;
	
    // ajusta o programa para definições do local atual
    setlocale(LC_ALL, "");
	
    // leitura de ras e nomes	
    le_RA_e_Nomes(ra, nome);
    // leitura das notas
    for (i=0; i<MAX; i++) {
        printf("%7s | %s\n", ra[i], nome[i]);
        le_Notas(nota, i);
        printf("--- %4.1f\n", nota[i][2]);
	}
	// escrita dos dados no arquivo
	arq = fopen("turma60.csv", "w");
	for (i=0; i<MAX; i++) {
		fprintf(arq, "%s;%s;%4.1f;%4.1f;%4.1f\n", ra[i], nome[i],
			nota[i][0], nota[i][1], nota[i][2]);
	}
    fclose(arq);
	
    return 0;
}
