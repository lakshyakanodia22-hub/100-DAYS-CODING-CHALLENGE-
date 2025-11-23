#include <stdio.h>

int main() {
    int arr[100], n, i;
    int totalSum = 0, leftSum = 0, pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        totalSum += arr[i];    // find total sum of array
    }

    for(i = 0; i < n; i++) {

        // right sum = total - leftSum - current element
        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum) {
            pivot = i;   // store leftmost pivot index
            break;
        }

        leftSum += arr[i];  // update left sum for next index
    }

    printf("Pivot index = %d\n", pivot);

    return 0;
}
