#include <stdio.h>

int main() {
    int nums[100], answer[100];
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Build prefix products
    int prefix = 1;
    for(i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix = prefix * nums[i];
    }

    // Step 2: Multiply with suffix products
    int suffix = 1;
    for(i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * suffix;
        suffix = suffix * nums[i];
    }

    // Print result
    printf("Product array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", answer[i]);
    }

    return 0;
}
