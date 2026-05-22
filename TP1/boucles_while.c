#include <stdio.h>

int main() {
    int compteur = 5;
    int ligne = 1; // Initialisation pour la boucle externe

    if (compteur >= 10 || compteur < 1) {
        printf("La taille doit être entre 1 et 9.\n");
        return 1;
    }

    // Boucle externe (les lignes)
    while (ligne <= compteur) {
        int colonne = 1; // Réinitialisation de la colonne à chaque nouvelle ligne

        // Boucle interne (les colonnes)
        while (1) { // Boucle infinie "while(true)", on en sortira avec un break
            if (colonne > ligne) {
                break; // On a fini de dessiner la ligne, on sort de la boucle interne
            }

            // Même logique de dessin que pour le 'for'
            if (ligne == compteur || colonne == 1 || colonne == ligne) {
                printf("* ");
            } else {
                printf("# ");
            }

            colonne++; // Incrémentation manuelle de la colonne
        }

        printf("\n"); // Retour à la ligne
        ligne++;      // Incrémentation manuelle de la ligne
    }

    return 0;
}