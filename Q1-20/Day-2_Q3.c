// Program to calculate area and perimeter of a rectangle

#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // taking input from user
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of rectangle: ");
    scanf("%f", &breadth);

    // calculating area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // displaying results
    printf("\nArea of rectangle = %.2f\n", area);
    printf("Perimeter of rectangle = %.2f\n", perimeter);

    return 0;
}
