#include <stdio.h>

struct s_pessoa {
	char nome[80];		// string com 80 caracteres
	short ddd;		// inteiro curto
	int telefone;		// inteiro
	char email[80];		// string com 80 caracteres
};

int main() {
	// declaração e inicialização de estrutura
	struct s_pessoa eu = { "Peter", 11, 0, "prof.peter@fatec.sp.gov.br" };

	// exibe campos
	printf(" nome: %s\n fone: (%03d) %d\nemail: %s\n", eu.nome,
	       eu.ddd, eu.telefone, eu.email);
	// altera campos
	strcpy(eu.nome, "Peter Jandl Jr.");	// nome é campo string
	eu.telefone = 45227549;		// telefone é campo inteiro
	// exibe campos novamente
	printf(" nome: %s\n fone: (%03d) %d\nemail: %s\n", eu.nome,
	       eu.ddd, eu.telefone, eu.email);

	// declara outra estrutura e efetua leitura de seus campos
	struct s_pessoa vc;
	printf(" Nome: ?\b");
	gets(vc.nome);
	printf("  DDD: ?\b");
	scanf("%d", &vc.ddd);
	printf(" Fone: ?\b");
	scanf("%d", &vc.telefone);
	printf("Email: ?\b");
	scanf("%s", vc.email);
	// exibe campos
	printf(" nome: %s\n fone: (%03d) %d\nemail: %s\n", vc.nome,
	       vc.ddd, vc.telefone, vc.email);
	return 0;
}

