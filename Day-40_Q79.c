#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    // Read the matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");

    // Print diagonals starting from first row
    for(int k = 0; k < c; k++) {
        i = 0;
        j = k;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Print diagonals starting from last column going down
    for(int k = 1; k < r; k++) {
        i = k;
        j = c - 1;
        while(i < r && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
