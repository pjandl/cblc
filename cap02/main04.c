#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include <stdio.h>

int main() {
    int i = 47;
    long int li = 1000000000;
    char c1 = 'Q', c2 = 65;
    unsigned char uc = 0xF0;
    float f1 = 13.2f, f2 = 0;
    double d = 0.007654;
    printf("i = %d ou %o ou %X\tli = %ld\n", i, i, i, li);
    printf("c1 = %c\tc2 = %c\n", c1, c2);
    printf("uc = %X ou %x ou %u\n", uc, uc, uc);
    printf("f1 = %f\tf2 = %f\n", f1, f2);
    printf("d = %g ou %e\n", d, d);
    return 0;
}

