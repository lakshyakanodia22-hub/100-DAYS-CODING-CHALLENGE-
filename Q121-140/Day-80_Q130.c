#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, n;
    float marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("How many students? ");
    scanf("%d", &n);

    // Write records to file
    for (int i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    printf("\nRecords saved to students.txt\n\n");

    // Read and display records
    fp = fopen("students.txt", "r");

    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("--- Student Records ---\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);

    return 0;
}
