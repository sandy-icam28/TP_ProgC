#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        tableau[i] = rand() % 1000 + 1;
    }

    int min = tableau[0];
    int max = tableau[0];

    for (int i = 1; i < 100; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    printf("Valeur minimale : %d\n", min);
    printf("Valeur maximale : %d\n", max);

    return 0;
}
