#include <stdio.h>

int main() {
    int  a = 33;	// variável inteira simples
    char c = 'A';	// variável caractere simples
    int*  p1 = &a;	// ponteiro para inteirod
    char* p2 = &c;	// ponteiro para caractere
    // exibe informações sobre as variáveis e os ponteiros
    printf(" Endereco da variavel a: %p\n", &a);
    printf(" Endereco da variavel c: %p\n", &c);
    printf(" Conteudo da variavel a: %d\n", a);
    printf(" Conteudo da variavel c: %c\n", c);
    printf("            Ponteiro p1: %p\n", p1);
    printf("            Ponteiro p2: %p\n", p2);
    printf("Conteudo do endereco p1: %d\n", *p1);
    printf("Conteudo do endereco p2: %c\n", *p2);
    printf("Endereco do ponteiro p1: %p\n", &p1);
    printf("Endereco do ponteiro p2: %p\n", &p2);
    return 0; // encerra o programa
}

