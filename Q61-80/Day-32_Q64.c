#include <stdio.h>

int main() {
    int num, digit;
    int freq[10] = {0};   // To store frequency of digits 0–9

    printf("Enter any integer: ");
    scanf("%d", &num);

    // If number is negative, make it positive
    if(num < 0) {
        num = -num;
    }

    // Count digit frequencies
    while(num > 0) {
        digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }

    // Find the digit with maximum frequency
    int maxDigit = 0, maxFreq = freq[0];
    for(int i = 1; i < 10; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", maxDigit);
    printf("It occurs %d times.\n", maxFreq);

    return 0;
}
