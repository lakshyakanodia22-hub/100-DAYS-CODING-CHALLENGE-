#include <stdio.h>

int main() {
    int arr[100], n, x, i, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++) {
        if(arr[i] >= x) {
            index = i;   // first element >= x
            break;
        }
    }

    printf("Ceil index = %d\n", index);

    return 0;
}
