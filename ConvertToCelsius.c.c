#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    float f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = convertToCelsius(f);
    printf("Temperature in Celsius: %.2f°C\n", c);

    return 0;
}
