#include <stdio.h>

int main() {
    char str[200], result[200];
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        // Check if it's NOT a vowel
        if(!(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
             c=='A' || c=='E' || c=='I' || c=='O' || c=='U')) 
        {
            result[j] = c;
            j++;
        }
    }

    result[j] = '\0';

    printf("String after removing vowels: %s", result);

    return 0;
}
