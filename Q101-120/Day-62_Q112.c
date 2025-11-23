#include <stdio.h>

int main() {
    int n, i;
    int arr[200];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0];   // stores best answer
    int currSum = arr[0];  // running sum

    for(i = 1; i < n; i++) {
        // Either extend the current subarray or start new from arr[i]
        if(currSum + arr[i] > arr[i])
            currSum = currSum + arr[i];
        else
            currSum = arr[i];

        // Update global maximum
        if(currSum > maxSum)
            maxSum = currSum;
    }

    printf("Maximum Subarray Sum: %d\n", maxSum);

    return 0;
}
