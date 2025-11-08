// Program to swap two numbers without using a third variable

#include <stdio.h>

int main() {
    int a, b;

    // taking input from user
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // displaying before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // swapping process
    a = a + b;
    b = a - b;
    a = a - b;

    // displaying after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
