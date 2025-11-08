// Program to find the area and circumference of a circle

#include <stdio.h>
#define PI 3.14

int main() {
    float radius, area, circumference;

    // asking user to enter radius
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // calculating area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // displaying results
    printf("\nArea of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f\n", circumference);

    return 0;
}
