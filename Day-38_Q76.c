#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];

    // Read matrix
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is NOT symmetric.\n");

    return 0;
}
