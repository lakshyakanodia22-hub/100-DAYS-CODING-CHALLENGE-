#include <stdio.h>

int main() {
    char str[200];
    
    fgets(str, sizeof(str), stdin);

    // Convert entire string to lowercase first
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    // Capitalize first non-space character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
            break;
        }
    }

    printf("%s", str);
    return 0;
}
