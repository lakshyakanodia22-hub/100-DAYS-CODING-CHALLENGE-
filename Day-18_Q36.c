#include <stdio.h>

int main() {
    int a, b, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find the smaller number
    int min = (a < b) ? a : b;

    // Check all numbers from 1 to min
    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;   // store the greatest common divisor
        }
    }

    printf("HCF (GCD) of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
