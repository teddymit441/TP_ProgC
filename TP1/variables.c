#include <stdio.h>

int main() {
    // 1. Initialisation des variables de type caractère
    char caractere = 'A';
    unsigned char num_caractere = 250;

    // 2. Initialisation des entiers courts (short)
    short entier_court = -32000;
    unsigned short entier_court_non_signe = 64000;

    // 3. Initialisation des entiers standards (int)
    int entier = -2147483640;
    unsigned int entier_non_signe = 4294967290U; // Le 'U' indique que c'est un Unsigned à GCC

    // 4. Initialisation des entiers longs (long int)
    long int entier_long = -900000000000000000L; // Le 'L' pour Long
    unsigned long int entier_long_non_signe = 18000000000000000000UL; // 'UL' pour Unsigned Long

    // 5. Initialisation des entiers très longs (long long int)
    long long int entier_tres_long = -9223372036854775800LL;
    unsigned long long int entier_tres_long_non_signe = 18446744073709551610ULL;

    // 6. Initialisation des nombres à virgule (flottants)
    float flottant = 3.14159f; // Le 'f' indique que c'est un simple float (sinon GCC comprend double par défaut)
    double double_precision = 2.718281828459;
    long double grande_precision = 1.234567890123456789L;

    // --- AFFICHAGE DES VALEURS ---
    printf("==================================================\n");
    printf("        AFFICHAGE DES VARIABLES EN C\n");
    printf("==================================================\n\n");

    printf("char                      (%%c)   : %c\n", caractere);
    printf("unsigned char (numérique) (%%d)   : %d\n\n", num_caractere);

    printf("short                     (%%hd)  : %hd\n", entier_court);
    printf("unsigned short            (%%hu)  : %hu\n\n", entier_court_non_signe);

    printf("int                       (%%d)   : %d\n", entier);
    printf("unsigned int              (%%u)   : %u\n\n", entier_non_signe);

    printf("long int                  (%%ld)  : %ld\n", entier_long);
    printf("unsigned long int         (%%lu)  : %lu\n\n", entier_long_non_signe);

    printf("long long int             (%%lld) : %lld\n", entier_tres_long);
    printf("unsigned long long int    (%%llu) : %llu\n\n", entier_tres_long_non_signe);

    printf("float                     (%%f)   : %f\n", flottant);
    printf("double                    (%%lf)  : %lf\n", double_precision);
    // On affiche le long double avec une précision forcée à 18 chiffres après la virgule
    printf("long double               (%%Lf)  : %.18Lf\n", grande_precision);

    printf("==================================================\n");
    return 0;
}