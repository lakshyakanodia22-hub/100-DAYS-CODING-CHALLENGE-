#include <stdio.h>

int main() {
    char name[200];
    int i = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    // Print first character if it's a letter
    if((name[0] >= 'A' && name[0] <= 'Z') || 
       (name[0] >= 'a' && name[0] <= 'z')) {
        printf("%c", name[0]);
    }

    // Look for spaces, then print next letter
    while(name[i] != '\n' && name[i] != '\0') {
        if(name[i] == ' ') {
            char next = name[i + 1];
            if((next >= 'A' && next <= 'Z') ||
               (next >= 'a' && next <= 'z')) {
                printf(" %c", next);
            }
        }
        i++;
    }

    printf("\n");

    return 0;
}
