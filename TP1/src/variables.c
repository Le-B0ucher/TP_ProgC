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

    // Affichage
    printf("char : %c\n", c);
    printf("short : %d\n", s);
    printf("int : %d\n", i);
    printf("long : %ld\n", li);
    printf("long long : %lld\n", lli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
