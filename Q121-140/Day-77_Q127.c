#include <stdio.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Unable to open input.txt\n");
        return 1;
    }

    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Unable to create output.txt\n");
        fclose(in);
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;   // convert to uppercase

        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed. Output written to output.txt\n");

    return 0;
}
