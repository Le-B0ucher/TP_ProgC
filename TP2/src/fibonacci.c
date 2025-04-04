#include <stdio.h>

int main() {
    unsigned int a = 5;   // 0101
    unsigned int b = 3;   // 0011

    printf("a       = %u\n", a);
    printf("b       = %u\n", b);

    printf("a & b   = %u\n", a & b);
    printf("a | b   = %u\n", a | b);
    printf("a ^ b   = %u\n", a ^ b);
    printf("~a      = %u\n", ~a);
    printf("a << 1  = %u\n", a << 1);
    printf("a >> 1  = %u\n", a >> 1);

    return 0;
}
