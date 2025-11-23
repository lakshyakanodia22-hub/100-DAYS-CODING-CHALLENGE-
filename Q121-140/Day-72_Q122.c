#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");   // open file in read mode

    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    // Read each line until EOF
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
