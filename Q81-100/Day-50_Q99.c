#include <stdio.h>

int main() {
    char date[20];
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    // Array of month names
    char *month[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if(mm < 1 || mm > 12) {
        printf("Invalid month!\n");
        return 0;
    }

    printf("%02d-%s-%d\n", dd, month[mm - 1], yyyy);

    return 0;
}
