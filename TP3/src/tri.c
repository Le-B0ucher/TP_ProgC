#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Fonction pour afficher un tableau
void afficher_tableau(int t[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", t[i]);
        if ((i + 1) % 10 == 0) printf("\n"); // 10 par ligne
    }
}

// Fonction de tri à bulles
void tri_bulles(int t[], int taille) {
    int temp;
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (t[j] > t[j + 1]) {
                // Échanger les éléments
                temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[TAILLE];

    // Initialisation de la graine aléatoire
    srand(time(NULL));

    // Remplissage du tableau avec des entiers aléatoires
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1100 - 100; // Valeurs entre -100 et 999
    }

    // Affichage du tableau non trié
    printf("Tableau non trié :\n");
    afficher_tableau(tableau, TAILLE);

    // Tri du tableau
    tri_bulles(tableau, TAILLE);

    // Affichage du tableau trié
    printf("\nTableau trié par ordre croissant :\n");
    afficher_tableau(tableau, TAILLE);

    return 0;
}
