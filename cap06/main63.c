#include <stdio.h>
#include <locale.h>

// função principal
int main() {
    FILE *arq;
    int quant, codigo;
    float preco;
    char descricao[41];

    // ajusta o programa para definições do local atual
    setlocale(LC_ALL, "");

    // leitura dos dados no arquivo
    quant = 0; // contador de linhas
    arq = fopen("lista.prod", "rt");
    // arquivo é lido enquanto seu fim não é alcançado
    while (fscanf(arq, "%d %f", &codigo, &preco) == 2) {
        fgets(descricao, 41, arq);
        quant++; // incrementa contador de linha após leitura
        printf("linha %04d: %06d R$%8.2f %-40s \n",
                    quant, codigo, preco, descricao);
    }
    fclose(arq);

    return 0;
}

