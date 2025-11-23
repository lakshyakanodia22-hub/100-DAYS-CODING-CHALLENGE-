#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", &p.gender);

    printf("\nName: %s\n", p.name);
    printf("Gender: ");

    if(p.gender == MALE)
        printf("Male\n");
    else if(p.gender == FEMALE)
        printf("Female\n");
    else
        printf("Other\n");

    return 0;
}
