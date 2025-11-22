#include <stdio.h>

int main() {
    char s[200], t[200];
    int freq[26] = {0};   // for 'a' to 'z'
    int i;

    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);

    // Count characters of s
    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        freq[s[i] - 'a']++;
    }

    // Subtract characters of t
    for(i = 0; t[i] != '\0' && t[i] != '\n'; i++) {
        freq[t[i] - 'a']--;
    }

    // If all zeros → anagram
    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
