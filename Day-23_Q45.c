#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    int num = 2;   // numerator starts at 2
    int den = 3;   // denominator starts at 3

    for (i = 1; i <= n; i++) {
        sum += (float)num / den;

        num += 2;      // numerators: 2,4,6,8,...
        den += 4;      // denominators: 3,7,11,15,... (increase by 4)
    }

    printf("Sum of the series = %.4f\n", sum);

    return 0;
}
