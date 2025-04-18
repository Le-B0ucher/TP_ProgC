#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100


void afficher_tableau(int t[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", t[i]);
        if ((i + 1) % 10 == 0) printf("\n"); // 10 nombres par ligne
    }
}

int main() {
    int tableau[TAILLE];
    int valeur, trouve = 0;


    srand(time(NULL));

    // Remplir le tableau avec des entiers aléatoires entre 1 et 100
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 100 + 1;
    }


    printf("Tableau :\n");
    afficher_tableau(tableau, TAILLE);

  
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);


    for (int i = 0; i < TAILLE; i++) {
        if (tableau[i] == valeur) {
            trouve = 1;
            break;
        }
    }

    // Résultat
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
