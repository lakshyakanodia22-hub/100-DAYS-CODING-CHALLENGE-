#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char line[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");   // try opening in read mode

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    printf("\n--- File Content ---\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
