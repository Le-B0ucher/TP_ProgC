#include <stdio.h>

int main() {
    int n = 7;
    int a = 0, b = 1, temp;
    printf("%d %d ", a, b);
    for(int i = 2; i < n; i++) {
        temp = a+b;
        printf("%d ", temp);
        a=b ;
        b = temp;     
    }


    return 0;
}
