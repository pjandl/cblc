#include <stdio.h>
// declarações
int EPrimo(long);
int LeInteiro();

// função principal
int main() {
	int quant, res;			// variáveis
	// uso das funções
	quant = LeInteiro();
	res = EPrimo(quant);

	printf("Numero %d %s primo.\n", quant, (res==1 ? "e" : "nao e"));
	return 0;
}

// definições das funções
int LeInteiro() {
	int temp;			// variável auxiliar
	// exibição da mensagem e leitura da variável
	printf("Digite um valor inteiro: ");
	scanf("%d", &temp);
	return temp;			// retorno do valor lido
}
int EPrimo(long numero) {
	int primo = 1, div = 0;		// variáveis auxiliares
	// laço procura divisores de 2 até número/2
	for(div=2; div<=numero/2; div++) {
		if (numero%div==0) {	// verifica se div é divisor
			primo = 0;			// se tem divisor, número não é primo
			break;				// interrompe laço
		}
	} // se laço não interrompido número recebido é primo (primo = 1)
	return primo;	// retorno do resultado
}

