#include <stdio.h>

int main() {
    int year;

    // Asking the user to enter a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if the year is a leap year or not
    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
