#include <stdio.h>

int main() {
    char str[100];
    int i, start, end;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // find length manually
    for(i = 0; str[i] != '\0'; i++);

    // remove newline if present
    if(str[i-1] == '\n') {
        str[i-1] = '\0';
        i--;
    }

    start = 0;
    end = i - 1;

    // check palindrome
    while(start < end) {
        if(str[start] != str[end]) {
            printf("Not a palindrome.\n");
            return 0;
        }
        start++;
        end--;
    }

    printf("It is a palindrome.\n");
    return 0;
}
