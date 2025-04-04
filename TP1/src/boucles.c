#include <stdio.h>

int main() {
    int j = 5;

    for (int i = 0; i < j; i++) {
        for (int k = 0; k <= i; k++) {
            if (k == 0 || k == i || i == j - 1) { 
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}
