#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {

    struct Employee empWrite, empRead;
    FILE *file;

    // Taking employee details from the user
    printf("Enter Employee Details\n");

    printf("ID: ");
    scanf("%d", &empWrite.id);

    printf("Name: ");
    scanf("%s", empWrite.name);

    printf("Salary: ");
    scanf("%f", &empWrite.salary);

    // --- Writing the data into a binary file ---
    file = fopen("employee.dat", "wb");
    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    fwrite(&empWrite, sizeof(struct Employee), 1, file);
    fclose(file);

    // --- Reading the data back from the binary file ---
    file = fopen("employee.dat", "rb");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    fread(&empRead, sizeof(struct Employee), 1, file);
    fclose(file);

    // Displaying the data read from the file
    printf("\n--- Employee Details From File ---\n");
    printf("ID: %d\n", empRead.id);
    printf("Name: %s\n", empRead.name);
    printf("Salary: %.2f\n", empRead.salary);

    return 0;
}

