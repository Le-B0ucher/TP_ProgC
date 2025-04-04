#include <stdio.h>

int main() {
    int num1 =8;
    int num2 =3;
    char op = '+';

    switch(op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Erreur : division par zéro.\n");
            }
            break;
        case '%':
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("~%d = %d\n", num1, ~num1);
            break;
        default:
            printf("Opérateur non valide.\n");
            break;
    }

    return 0;
}
