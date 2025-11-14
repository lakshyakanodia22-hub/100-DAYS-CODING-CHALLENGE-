#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    // taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // if number is 0, its binary is 0
    if (num == 0) {
        printf("Binary: 0");
        return 0;
    }

    // converting to binary by dividing with 2
    while (num > 0) {
        binary[i] = num % 2;  // storing remainder (0 or 1)
        num = num / 2;        // reducing the number
        i++;
    }

    // printing binary in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}
