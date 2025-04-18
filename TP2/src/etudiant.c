#include <stdio.h>

#define NOMBRE_ETUDIANTS 5

int main() {
    // Tableaux pour stocker les informations
    char noms[NOMBRE_ETUDIANTS][50] = {"Dupont", "Martin", "Leroy", "Moreau", "Bernard"};
    char prenoms[NOMBRE_ETUDIANTS][50] = {"Marie", "Lucas", "Sophie", "Thomas", "Claire"};
    char adresses[NOMBRE_ETUDIANTS][100] = {
        "12 rue de Paris, 75001 Paris",
        "7 avenue Victor Hugo, 69003 Lyon",
        "21 boulevard Haussmann, 75009 Paris",
        "5 rue Nationale, 59800 Lille",
        "3 place Bellecour, 69002 Lyon"
    };

    float notes_prog[NOMBRE_ETUDIANTS] = {14.5, 16.0, 12.0, 10.5, 17.0};
    float notes_sys[NOMBRE_ETUDIANTS] = {13.0, 15.5, 14.0, 11.0, 16.5};

    // Affichage des informations
    printf("===== Informations des étudiant.e.s =====\n\n");
    for (int i = 0; i < NOMBRE_ETUDIANTS; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom       : %s\n", noms[i]);
        printf("Prénom    : %s\n", prenoms[i]);
        printf("Adresse   : %s\n", adresses[i]);
        printf("Note Programmation en C        : %.2f\n", notes_prog[i]);
        printf("Note Système d'exploitation    : %.2f\n", notes_sys[i]);
        printf("------------------------------------------\n");
    }

    return 0;
}
