#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length manually
    for(i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // last character will be '\n' if entered, so adjust
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }

    return 0;
}
