#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], visited[n+1];

    // initialize visited array with 0
    for (int i = 0; i <= n; i++)
        visited[i] = 0;

    int repeated = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (visited[arr[i]] == 1) {   // already seen → repeated element
            repeated = arr[i];
        } else {
            visited[arr[i]] = 1;      // mark as seen
        }
    }

    printf("%d", repeated);

    return 0;
}
