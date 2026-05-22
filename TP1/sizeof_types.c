#include <stdio.h>

int main() {
    printf("=========================================\n");
    printf("   TAILLE DES TYPES DE BASE EN C\n");
    printf("=========================================\n\n");

    // 1. Les types de caractères et entiers (qui acceptent signed et unsigned)
    printf("--- Types Entiers ---\n");
    printf("char               : %zu octet(s)\n", sizeof(char));
    printf("unsigned char      : %zu octet(s)\n\n", sizeof(unsigned char));

    printf("short              : %zu octet(s)\n", sizeof(short));
    printf("unsigned short     : %zu octet(s)\n\n", sizeof(unsigned short));

    printf("int                : %zu octet(s)\n", sizeof(int));
    printf("unsigned int       : %zu octet(s)\n\n", sizeof(unsigned int));

    printf("long int           : %zu octet(s)\n", sizeof(long int));
    printf("unsigned long int  : %zu octet(s)\n\n", sizeof(unsigned long int));

    printf("long long int      : %zu octet(s)\n", sizeof(long long int));
    printf("unsigned long long : %zu octet(s)\n\n", sizeof(unsigned long long));

    // 2. Les types flottants (nombres à virgule) - Pas de signed/unsigned ici !
    printf("--- Types Flottants ---\n");
    printf("float              : %zu octet(s)\n", sizeof(float));
    printf("double             : %zu octet(s)\n", sizeof(double));
    printf("long double        : %zu octet(s)\n", sizeof(long double));

    printf("=========================================\n");
    return 0;
}