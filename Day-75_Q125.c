#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();  // clear newline left by scanf

    fp = fopen(filename, "a");   // open in append mode

    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("Text appended successfully.\n");

    return 0;
}

