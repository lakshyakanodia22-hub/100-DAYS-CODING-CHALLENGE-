#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];
    int rowSum[r];   // array to store sum of each row

    // Read matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate row-wise sum
    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++) {
            sum += a[i][j];
        }
        rowSum[i] = sum;
    }

    // Print row sums
    printf("\nSum of each row:\n");
    for(i = 0; i < r; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
