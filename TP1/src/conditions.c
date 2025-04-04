#include <stdio.h>

int main() {
    int entier = 10;
    float reel = 3.5f;
    double precis = 2.718;

    // Opérations mixtes
    float res1 = entier + reel;           // int + float
    double res2 = reel + precis;          // float + double
    double res3 = (double)entier / 3;     // cast pour forcer la division flottante

    // Affichage
    printf("int + float = %.2f\n", res1);
    printf("float + double = %.3f\n", res2);
    printf("(double)int / 3 = %.3f\n", res3);

    return 0;
}
