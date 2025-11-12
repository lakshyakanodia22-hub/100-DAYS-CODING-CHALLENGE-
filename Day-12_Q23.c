#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    // Input number of late days
    printf("Enter the number of days the book is returned late: ");
    scanf("%d", &days);

    // Calculate fine based on late days
    if (days <= 5)
        fine = days * 2;
    else if (days <= 10)
        fine = (5 * 2) + ((days - 5) * 4);
    else if (days <= 30)
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
    else
        printf("Membership Cancelled.\n");

    // Display fine if membership is not cancelled
    if (days <= 30)
        printf("Total fine = ₹%d\n", fine);

    return 0;
}
