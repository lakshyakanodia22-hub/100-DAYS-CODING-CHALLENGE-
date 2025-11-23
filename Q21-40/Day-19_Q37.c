#include <stdio.h>

int main() {
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Start from the bigger number
    int max = (a > b) ? a : b;

    // Find the first number divisible by both
    for (i = max; ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }

    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
