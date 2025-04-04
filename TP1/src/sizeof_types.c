#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Celsius vers Fahrenheit
    printf("Entrez la température en Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);

    // Fahrenheit vers Celsius
    printf("\nEntrez la température en Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("%.2f °F = %.2f °C\n", fahrenheit, celsius);

    return 0;
}
