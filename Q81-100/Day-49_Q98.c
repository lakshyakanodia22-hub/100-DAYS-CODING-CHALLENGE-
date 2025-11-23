#include <stdio.h>

int main() {
    char name[200];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Print initial of the first name
    if(name[0] != ' ')
        printf("%c ", name[0]);

    // Print initials of middle names until last word begins
    while(name[i] != '\0' && name[i] != '\n') {

        if(name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {

            // Check if this is the start of last word
            int j = i + 1;
            int spaceFound = 0;

            // Look ahead for another space
            while(name[j] != '\0' && name[j] != '\n') {
                if(name[j] == ' ') {
                    spaceFound = 1;
                    break;
                }
                j++;
            }

            // If spaceFound = 1 → middle name → print initial
            // If spaceFound = 0 → last name → print full name
            if(spaceFound == 1) {
                printf("%c ", name[i+1]);   // initial
            } 
            else {
                printf("%s", &name[i+1]);   // print last name fully
                break;
            }
        }

        i++;
    }

    return 0;
}
