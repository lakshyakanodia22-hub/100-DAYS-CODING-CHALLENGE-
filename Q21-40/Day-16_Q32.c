#include <stdio.h>

int main() {
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  // store original number

    // reverse the number
    while (temp > 0) {
        rem = temp % 10;          // get last digit
        rev = rev * 10 + rem;     // add digit to reverse number
        temp = temp / 10;         // remove last digit
    }

    // check palindrome
    if (rev == num)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);

    return 0;
}
