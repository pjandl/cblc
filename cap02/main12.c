#include <stdio.h>

main() {
    // primeiro trecho
    double val = 80.00105;
    float div = 169;
    int    res1 = val/div;
    double res2 = val/div;
    printf("res1 = %d\n", res1);    // exibe res = 0
    printf("res2 = %f\n", res2);    // exibe res = 0.473379

    // segundo trecho
    long grande = 1000000001L;
    unsigned short int pequeno = grande;
    printf(" grande = %ld\n", grande);  // exibe grande = 1000000001
    printf("pequeno = %u\n", pequeno);  // exibe pequeno = 51713
    return 0;
}

