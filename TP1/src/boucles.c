#include <stdio.h>

int main() {
    int compteur = 5;
    if (compteur >=10) {
        printf("Compteur doit etre strictement inferieur à 10");
    } else {
        for (int i = 1; i <= compteur; i++) {
            for (int j = 1; j <= i; j++) {
                if (j == 1 || j == i || i == compteur) {
                    printf("* ");
                } else {
                    printf("# ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
