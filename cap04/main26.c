#include <stdio.h>
#include <string.h>

int main() {
	// declara strings inicializadas com literais
	char p1[] = "abc", p2[] = "defghi";
	// declara outras strings sem inicialização
	char p3[10], p4[20];
	// prepara string não inicializada
	p3[0] = '\0';
	p4[0] = '\0';

	printf("#\tTam.\tStrings\n"); // exibe strings
	printf("p1\t%d\t'%s'\n", strlen(p1), p1);
	printf("p2\t%d\t'%s'\n", strlen(p2), p2);
	printf("p3\t%d\t'%s'\n", strlen(p3), p3);
	printf("p4\t%d\t'%s'\n", strlen(p4), p4);

	printf("\nCopia\n"); // copia e exibe strings
	strcpy(p3, p2);
	printf("p3<-p2\t%d\t'%s'\n", strlen(p3), p3);
	strcpy(p3, p1);
	printf("p3<-p1\t%d\t'%s'\n", strlen(p3), p3);
	printf("\nConcatenacao\n"); // concatena e exibe strings
	strcat(p3,p2);
	printf("p3+p2\t%d\t'%s'\n", strlen(p3), p3);
	strcat(p4,p2);
	printf("p4+p2\t%d\t'%s'\n", strlen(p4), p4);
	strcat(p4,p3);
	printf("p4+p3\t%d\t'%s'\n", strlen(p4), p4);
	printf("\nTroca manual\n");
	int i, trocas;
	for(i=0,trocas=0; i<strlen(p4); i++) { // percorre string p4
		if (p4[i]=='d') {
			p4[i] = 'X'; // troca 'd' por 'X'
			trocas++; // conta trocas
		}
	}
	printf("p4\t%d\t'%s'\ttrocas=%d\n", strlen(p4), p4, trocas);
	return 0; // encerra programa
}

