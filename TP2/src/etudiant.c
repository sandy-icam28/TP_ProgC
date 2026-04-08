#include <stdio.h>

int main() {
    char noms[5][50] = {"Dupont", "Martin", "Durand", "Petit", "Leroy"};
    char prenoms[5][50] = {"Jean", "Marie", "Paul", "Sophie", "Lucas"};
    char adresses[5][100] = {"Paris","Lyon","Marseille","Toulouse","Nice"};
    float notesC[5] = {14.5, 16.0, 12.5, 15.0, 13.5};
    float notesSE[5] = {13.0, 15.5, 11.0, 14.0, 12.0};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", notesC[i]);
        printf("Note Systeme d'exploitation : %.2f\n", notesSE[i]);
        printf("-----------------------------\n");
    }

    return 0;
}
