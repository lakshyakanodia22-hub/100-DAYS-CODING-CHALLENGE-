#include <stdio.h>

int main() {
    int row, space, num;

    // There are 5 lines in the pattern
    for (row = 1; row <= 5; row++) {

        // Print the leading spaces
        for (space = 1; space <= 5 - row; space++) {
            printf(" ");
        }

        // Print the numbers in each row
        num = 6 - row;   // Starting number changes each row
        for (; num <= 5; num++) {
            printf("%d", num);
        }

        printf("\n");
    }

    return 0;
}
