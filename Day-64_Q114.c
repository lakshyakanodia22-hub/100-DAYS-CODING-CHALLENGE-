#include <stdio.h>

int main() {
    char s[300];
    int lastIndex[256];
    int i, start = 0, maxLen = 0;

    // Initialize all indexes to -1
    for(i = 0; i < 256; i++)
        lastIndex[i] = -1;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    for(i = 0; s[i] != '\0' && s[i] != '\n'; i++) {

        // If character already seen and inside current window
        if(lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        // Update last seen index
        lastIndex[(unsigned char)s[i]] = i;

        // Calculate max window length
        int currLen = i - start + 1;
        if(currLen > maxLen)
            maxLen = currLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
