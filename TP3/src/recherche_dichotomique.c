#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100


void afficher_tableau(int t[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("%d ", t[i]);
        if ((i + 1) % 10 == 0) printf("\n"); // 10 par ligne
    }
}

void tri_bulles(int t[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (t[j] > t[j + 1]) {
                int temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }
}

// Fonction de recherche dichotomique
int recherche_dichotomique(int t[], int taille, int valeur) {
    int debut = 0;
    int fin = taille - 1;
    while (debut <= fin) {
        int milieu = (debut + fin) / 2;
        if (t[milieu] == valeur) {
            return 1; // trouvé
        } else if (valeur < t[milieu]) {
            fin = milieu - 1;
        } else {
            debut = milieu + 1;
        }
    }
    return 0; // non trouvé
}

int main() {
    int tableau[TAILLE];
    int valeur;


    srand(time(NULL));


    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 1000 + 1;
    }


    tri_bulles(tableau, TAILLE);

   
    printf("Tableau trié :\n");
    afficher_tableau(tableau, TAILLE);

  
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche
    if (recherche_dichotomique(tableau, TAILLE, valeur)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
