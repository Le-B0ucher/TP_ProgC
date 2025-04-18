#include <stdio.h>

int main() {

    char c = 'A';
    short s = 123;
    int i = 456;
    long li = 7890;
    long long lli = 123456789;

    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.61803;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pli = &li;
    long long *plli = &lli;

    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("=== Avant manipulation ===\n");
    printf("char        : Adresse = %p, Valeur = 0x%02X\n", (void*)pc, (unsigned char)*pc);
    printf("short       : Adresse = %p, Valeur = 0x%04X\n", (void*)ps, (unsigned short)*ps);
    printf("int         : Adresse = %p, Valeur = 0x%08X\n", (void*)pi, (unsigned int)*pi);
    printf("long        : Adresse = %p, Valeur = 0x%lX\n", (void*)pli, (unsigned long)*pli);
    printf("long long   : Adresse = %p, Valeur = 0x%llX\n", (void*)plli, (unsigned long long)*plli);

    printf("float       : Adresse = %p, Valeur = 0x%08X\n", (void*)pf, *(unsigned int*)pf);
    printf("double      : Adresse = %p, Valeur = 0x%016llX\n", (void*)pd, *(unsigned long long*)pd);
    printf("long double : Adresse = %p\n", (void*)pld); // Affichage hex dépend du compilateur pour long double

    *pc = 'B';
    *ps += 1;
    *pi -= 1;
    *pli *= 2;
    *plli += 1000;

    *pf = 1.0f;
    *pd = 3.14159;
    *pld = 2.718281828459;

    printf("\n=== Après manipulation ===\n");
    printf("char        : Adresse = %p, Valeur = 0x%02X\n", (void*)pc, (unsigned char)*pc);
    printf("short       : Adresse = %p, Valeur = 0x%04X\n", (void*)ps, (unsigned short)*ps);
    printf("int         : Adresse = %p, Valeur = 0x%08X\n", (void*)pi, (unsigned int)*pi);
    printf("long        : Adresse = %p, Valeur = 0x%lX\n", (void*)pli, (unsigned long)*pli);
    printf("long long   : Adresse = %p, Valeur = 0x%llX\n", (void*)plli, (unsigned long long)*plli);

    printf("float       : Adresse = %p, Valeur = 0x%08X\n", (void*)pf, *(unsigned int*)pf);
    printf("double      : Adresse = %p, Valeur = 0x%016llX\n", (void*)pd, *(unsigned long long*)pd);
    printf("long double : Adresse = %p\n", (void*)pld); // Affichage brut non garanti

    return 0;
}
