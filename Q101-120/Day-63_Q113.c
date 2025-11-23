#include <stdio.h>

int main() {
    int arr[200], n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    // Simple sorting (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // kth smallest is at index k-1
    if(k >= 1 && k <= n)
        printf("The %dth smallest element is: %d\n", k, arr[k - 1]);
    else
        printf("Invalid k\n");

    return 0;
}
