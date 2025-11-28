#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s1;       // normal structure variable
    struct Student *ptr;     // pointer to structure

    ptr = &s1;               // store address of s1 in pointer

    // Modify data using -> operator
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display data using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}
