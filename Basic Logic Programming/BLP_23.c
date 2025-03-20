//23. WAP to calculate swap 2 numbers with using of multiplication and division. 

#include <stdio.h>

int main() {
    double a, b;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    a = a * b;
    b = a / b;
    a = a / b;

    printf("After swapping: a = %.2lf, b = %.2lf\n", a, b);
    return 0;
}

