#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        digit = num % 10;           // Get the last digit
        reversed = reversed * 10 + digit;  // Add it to reversed number
        num = num / 10;             // Remove the last digit
    }

    // Display the result
    printf("Reversed number = %d\n", reversed);

    return 0;
}
