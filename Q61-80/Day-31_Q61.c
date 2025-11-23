#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Taking size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Reading array elements
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to search
    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
