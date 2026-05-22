#include <stdio.h>

int main() {
    int somme = 0; // Variable pour accumuler les nombres
    int i;         // Compteur de la boucle

    // Boucle for qui parcourt les nombres de 1 à 1000
    for (i = 1; i <= 1000; i++) {
        
        // Condition 1 : Si le nombre est divisible par 11
        // L'opérateur '%' (modulo) donne le reste de la division. Si le reste vaut 0, c'est divisible.
        if (i % 11 == 0) {
            continue; // On passe directement au nombre suivant (i++), sans exécuter la suite
        }

        // Condition 2 : Si le nombre est divisible par 5 OU par 7
        // L'opérateur '||' signifie "OU" en logique C
        if (i % 5 == 0 || i % 7 == 0) {
            somme = somme + i; // On ajoute le nombre actuel à la somme totale
        }

        // Condition 3 : Si la somme dépasse 5000, on applique l'arrêt d'urgence
        if (somme > 5000) {
            printf("[INFO] Arret de la boucle : la somme a depasse 5000 au nombre %d.\n", i);
            break; // On sort définitivement de la boucle for
        }
    }

    // Affichage du résultat final
    printf("=========================================\n");
    printf("La somme finale calculee est : %d\n", somme);
    printf("=========================================\n");

    return 0;
}