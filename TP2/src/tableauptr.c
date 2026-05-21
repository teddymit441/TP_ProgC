#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    srand(time(NULL));

    // Pointeurs de parcours
    int *p_int = tab_int;
    float *p_float = tab_float;

    // 1. Remplissage avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        *(p_int + i) = rand() % 150; 
        *(p_float + i) = (float)(rand() % 1000) / 100.0f;
    }

    // 2. Affichage avant modification
    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d%s", *(p_int + i), (i == TAILLE - 1) ? "" : ", ");
    }
    printf("\n\nTableau de nombres a virgule flottante (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f%s", *(p_float + i), (i == TAILLE - 1) ? "" : ", ");
    }
    printf("\n\n");

    // 3. Multiplication par 3 si l'indice est divisible par 2
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(p_int + i) *= 3;
            *(p_float + i) *= 3;
        }
    }

    // 4. Affichage après modification
    printf("Tableau d'entiers (apres la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d%s", *(p_int + i), (i == TAILLE - 1) ? "" : ", ");
    }
    printf("\n\nTableau de nombres a virgule flottante (apres la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f%s", *(p_float + i), (i == TAILLE - 1) ? "" : ", ");
    }
    printf("\n");

    return 0;
}
