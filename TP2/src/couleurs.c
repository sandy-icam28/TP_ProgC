#include <stdio.h>

struct Couleur {
    unsigned char r; // rouge
    unsigned char g; // vert
    unsigned char b; // bleu
    unsigned char a; // alpha
};

int main() {
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x12, 0x34, 0x56, 0xaa},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0x00, 0xff},
        {0xff, 0x00, 0xff, 0xff},
        {0x00, 0xff, 0xff, 0xff},
        {0x80, 0x80, 0x80, 0xff},
        {0x00, 0x00, 0x00, 0xff}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d : \n Rouge : %u\n Vert : %u\n Bleu : %u\n Alpha : %u\n\n",
               i + 1,
               couleurs[i].r,
               couleurs[i].g,
               couleurs[i].b,
               couleurs[i].a);
    }

    return 0;
}
