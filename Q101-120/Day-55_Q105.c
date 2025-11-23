#include <stdio.h>

int main() {
    int nums[100], n, i, j, count, majority = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Check each element's frequency
    for(i = 0; i < n; i++) {
        count = 1;

        for(j = i + 1; j < n; j++) {
            if(nums[j] == nums[i]) {
                count++;
            }
        }

        if(count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("Majority element = %d\n", majority);

    return 0;
}
