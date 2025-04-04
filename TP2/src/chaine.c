#include <stdio.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copie[100];
    char concat[200];

    // Longueur de str1
    int len = 0;
    while (str1[len] != '\0') {
        len++;
    }
    printf("Longueur de str1 : %d\n", len);

    // Copie de str1 dans copie
    int i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';
    printf("Copie : %s\n", copie);

    // Concaténation de str1 et str2 dans concat
    int j = 0;
    for (i = 0; str1[i] != '\0'; i++) {
        concat[j++] = str1[i];
    }
    for (i = 0; str2[i] != '\0'; i++) {
        concat[j++] = str2[i];
    }
    concat[j] = '\0';

    printf("Concaténation : %s\n", concat);

    return 0;
}
