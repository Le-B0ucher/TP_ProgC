#include <stdio.h>
#include <stdlib.h>

int main() {
    char *a = NULL, *b = NULL, *c = NULL;
    size_t size = 0;

    // Lire chaîne a
    printf("Chaîne 1 : ");
    getline(&a, &size, stdin);

    // Lire chaîne b
    printf("Chaîne 2 : ");
    size = 0;
    getline(&b, &size, stdin);

    // Nettoyer les '\n'
    for (int i = 0; a[i]; i++) if (a[i] == '\n') a[i] = '\0';
    for (int i = 0; b[i]; i++) if (b[i] == '\n') b[i] = '\0';

    // Calcul de la longueur de a
    int len = 0;
    while (a[len]) len++;
    printf("Longueur : %d\n", len);

    // Copie dans c
    int i = 0;
    c = malloc(len + 1);
    while ((c[i] = a[i])) i++;
    printf("Copie : %s\n", c);

    // Concaténation
    int j = 0;
    while (b[j]) j++;
    c = realloc(c, len + j + 1);
    for (int k = 0; k <= j; k++) {
        c[len + k] = b[k];
    }

    printf("Concaténation : %s\n", c);

    // Libération mémoire
    free(a);
    free(b);
    free(c);

    return 0;
}
