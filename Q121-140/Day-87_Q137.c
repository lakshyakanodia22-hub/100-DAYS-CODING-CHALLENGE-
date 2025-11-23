#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    // Assign a role (you can change this value to test)
    r = ADMIN;

    switch(r) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome, Guest! Please log in for more features.\n");
            break;

        default:
            printf("Invalid role.\n");
    }

    return 0;
}
