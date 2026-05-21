#include <stdio.h>

int main() {
    char str1[50] = "Hello";
    char str2[] = " World!";
    char copie[50];
    char concat[100];

    // 1. Calcul de la longueur de str1
    int longueur = 0;
    while (str1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de \"%s\" : %d\n", str1, longueur);

    // 2. Copie de str1 dans 'copie'
    int i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0'; // Ne pas oublier le caractère de fin
    printf("Chaine copiee : \"%s\"\n", copie);

    // 3. Concaténation de str1 et str2 dans 'concat'
    int j = 0;
    // On copie d'abord la première chaîne
    while (str1[j] != '\0') {
        concat[j] = str1[j];
        j++;
    }
    // On ajoute la deuxième chaîne à la suite
    int k = 0;
    while (str2[k] != '\0') {
        concat[j] = str2[k];
        j++;
        k++;
    }
    concat[j] = '\0'; // Fin de chaîne
    printf("Chaine concatenee : \"%s\"\n", concat);

    return 0;
}
