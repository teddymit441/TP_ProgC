#include <stdio.h>

int main() {
    // Instructions : Déclaration et Initialisation de la hauteur
    int n = 5; 
    int i, j;

    printf("=========================================\n");
    printf("     GENERATION DE LA PYRAMIDE (n = %d)\n", n);
    printf("=========================================\n\n");

    // Boucle principale : itère sur chaque niveau de la pyramide (de 1 à n)
    for (i = 1; i <= n; i++) {
        
        // Sous-boucle 1 : Affichage des espaces pour centrer la pyramide
        // Il faut de moins en moins d'espaces au fur et à mesure qu'on descend
        for (j = 1; j <= (n - i); j++) {
            printf(" ");
        }

        // Sous-boucle 2 : Affichage de la partie croissante (de 1 jusqu'à i)
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Sous-boucle 3 : Affichage de la partie décroissante (de i-1 jusqu'à 1)
        for (j = (i - 1); j >= 1; j--) {
            printf("%d", j);
        }

        // Affichage des résultats : passage à la ligne suivante après chaque niveau
        printf("\n");
    }

    // Terminaison : Message indiquant que la génération est finie
    printf("\n=========================================\n");
    printf("Generation de la pyramide terminee !\n");
    printf("=========================================\n");

    return 0;
}