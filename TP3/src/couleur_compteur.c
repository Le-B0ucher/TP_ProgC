#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100


typedef struct {
    unsigned char r, g, b, a;
} Couleur;


typedef struct {
    Couleur couleur;
    int compteur;
} CouleurUnique;


int comparer_couleurs(Couleur c1, Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}


void afficher_couleur(Couleur c) {
    printf("%02X %02X %02X %02X", c.r, c.g, c.b, c.a);
}

int main() {
    Couleur tableau[TAILLE];
    CouleurUnique uniques[TAILLE];
    int nb_uniques = 0;

    srand(time(NULL));

    for (int i = 0; i < TAILLE; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = rand() % 256;
    }


    for (int i = 0; i < TAILLE; i++) {
        int trouvé = 0;
        for (int j = 0; j < nb_uniques; j++) {
            if (comparer_couleurs(tableau[i], uniques[j].couleur)) {
                uniques[j].compteur++;
                trouvé = 1;
                break;
            }
        }
        if (!trouvé) {
            uniques[nb_uniques].couleur = tableau[i];
            uniques[nb_uniques].compteur = 1;
            nb_uniques++;
        }
    }

    printf("Couleurs distinctes et occurrences :\n");
    for (int i = 0; i < nb_uniques; i++) {
        afficher_couleur(uniques[i].couleur);
        printf(" : %d\n", uniques[i].compteur);
    }

    return 0;
}
