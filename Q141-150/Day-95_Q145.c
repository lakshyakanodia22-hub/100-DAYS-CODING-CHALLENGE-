#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex]; // returning the structure
}

int main() {
    int i;
    struct Student s[5];

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student top = getTopStudent(s, 5);

    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", top.name);
    printf("Roll No: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
