#include <stdio.h>

int main() {
    int n1, n2, i;

    // Size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Merged array size = n1 + n2
    int m[n1 + n2];

    // Copy first array
    for(i = 0; i < n1; i++) {
        m[i] = a[i];
    }

    // Copy second array
    for(i = 0; i < n2; i++) {
        m[n1 + i] = b[i];
    }

    // Print merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", m[i]);
    }

    return 0;
}
