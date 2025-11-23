#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST,
    TOTAL_ROLES   // helper value to know count
};

int main() {
    // Matching names for printing
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };

    for (int i = 0; i < TOTAL_ROLES; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
