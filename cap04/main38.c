#include <stdio.h>
#include <stdlib.h>

// tipos e estruturas
typedef struct {
	int ano;
	int mes;
	int dia;
} s_data;
typedef struct {
	int hh;
	int mm;
} s_horario;
typedef struct {
	char descricao[41];
	s_data data;
	s_horario horario;
} s_compromisso;

// declaração de funções
int LeCompromissos(s_compromisso[], int);
void ListaCompromissos(s_compromisso[], int);

int main() {
	int max, quant; // quantidade máxima e usada de compromissos
	printf("Quantidade de compromissos? ");
	scanf("%d", &max);
	// aloca arranjo
	s_compromisso *lembrete = (s_compromisso *) malloc(max*sizeof(s_compromisso));
	quant = LeCompromissos(lembrete, max);	// lê compromissos
	ListaCompromissos(lembrete, quant);		// lista compromissos
	return 0;
}
// definição das funções
int LeCompromissos(s_compromisso comp[], int max) {
	int quant = 0;
	char resp;
	do {
		printf("Digite descricao do compromisso:\n");
		fflush(stdin);
		gets(comp[quant].descricao);
		printf("Data do compromisso (DD/MM/AAAA): ");
		scanf("%d/%d/%d", &comp[quant].data.dia,
		      &comp[quant].data.mes, &comp[quant].data.ano);
		printf("Horario do compromisso (HH:MM): ");
		scanf("%d:%d", &comp[quant].horario.hh,
		      &comp[quant].horario.mm);
		quant++;
		if (quant>=max) break;
		printf("Outro compromisso (S|N)? ");
		fflush(stdin);
		scanf("%c", &resp);
	} while (resp=='s'||resp=='S');
	return quant;
}
void ListaCompromissos(s_compromisso comp[], int quant) {
	int j;
	printf("Compromissos\n");
	for(j=0; j<quant; j++) {
		printf("%2d.%-40s %02d/%02d/%04d %02d:%02d\n",
		       j+1, comp[j].descricao, comp[j].data.dia, comp[j].data.mes,
		       comp[j].data.ano, comp[j].horario.hh, comp[j].horario.mm);
	}
}

