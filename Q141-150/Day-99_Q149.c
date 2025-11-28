#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person *p;

    p = (struct Person *)malloc(sizeof(struct Person));

    if(p == NULL) {
        printf("Memory not allocated\n");
        return 0;
    }

    printf("Enter name: ");
    scanf("%s", p->name);

    printf("Enter age: ");
    scanf("%d", &p->age);

    printf("\nDetails:\n");
    printf("Name: %s\n", p->name);
    printf("Age: %d\n", p->age);

    free(p);

    return 0;
}
