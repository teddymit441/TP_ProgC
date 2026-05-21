#include <stdio.h>

// Fonction d'aide pour afficher le contenu brut de n'importe quelle variable octet par octet
void afficher_hex(unsigned char *ptr, size_t taille) {
    for (size_t i = taille; i > 0; i--) {
        printf("%02x", ptr[i - 1]);
    }
}

int main() {
    // Déclaration des variables de types de base
    int i = 0xa47865ff;
    float f = 2.0f; // 0x40000000 en représentation IEEE-754

    // Déclaration des pointeurs
    int *ptr_i = &i;
    float *ptr_f = &f;

    // --- AVANT LA MANIPULATION ---
    printf("Avant la manipulation :\n");
    printf("Adresse de i : %p, Valeur de i : ", (void*)ptr_i);
    afficher_hex((unsigned char*)ptr_i, sizeof(i));
    printf("\n");

    printf("Adresse de f : %p, Valeur de f : ", (void*)ptr_f);
    afficher_hex((unsigned char*)ptr_f, sizeof(f));
    printf("\n\n");

    // --- MANIPULATION VIA LES POINTEURS ---
    *ptr_i = 0xa47865fe; // Modification de la valeur ciblée
    *ptr_f = 1.0f;       // 0x3f800000 en représentation IEEE-754

    // --- APRÈS LA MANIPULATION ---
    printf("Après la manipulation :\n");
    printf("Adresse de i : %p, Valeur de i : ", (void*)ptr_i);
    afficher_hex((unsigned char*)ptr_i, sizeof(i));
    printf("\n");

    printf("Adresse de f : %p, Valeur de f : ", (void*)ptr_f);
    afficher_hex((unsigned char*)ptr_f, sizeof(f));
    printf("\n");

    return 0;
}
