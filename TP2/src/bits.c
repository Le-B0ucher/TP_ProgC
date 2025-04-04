#include <stdio.h>

// Fonction pour afficher un entier en binaire (sur 8 bits minimum, jusqu'à 32)
void afficher_binaire(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        putchar((n & (1 << i)) ? '1' : '0');
        if (i % 4 == 0) putchar(' '); // pour aérer l'affichage
    }
}

int main() {
    unsigned int a = 5;   // 0101
    unsigned int b = 3;   // 0011

    printf("a       = %u\t", a);
    afficher_binaire(a); printf("\n");

    printf("b       = %u\t", b);
    afficher_binaire(b); printf("\n");

    printf("a & b   = %u\t", a & b);
    afficher_binaire(a & b); printf("\n");

    printf("a | b   = %u\t", a | b);
    afficher_binaire(a | b); printf("\n");

    printf("a ^ b   = %u\t", a ^ b);
    afficher_binaire(a ^ b); printf("\n");

    printf("~a      = %u\t", ~a);
    afficher_binaire(~a); printf("\n");

    printf("a << 1  = %u\t", a << 1);
    afficher_binaire(a << 1); printf("\n");

    printf("a >> 1  = %u\t", a >> 1);
    afficher_binaire(a >> 1); printf("\n");

    return 0;
}
