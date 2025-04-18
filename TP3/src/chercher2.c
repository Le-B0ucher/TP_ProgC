#include <stdio.h>

#define NB_PHRASES 10
#define TAILLE_MAX 256

// Fonction de comparaison manuelle entre deux chaînes
int comparer_phrases(const char *a, const char *b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return 0; // différent
        }
        i++;
    }
    // Si les deux chaînes se terminent en même temps, elles sont égales
    return (a[i] == '\0' && b[i] == '\0');
}

int main() {
    // Tableau de 10 phrases
    char *phrases[NB_PHRASES] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char recherche[TAILLE_MAX];
    int trouvée = 0;

    // Demander la phrase à chercher
    printf("Entrez la phrase que vous souhaitez chercher :\n");
    fgets(recherche, TAILLE_MAX, stdin);

    // Supprimer le saut de ligne éventuel
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    // Recherche de la phrase dans le tableau
    for (int j = 0; j < NB_PHRASES; j++) {
        if (comparer_phrases(recherche, phrases[j])) {
            trouvée = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouvée) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}
