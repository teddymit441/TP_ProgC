#include <stdio.h>

int main() {
    // Initialisation des variables comme demandé
    int a = 16;
    int b = 3;
    
    // Variables pour stocker les résultats
    int resultat_arithmetique;
    int resultat_logique;

    printf("=========================================\n");
    printf("   TEST DES OPERATEURS AVEC A=%d ET B=%d\n", a, b);
    printf("=========================================\n\n");

    // --- 1. OPERATEURS ARITHMETIQUES ---
    printf("--- Opérateurs Arithmétiques ---\n");

    // Addition
    resultat_arithmetique = a + b;
    printf("Addition (a + b)        = %d\n", resultat_arithmetique);

    // Soustraction
    resultat_arithmetique = a - b;
    printf("Soustraction (a - b)    = %d\n", resultat_arithmetique);

    // Multiplication
    resultat_arithmetique = a * b;
    printf("Multiplication (a * b)  = %d\n", resultat_arithmetique);

    // Division entière
    resultat_arithmetique = a / b;
    printf("Division entiere (a / b) = %d  <-- (Notez bien la perte de la virgule !)\n", resultat_arithmetique);

    // Modulo (Reste de la division)
    resultat_arithmetique = a % b;
    printf("Modulo (a %% b)          = %d  <-- (Car 16 = 3 * 5 + Reste 1)\n\n", resultat_arithmetique);


    // --- 2. OPERATEURS DE COMPARAISON / LOGIQUES ---
    printf("--- Opérateurs de Comparaison (0 = Faux, 1 = Vrai) ---\n");

    // Test d'égalité (Attention : on utilise le double égal '==')
    resultat_logique = (a == b);
    printf("Est-ce que a == b ?     = %d\n", resultat_logique);

    // Test de supériorité
    resultat_logique = (a > b);
    printf("Est-ce que a > b ?      = %d\n", resultat_logique);

    printf("=========================================\n");
    return 0;
}