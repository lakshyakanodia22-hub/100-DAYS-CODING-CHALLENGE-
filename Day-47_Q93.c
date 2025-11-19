#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int freq1[26] = {0}, freq2[26] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of characters in str1
    for(i = 0; str1[i] != '\0'; i++) {
        char c = str1[i];

        if(c >= 'A' && c <= 'Z')  c = c + 32;   // convert to lowercase
        if(c >= 'a' && c <= 'z')  freq1[c - 'a']++;
    }

    // Count frequency of characters in str2
    for(i = 0; str2[i] != '\0'; i++) {
        char c = str2[i];

        if(c >= 'A' && c <= 'Z')  c = c + 32;
        if(c >= 'a' && c <= 'z')  freq2[c - 'a']++;
    }

    // Compare both frequency arrays
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings ARE anagrams.\n");

    return 0;
}
