#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float noteC;
    float noteSE;
};

int main() {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Jean");
    strcpy(etudiants[0].adresse, "Paris");
    etudiants[0].noteC = 14.5;
    etudiants[0].noteSE = 13.0;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Marie");
    strcpy(etudiants[1].adresse, "Lyon");
    etudiants[1].noteC = 16.0;
    etudiants[1].noteSE = 15.5;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Paul");
    strcpy(etudiants[2].adresse, "Marseille");
    etudiants[2].noteC = 12.5;
    etudiants[2].noteSE = 11.0;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "Sophie");
    strcpy(etudiants[3].adresse, "Toulouse");
    etudiants[3].noteC = 15.0;
    etudiants[3].noteSE = 14.0;

    strcpy(etudiants[4].nom, "Leroy");
    strcpy(etudiants[4].prenom, "Lucas");
    strcpy(etudiants[4].adresse, "Nice");
    etudiants[4].noteC = 13.5;
    etudiants[4].noteSE = 12.0;
    
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.2f\n", etudiants[i].noteC);
        printf("Note Systeme d'exploitation : %.2f\n", etudiants[i].noteSE);
        printf("-----------------------------\n");
    }

    return 0;
}
