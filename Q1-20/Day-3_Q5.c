// Program to convert temperature from Celsius to Fahrenheit

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // taking input from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // formula to convert Celsius into Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // displaying the result
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
