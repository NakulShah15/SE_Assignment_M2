//19.Calculate compound interest

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    amount = principal * pow((1 + rate / 100), time);

    compound_interest = amount - principal;

    // Display the results
    printf("Final amount after %.2lf years: %.2lf\n", time, amount);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}

