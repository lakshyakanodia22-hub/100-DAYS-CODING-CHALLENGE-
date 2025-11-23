#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");   // change filename if needed

    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        // Convert uppercase → lowercase to simplify comparisons
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || 
            ch == 'o' || ch == 'u') {
            vowels++;
        }
        // Check consonants (alphabet but not vowel)
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
        // Ignore digits, spaces, symbols
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

