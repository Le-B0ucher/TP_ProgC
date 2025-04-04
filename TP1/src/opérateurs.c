#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérateurs arithmétiques
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division entière : %d / %d = %d\n", a, b, a / b);
    printf("Modulo : %d %% %d = %d\n", a, b, a % b);

    // Opérateurs logiques (comparaisons)
    printf("a == b : %d\n", a == b);       // 0 = faux, 1 = vrai
    printf("a > b : %d\n", a > b);         // 1 attendu

    return 0;
}
