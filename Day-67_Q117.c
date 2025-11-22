#include <stdio.h>

int main() {
    int m, n;
    int a[200], b[200], c[400];
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter %d sorted elements: ", m);
    for(i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    i = j = k = 0;

    // Merge both arrays
    while(i < m && j < n) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    // Copy remaining elements of a[]
    while(i < m)
        c[k++] = a[i++];

    // Copy remaining elements of b[]
    while(j < n)
        c[k++] = b[j++];

    // Print merged array
    printf("Merged Sorted Array: ");
    for(i = 0; i < m + n; i++)
        printf("%d ", c[i]);

    printf("\n");

    return 0;
}
