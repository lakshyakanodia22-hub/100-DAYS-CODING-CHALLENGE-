#include <stdio.h>

int main() {
    float cost, sell, profit, loss;

    // Input cost price and selling price
    printf("Enter cost price: ");
    scanf("%f", &cost);
    printf("Enter selling price: ");
    scanf("%f", &sell);

    // Check profit or loss
    if (sell > cost) {
        profit = sell - cost;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", (profit / cost) * 100);
    }
    else if (cost > sell) {
        loss = cost - sell;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", (loss / cost) * 100);
    }
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
