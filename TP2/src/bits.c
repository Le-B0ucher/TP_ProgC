#include <stdio.h>

int main() {
    int d = 268439552;
    int pos4 = (d >> 28) & 1;
    int pos20 = (d >> 12) & 1;
    if (pos4 && pos20) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
