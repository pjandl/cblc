#include <stdio.h>

union u_variante {	// união
    short valor_s;		// campo inteiro curto
    long valor_l;		// campo inteiro longo
    double valor_d;	// campo real de dupla precisão
};

int main() {
    union u_variante v;	// declara união
    v.valor_d = 0; 		// inicializa união
    char resp;	// variável auxiliar para resposta
    do {		// laço que exibe todos os campos da união
        printf("u_variante [ valor_s = %d, valor_l = %ld, valor_d = %lf]\n",
  		v.valor_s, v.valor_l, v.valor_d);
        // oferece alternativas para usuário
        printf("Alterar campo s|l|d ou (f)inalizar? ");
        fflush(stdin);
		scanf("%c", &resp);

        switch(resp) {	// efetua alteração do campo escolhido
          case 'd':
          case 'D': printf("Novo valor_d = ?\b");
                    scanf("%lf", &v.valor_d);
                    break;
          case 'l':
          case 'L': printf("Novo valor_l = ?\b");
                    scanf("%ld", &v.valor_l);
                    break;
          case 's':
          case 'S': printf("Novo valor_s = ?\b");
                    scanf("%d", &v.valor_s);
                    break;
        }
    } while (resp!='f' && resp!='F');
    return 0;
}

