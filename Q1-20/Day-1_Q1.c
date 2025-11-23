#include <stdio.h>

int main() {
    int a, b, sum;

    // Asking user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Adding the two numbers
    sum = a + b;

    // Displaying the result
    printf("Sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}
