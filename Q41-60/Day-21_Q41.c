#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0, power = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;        // Get last digit

    // Find first digit and count total digits
    while (temp >= 10) {
        temp /= 10;
        digits++;
        power *= 10;         // 10^(digits)
    }
    first = temp;            // First digit

    // Remove first and last digits from middle part
    int middle = num % power;     // remove first digit
    middle /= 10;                // remove last digit

    // Construct new number: last + middle + first
    int swapped = last * power + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
