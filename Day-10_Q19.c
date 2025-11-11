#include <stdio.h>

int main() {
    int a, b, c;

    // Input sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check the type of triangle
    if (a == b && b == c)
        printf("The triangle is Equilateral.\n");
    else if (a == b || b == c || a == c)
        printf("The triangle is Isosceles.\n");
    else
        printf("The triangle is Scalene.\n");

    return 0;
}
