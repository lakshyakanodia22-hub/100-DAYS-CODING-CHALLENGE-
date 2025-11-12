#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;  // long long used for large results

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative numbers
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else {
        // Calculate factorial
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d = %lld\n", n, fact);
    }

    return 0;
}
