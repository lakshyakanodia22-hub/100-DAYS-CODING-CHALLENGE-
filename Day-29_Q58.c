#include <stdio.h>

int main() {
    int arr[100], n, i, max, min;

    printf("Enter how many elements you want: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // assume first element is both max and min
    max = min = arr[0];

    // check remaining elements
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
