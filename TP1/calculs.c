#include <stdio.h>

int main() {
    // 1. Initialisation des variables de test (tu peux changer l'opérateur et les nombres ici)
    int num1 = 12;
    int num2 = 5;
    char op = '&'; // Teste successivement : '+', '-', '*', '/', '%', '&', '|', '~'

    printf("=========================================\n");
    printf("   CALCULATRICE SWITCH (num1=%d, num2=%d)\n", num1, num2);
    printf("=========================================\n\n");

    // 2. Structure Switch basées sur le caractère 'op'
    switch (op) {
        // --- Opérations Arithmétiques ---
        case '+':
            printf("Résultat : %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Résultat : %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Résultat : %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Résultat : %d / %d = %d (division entière)\n", num1, num2, num1 / num2);
            } else {
                printf("Erreur : Division par zéro impossible !\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("Résultat : %d %% %d = %d (modulo)\n", num1, num2, num1 % num2);
            } else {
                printf("Erreur : Division par zéro pour le modulo !\n");
            }
            break;

        // --- Opérations sur les Bits (Bitwise) ---
        case '&': // ET logique bit à bit
            printf("Résultat Bitwise ET (%d & %d) = %d\n", num1, num2, num1 & num2);
            break;
        case '|': // OU logique bit à bit
            printf("Résultat Bitwise OU (%d | %d) = %d\n", num1, num2, num1 | num2);
            break;
        case '~': // NON logique bit à bit (opérateur unaire, utilise uniquement num1)
            printf("Résultat Bitwise NOT (~%d)   = %d\n", num1, ~num1);
            break;

        // Sécurité si l'utilisateur met un opérateur inconnu
        default:
            printf("Erreur : L'opérateur '%c' n'est pas reconnu.\n", op);
            break;
    }

    printf("\n=========================================\n");
    return 0;
}