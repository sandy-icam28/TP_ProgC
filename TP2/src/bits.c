#include <stdio.h>

int main() {
    int d = 3754032959;

    int taille = sizeof(int) * 8;

    int pos4 = taille - 4;
    int pos20 = taille - 20;

    int bit4 = (d >> pos4) & 1;
    int bit20 = (d >> pos20) & 1;

    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
