#include <stdio.h>

int main() {
    int compteur = 5; // Taille du triangle (doit être < 10)
    int ligne, colonne;

    // Sécurité : on vérifie la consigne
    if (compteur >= 10 || compteur < 1) {
        printf("La taille doit être entre 1 et 9.\n");
        return 1; 
    }

    // Boucle principale : gère les lignes (de 1 à compteur)
    for (ligne = 1; ligne <= compteur; ligne++) {
        
        // Boucle secondaire : gère les colonnes de chaque ligne
        for (colonne = 1; colonne <= ligne; colonne++) {
            
            // Condition 1 : Si on est sur la toute dernière ligne (la base)
            // OU si on est au tout début de la ligne (colonne 1)
            // OU si on est à la fin de la ligne (colonne == ligne) -> On affiche une étoile
            if (ligne == compteur || colonne == 1 || colonne == ligne) {
                printf("* ");
            } 
            // Condition 2 : Sinon, on est à l'intérieur du triangle -> On affiche un dièse
            else {
                printf("# ");
            }
        }
        
        // Une fois la ligne finie, on passe à la ligne suivante
        printf("\n");
    }

    return 0;
}