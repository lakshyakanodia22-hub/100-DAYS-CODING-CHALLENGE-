#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], temp[400];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if any
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // If lengths differ, cannot be rotation
    if (strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    // Build temp = str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is inside temp
    if (strstr(temp, str2) != NULL)
        printf("Yes, it IS a rotation.\n");
    else
        printf("No, it's NOT a rotation.\n");

    return 0;
}
