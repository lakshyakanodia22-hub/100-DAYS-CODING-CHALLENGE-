#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Count digits
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = num;

    // Calculate sum of digits raised to 'count'
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    // Check Armstrong
    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
