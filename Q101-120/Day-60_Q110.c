#include <stdio.h>

int main() {
    int n, k;

    // Input array size
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input window size k
    scanf("%d", &k);

    // Sliding window: find max in each subarray of size k
    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Check next k elements
        for(int j = i; j < i + k; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }
        }

        printf("%d ", max);
    }

    return 0;
}
