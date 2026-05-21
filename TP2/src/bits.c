#include <stdio.h>

int main() {
    // Exemple de valeur : le nombre hexadécimal 0x10001000 possède
    // un 1 au 4ème bit de gauche et un 1 au 20ème bit de gauche.
    unsigned int d = 0x10001000; 

    // Extraction des bits (Décalage puis masquage avec 1)
    int bit4  = (d >> 28) & 1;
    int bit20 = (d >> 12) & 1;

    // Vérification : si les deux valent 1, le résultat est 1, sinon 0
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("Resultat de la verification : %d\n", resultat);

    return 0;
}
