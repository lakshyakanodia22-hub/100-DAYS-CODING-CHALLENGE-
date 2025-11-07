// Program to calculate Simple Interest and Compound Interest

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest;

    // taking input from user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // calculating simple interest
    simple_interest = (principal * rate * time) / 100;

    // calculating compound interest
    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    // displaying results
    printf("\nSimple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);

    return 0;
}
