#include <stdio.h>
#include <string.h>

// estruturas independentes aninhadas
struct s_hora {
	short HH;
	short MM;
};
struct s_compromisso {
	struct s_hora hora;
	char lembrete[80];
};
// estrutura anônima aninhada
struct s_compromisso2 {
	struct {
		short HH;
		short MM;
	};
	char lembrete[80];
};

int main() {
	// declara e inicializa estrutura e ponteiro para a mesma
	struct s_compromisso c1 = { { 10, 30 }, "Cliente 1" };
	struct s_compromisso *p1 = &c1;

	// exibe conteúdo dos campos da estrutura
	printf("%02d:%02d %s\n", c1.hora.HH, c1.hora.MM, c1.lembrete);
	printf("%02d:%02d %s\n", p1->hora.HH, p1->hora.MM, p1->lembrete);

	// declara e inicializa estrutura e ponteiro para a mesma
	struct s_compromisso2 c2 = { { 14, 50 }, "Cliente 2" };
	struct s_compromisso2 *p2 = &c2;

	// exibe conteúdo dos campos da estrutura
	printf("%02d:%02d %s\n", c2.HH, c2.MM, c2.lembrete);
	printf("%02d:%02d %s\n", p2->HH, p2->MM, p2->lembrete);
	return 0;
}

