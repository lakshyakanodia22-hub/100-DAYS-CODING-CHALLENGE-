#include <stdio.h>

int main() {
    int i, space, star;

    // Upper pyramid (1 to 4 rows)
    for(i = 1; i <= 4; i++) {

        // print spaces
        for(space = 1; space <= 4 - i; space++) {
            printf(" ");
        }

        // print stars
        for(star = 1; star <= 2*i - 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower inverted pyramid (3 to 1 rows)
    for(i = 3; i >= 1; i--) {

        // print spaces
        for(space = 1; space <= 4 - i; space++) {
            printf(" ");
        }

        // print stars
        for(star = 1; star <= 2*i - 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
