#include <stdio.h>

int main() {
    int nombres[] = {1, 2, 3, 4, 5};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Le nombre %d en binaire est : ", nombres[i]);

        for (int j = 4; j >= 0; j--) {
            int bit = (nombres[i] >> j) & 1;
            printf("%d", bit);
            if (j % 4 == 0) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
