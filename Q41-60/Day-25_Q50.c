#include <stdio.h>

int main() {
    int i, j, spaces, stars;

    for(i = 5; i >= 1; i--) {
        // Print leading spaces
        for(spaces = 5 - i; spaces > 0; spaces--) {
            printf(" ");
        }

        // Print stars
        for(stars = i; stars > 0; stars--) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
