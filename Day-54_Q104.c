#include <stdio.h>

int main() {
    int n, x;
    long leftSum, rightSum;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Try every x from 1 to n
    for(x = 1; x <= n; x++) {

        leftSum = (long)x * (x + 1) / 2;          // sum from 1 to x
        rightSum = (long)(n * (n + 1) / 2)        // sum from 1 to n
                   - (long)((x - 1) * x / 2);     // subtract sum from 1 to x-1

        if(leftSum == rightSum) {
            printf("Pivot integer = %d\n", x);
            return 0;
        }
    }

    // no pivot found
    printf("-1\n");
    return 0;
}
