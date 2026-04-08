#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1;
    }
    printf("\nTableau avant tri :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
        if ((i + 1) % 10 == 0) printf("\n"); // 10 nombres par ligne
    }
    // Tri du tableau par ordre croissant
    for (int i = 0; i < 99; i++) {
        for (int j = 0; j < 99 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("\nTableau trie par ordre croissant :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
        if ((i + 1) % 10 == 0) printf("\n"); // 10 nombres par ligne
    }

    // Valeurs minimale et maximale
    printf("\nValeur minimale : %d\n", tableau[0]);
    printf("Valeur maximale : %d\n", tableau[99]);

    return 0;
}
