#include <stdio.h>

int main() {
    char chaine1[] = "Hello";
    char chaine2[] = " World!";
    char concat[100];
    int longueur1 = 0;
    int longueur2 = 0;

    // Calculer la longueur de chaine1
    while (chaine1[longueur1] != '\0') {
        longueur1++;
    }
    while (chaine2[longueur2] != '\0') {
        longueur2++;
    }

    printf("Longueur de chaine 1 : %d\n", longueur1);
    printf("Longueur de chaine 2 : %d\n", longueur2);

    // Copier chaine1 dans concat
    int i = 0;
    while (chaine1[i] != '\0') {
        concat[i] = chaine1[i];
        i++;
    }

    //Concatener chaine2 avec concat
    int j = 0;
    while (chaine2[j] != '\0') {
        concat[i] = chaine2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("Concatenation : %s\n", concat);

    return 0;
}
