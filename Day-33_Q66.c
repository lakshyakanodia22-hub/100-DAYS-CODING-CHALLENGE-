#include <stdio.h>

int main() {
    int n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];   // one extra space for the new element

    printf("Enter elements in sorted order:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &x);

    // Find the correct position
    int pos = n;   // assume element goes at the end
    for(i = 0; i < n; i++) {
        if(x < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = x;

    // Print updated array
    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
