#include <stdio.h>

int main() {
    char str[300], longest[300];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        }
        else {
            if (currLen > maxLen) {
                maxLen = currLen;

                // copy current longest word
                int k;
                for (k = 0; k < currLen; k++)
                    longest[k] = str[start + k];
                longest[currLen] = '\0';
            }
            currLen = 0;
            start = i + 1;
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
