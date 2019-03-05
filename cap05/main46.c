#include <stdio.h>
#include <stdlib.h>

// estrutura auxiliar
typedef struct {
	double total;
	int quant;
} s_total;

// declaração da função Totalizador(double)
s_total* Totalizador(double);

int main() {			// função principal
	double valor = 0;		// variável de entrada
	while (1) {			// laço para entrada de valores
		printf("Digite um valor (-1 encerra entrada): ");
		scanf("%lf", &valor);
		// se valor inválido encerra laço
		if (valor<0) break;
		// chamada da função para totalização
		s_total* t = Totalizador(valor);
		// exibe total, quantidade de valores e média
		printf("Total = %lf\tQuant = %d\tMedia = %lf\n",
		       t->total, t->quant, t->total/t->quant);
		free(t); // libera memória
	}
	return 0;
}

// definição da função Totalizador(double)
s_total* Totalizador(double valor) {
	static int quant = 0;		// variáveis locais estáticas
	static double total = 0;
	// conta número de valores, acumulando-os
	total += valor;
	quant++;
	// cria dinâmicamente um elemento da estrutura
	s_total* tmp = (s_total*)malloc(sizeof(s_total));
	// ajusta campos do elemento
	tmp->total = total;
	tmp->quant = quant;
	return tmp; // retorna ponteiro da estrutura
}

