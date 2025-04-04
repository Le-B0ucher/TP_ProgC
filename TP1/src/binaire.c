#include <stdio.h>

void afficher_binaire(unsigned int n) {
    int i;
    int started = 0; // pour ne pas afficher les zéros de gauche inutiles

    for (i = sizeof(n) * 8 - 1; i >= 0; i--) {
        if (n & (1 << i)) {
            putchar('1');
            started = 1;
        } else if (started) {
            putchar('0');
        }
    }

    if (!started) {
        putchar('0'); // cas où n == 0
    }

    putchar('\n');
}

int main() {
    unsigned int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        printf("%u en binaire : ", valeurs[i]);
        afficher_binaire(valeurs[i]);
    }

    return 0;
}
