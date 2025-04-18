#include <stdio.h>

void print_bytes(void *ptr, size_t size) {
    unsigned char *p = (unsigned char *)ptr;
    for (size_t i = 0; i < size; i++)
        printf("%02x", p[size - i - 1]);
    printf("\n");
}

int main() {
    char c = 'A';
    short s = 0x1234;
    int i = 0xA47865FF;
    long l = 0xABCDEF12;
    long long ll = 0x123456789ABCDEF0;
    float f = 2.0f;
    double d = 3.14159;
    long double ld = 2.718281828459;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("== Avant ==\n");
    printf("c  %p : ", (void *)pc); print_bytes(pc, sizeof(c));
    printf("s  %p : ", (void *)ps); print_bytes(ps, sizeof(s));
    printf("i  %p : ", (void *)pi); print_bytes(pi, sizeof(i));
    printf("l  %p : ", (void *)pl); print_bytes(pl, sizeof(l));
    printf("ll %p : ", (void *)pll); print_bytes(pll, sizeof(ll));
    printf("f  %p : ", (void *)pf); print_bytes(pf, sizeof(f));
    printf("d  %p : ", (void *)pd); print_bytes(pd, sizeof(d));
    printf("ld %p : ", (void *)pld); print_bytes(pld, sizeof(ld));

    *pc  = 'Z';
    *ps  = 0x4321;
    *pi  = 0xDEADBEEF;
    *pl  = 0xCAFEBABE;
    *pll = 0x0FEDCBA987654321;
    *pf  = 3.14f;
    *pd  = 2.71828;
    *pld = 1.6180339887L;

    printf("\n== Après ==\n");
    printf("c  %p : ", (void *)pc); print_bytes(pc, sizeof(c));
    printf("s  %p : ", (void *)ps); print_bytes(ps, sizeof(s));
    printf("i  %p : ", (void *)pi); print_bytes(pi, sizeof(i));
    printf("l  %p : ", (void *)pl); print_bytes(pl, sizeof(l));
    printf("ll %p : ", (void *)pll); print_bytes(pll, sizeof(ll));
    printf("f  %p : ", (void *)pf); print_bytes(pf, sizeof(f));
    printf("d  %p : ", (void *)pd); print_bytes(pd, sizeof(d));
    printf("ld %p : ", (void *)pld); print_bytes(pld, sizeof(ld));

    return 0;
}
