#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

    // Read size of first matrix
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Read size of second matrix
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if(c1 != r2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], mul[r1][c2];

    // Read first matrix
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read second matrix
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix with 0
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            mul[i][j] = 0;
        }
    }

    // Matrix multiplication
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            for(k = 0; k < c1; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    printf("\nResultant Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
