#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    int currentSum = 0, maxSum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // If k is larger than array size
    if(k > n) {
        printf("Invalid: k is larger than array size.\n");
        return 0;
    }

    // Step 1: Sum of first window
    for(i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    // Step 2: Slide the window
    for(i = k; i < n; i++) {
        currentSum = currentSum - arr[i - k] + arr[i];  // remove leftmost, add new element
        if(currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of any subarray of size %d = %d\n", k, maxSum);

    return 0;
}
