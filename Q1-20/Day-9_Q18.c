#include <stdio.h>

int main() {
    int marks;

    // Input percentage
    printf("Enter your percentage (0-100): ");
    scanf("%d", &marks);

    // Check and assign grade
    if (marks >= 90 && marks <= 100)
        printf("Grade A\n");
    else if (marks >= 80)
        printf("Grade B\n");
    else if (marks >= 70)
        printf("Grade C\n");
    else if (marks >= 60)
        printf("Grade D\n");
    else if (marks >= 0)
        printf("Grade F\n");
    else
        printf("Invalid percentage!\n");

    return 0;
}
