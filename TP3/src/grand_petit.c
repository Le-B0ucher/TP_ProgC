#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int min, max;

    // Initialisation de la graine aléatoire
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 1000
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000 + 1; // Valeurs entre 1 et 1000
    }

    // Initialiser min et max avec la première valeur du tableau
    min = tableau[0];
    max = tableau[0];

    // Recherche du min et max
    for (int i = 1; i < TAILLE; i++) {
        if (tableau[i] < min) {
            min = tableau[i];
        }
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Affichage du résultat
    printf("Le numéro le plus petit est : %d\n", min);
    printf("Le numéro le plus grand est : %d\n", max);

    return 0;
}
