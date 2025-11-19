#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};   // for a–z
    int i;
    char ans = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        // only check lowercase alphabets
        if(c >= 'a' && c <= 'z') {
            freq[c - 'a']++;

            if(freq[c - 'a'] == 2) {
                ans = c;
                break;
            }
        }
    }

    if(ans != '\0')
        printf("First repeating lowercase alphabet: %c\n", ans);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}
