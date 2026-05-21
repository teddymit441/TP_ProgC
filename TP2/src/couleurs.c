#include <stdio.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

int main() {
    struct Couleur palette[10];

    // Initialisation en notation hexadécimale
    palette[0] = (struct Couleur){0xef, 0x78, 0x12, 0xff};
    palette[1] = (struct Couleur){0x2c, 0xc8, 0x64, 0xff};
    palette[2] = (struct Couleur){0xff, 0x57, 0x33, 0xff};
    palette[3] = (struct Couleur){0x33, 0x57, 0xff, 0xaa};
    palette[4] = (struct Couleur){0xf1, 0xc4, 0x0f, 0xff};
    palette[5] = (struct Couleur){0x9b, 0x59, 0xb6, 0xff};
    palette[6] = (struct Couleur){0x34, 0x49, 0x5e, 0xff};
    palette[7] = (struct Couleur){0x16, 0xa0, 0x85, 0xff};
    palette[8] = (struct Couleur){0x27, 0xae, 0x60, 0xff};
    palette[9] = (struct Couleur){0x7f, 0x8c, 0x8d, 0xff};

    // Affichage
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", palette[i].r);
        printf("Vert : %d\n", palette[i].g);
        printf("Bleu : %d\n", palette[i].b);
        printf("Alpha : %d\n\n", palette[i].a);
    }

    return 0;
}
