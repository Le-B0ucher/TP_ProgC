#include <stdio.h>

int main() {
    char a[100], b[100], c[200];

    printf("Chaîne 1 : ");
    fgets(a, sizeof(a), stdin);

    printf("Chaîne 2 : ");
    fgets(b, sizeof(b), stdin);

    // Supprimer \n
    int i = 0;
    while (a[i] != '\0') {
        if (a[i] == '\n') a[i] = '\0';
        i++;
    }
    i = 0;
    while (b[i] != '\0') {
        if (b[i] == '\n') b[i] = '\0';
        i++;
    }

    // Longueur
    int len = 0;
    while (a[len] != '\0') len++;
    printf("Longueur : %d\n", len);

    // Copie
    i = 0;
    while ((c[i] = a[i]) != '\0') i++;
    printf("Copie : %s\n", c);

    // Concaténation
    int j = 0;
    while (b[j] != '\0') {
        c[i++] = b[j++];
    }
    c[i] = '\0';
    printf("Concaténation : %s\n", c);

    return 0;
}
