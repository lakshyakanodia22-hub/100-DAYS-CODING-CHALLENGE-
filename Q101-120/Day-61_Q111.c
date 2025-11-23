#include <stdio.h>

int main() {
    int n, k;
    int arr[200];
    int i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter window size k: ");
    scanf("%d", &k);

    // Sliding window: check each window of size k
    for(i = 0; i <= n - k; i++) {
        int found = 0;

        // Check all elements inside the current window
        for(j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        // If no negative found
        if(!found) {
            printf("0 ");
        }
    }

    return 0;
}
