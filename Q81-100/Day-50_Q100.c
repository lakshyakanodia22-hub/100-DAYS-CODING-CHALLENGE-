#include <stdio.h>

int main() {
    char str[200];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    // Print all substrings
    for(i = 0; str[i] != '\0'; i++) {
        for(j = i; str[j] != '\0'; j++) {

            // Print substring from i to j
            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
