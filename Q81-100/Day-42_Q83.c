#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count vowels and consonants
    while(str[i] != '\0') {
        char ch = str[i];

        // Check if alphabet
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {

            // Convert to lowercase
            char lower = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

            // Check vowel
            if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
