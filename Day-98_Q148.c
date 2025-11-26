#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;

    // Input for 1st structure
    printf("Enter roll and marks for Student 1: ");
    scanf("%d %f", &s1.roll, &s1.marks);

    // Input for 2nd structure
    printf("Enter roll and marks for Student 2: ");
    scanf("%d %f", &s2.roll, &s2.marks);

    // Check if identical
    if (s1.roll == s2.roll && s1.marks == s2.marks) {
        printf("Both structures are IDENTICAL\n");
    } else {
        printf("Structures are NOT identical\n");
    }

    return 0;
}
