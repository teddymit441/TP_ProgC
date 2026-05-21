#include <stdio.h>

int main() {
    // Déclaration des tableaux pour 5 étudiants
    char *noms[5] = {"Dupont", "Martin", "Durand", "Lefebvre", "Moreau"};
    char *prenoms[5] = {"Marie", "Pierre", "Lucas", "Emma", "Louis"};
    char *adresses[5] = {
        "20, Blvd Niels Bohr, Lyon",
        "22, Blvd Niels Bohr, Lyon",
        "10, Rue de la Paix, Paris",
        "5, Av Foch, Lille",
        "14, Rue Verte, Marseille"
    };
    float notes_c[5] = {16.5, 14.0, 12.0, 15.5, 9.0};
    float notes_os[5] = {12.1, 14.1, 11.5, 17.0, 10.5};

    // Parcours et affichage
    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("  Nom : %s\n", noms[i]);
        printf("  Prenom : %s\n", prenoms[i]);
        printf("  Adresse : %s\n", adresses[i]);
        printf("  Note C : %.1f\n", notes_c[i]);
        printf("  Note OS : %.1f\n\n", notes_os[i]);
    }

    return 0;
}
