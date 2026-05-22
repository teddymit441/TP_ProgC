#include <stdio.h>  // Pour l'affichage avec printf
#include <math.h>   // Pour utiliser la constante de Pi (M_PI)

int main() {
    // 1. Déclaration des variables avec le type 'double' (nombre à virgule)
    double rayon = 10.5; // Vous pouvez changer cette valeur pour tester
    double aire;
    double perimetre;

    // 2. Calculs en utilisant les formules mathématiques
    // M_PI est une constante définie par <math.h> équivalente à 3.1415926535...
    aire = M_PI * rayon * rayon;
    perimetre = 2.0 * M_PI * rayon;

    // 3. Affichage des résultats
    // On utilise le format "%.2f" pour afficher seulement 2 chiffres après la virgule
    printf("--- Calculs pour un cercle de rayon : %.2f ---\n", rayon);
    printf("L'aire du cercle est : %.2f\n", aire);
    printf("Le perimetre du cercle est : %.2f\n", perimetre);

    return 0;
}