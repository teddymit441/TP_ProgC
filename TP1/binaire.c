#include <stdio.h>

int main() {
    // Tableau contenant les 5 nombres à tester demandés dans l'énoncé
    int nombres_a_tester[5] = {0, 4096, 65536, 65535, 1024};
    int n, i;

    printf("========================================================\n");
    printf("        CONVERSION D'ENTIERS EN FORMAT BINAIRE\n");
    printf("========================================================\n\n");

    // Boucle qui parcourt nos 5 nombres de test
    for (n = 0; n < 5; n++) {
        int nombre = nombres_a_tester[n];
        
        printf("Nombre décimal : %-6d ➔ En binaire : ", nombre);

        // Drapeau (flag) pour éviter d'afficher une suite inutile de zéros au début
        int debut_trouve = 0;

        // Un 'int' fait 32 bits. On commence par analyser le bit le plus fort (le 31ème) 
        // et on descend jusqu'au bit le plus faible (le 0)
        for (i = 31; i >= 0; i--) {
            
            // 1. On décale le nombre vers la droite de 'i' positions
            // 2. On applique '& 1' (masque) pour extraire uniquement le bit tout à droite
            int bit = (nombre >> i) & 1;

            if (bit == 1) {
                debut_trouve = 1; // On repère le premier '1' pour nettoyer l'affichage
            }

            // On affiche le bit si on a commencé à trouver des 1, ou si on est sur le tout dernier bit (pour le nombre 0)
            if (debut_trouve || i == 0) {
                printf("%d", bit);
                
                // Optionnel : un petit espace tous les 4 bits pour rendre la lecture plus humaine
                if (i % 4 == 0 && i != 0) {
                    printf(" ");
                }
            }
        }
        printf("\n"); // Retour à la ligne pour le nombre suivant
    }

    printf("\n========================================================\n");
    return 0;
}