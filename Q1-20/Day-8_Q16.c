#include <stdio.h>

int main() {
    int a, b, c;

    // Asking the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Checking which number is the largest
    if (a >= b && a >= c) {
        printf("%d is the largest number.\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d is the largest number.\n", b);
    }
    else {
        printf("%d is the largest number.\n", c);
    }

    return 0;
}
