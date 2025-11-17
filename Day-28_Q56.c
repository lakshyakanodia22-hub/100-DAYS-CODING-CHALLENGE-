#include <stdio.h>

int main() {
    int arr[100], n, i;

    printf("Enter how many elements you want: ");
    scanf("%d", &n);

    // Reading array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing array elements
    printf("You entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
