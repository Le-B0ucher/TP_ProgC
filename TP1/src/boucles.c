#include <stdio.h>

int main() {
    int compteur = 5;

    if (compteur >= 10) {
        printf("Le compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i >= 3 && j > 1 && j < i) {
                printf("# ");
            } else {
                printf("* ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
