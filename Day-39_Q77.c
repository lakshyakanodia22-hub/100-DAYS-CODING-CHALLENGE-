#include <stdio.h>

int main() {
    int n, i, j;

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

    // Check if diagonal elements are distinct
    int distinct = 1;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    if(distinct)
        printf("All diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are NOT distinct.\n");

    return 0;
}
