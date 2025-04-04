#include <stdio.h>

int main() {
    int compteur = 5;

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1 || i == compteur || j == 1 || j == i)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }
    return 0;
  
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i == 1 || i == compteur || j == 1 || j == i)
                printf("* ");
            else
                printf("# ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}

  
}
