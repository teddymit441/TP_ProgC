#include <stdio.h>

int main() {
    // 1. Déclaration et initialisation des variables
    int a = 2;              // La base
    int b = 3;              // L'exposant
    long long resultat = 1; // Stocke le résultat final

    // 2. Calcul de la puissance avec une boucle for
    // La boucle tourne 'b' fois pour multiplier 'resultat' par 'a'
    for (int i = 0; i < b; i++) {
        resultat = resultat * a;
    }

    // 3. Affichage du résultat à l'écran
    printf("%d eleve a la puissance %d est egal a : %lld\n", a, b, resultat);

    return 0;
}
