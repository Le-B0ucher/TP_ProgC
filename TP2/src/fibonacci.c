#include <stdio.h>

int main() {
    int n = 7; // nombre de termes à générer
    int u0 = 0, u1 = 1;

    printf("Suite de Fibonacci jusqu'à U%d : ", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", u0);
        int suivant = u0 + u1;
        u0 = u1;
        u1 = suivant;
    }

    printf("\n");
    return 0;
}
