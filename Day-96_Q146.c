#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joinDate;   // nested structure
};

int main() {
    struct Employee e;

    printf("Enter Employee Details:\n");

    printf("ID: ");
    scanf("%d", &e.id);

    printf("Name: ");
    scanf("%s", e.name);

    printf("Salary: ");
    scanf("%f", &e.salary);

    printf("Joining Date (dd mm yyyy): ");
    scanf("%d %d %d", &e.joinDate.day, &e.joinDate.month, &e.joinDate.year);

    printf("\n--- Employee Information ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joinDate.day, e.joinDate.month, e.joinDate.year);

    return 0;
}
