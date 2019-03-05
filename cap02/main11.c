#include <stdio.h>

main () {
    unsigned char a, b;
    printf("Digite dois valores inteiros a e b: ");
    scanf("%u %u", &a, &b);

    printf("Operacoes Bitwise\n");
    printf(" a & b = %d\n", a&b);
    printf(" a | b = %d\n", a|b);
    printf(" a ^ b = %d\n", a^b);
    printf("    ~a = %d\n", ~a);
    printf("a >> 1 = %d\n", a>>1);
    printf("b << 3 = %d\n", b<<3);
    return 0;
}

