#include <stdio.h>

int main() {
    char nome[] = "Peter Jandl Junior";
    // Endereços literais podem ser inválidos em outros sistemas!
    char *pChar = (char *)0x0062FE20;
    printf("%p: %c\n", pChar, *pChar);
    pChar = pChar + 1;
    printf("%p: %c\n", pChar, *pChar);
    pChar += 1;
    printf("%p: %c\n", pChar, *pChar);
    pChar++;
    printf("%p: %c\n", pChar, *pChar);
    pChar = pChar + 1;
    printf("%p: %c\n", pChar, *pChar);

    long *pLong = (long *)0x0062FE30;
    printf("%p: %ld\n", pLong, *pLong);
    pLong = pLong - 1;
    printf("%p: %ld\n", pLong, *pLong);
    pLong -= 1;
    printf("%p: %ld\n", pLong, *pLong);
    pLong--;
    printf("%p: %ld\n", pLong, *pLong);
    return 0;
}

