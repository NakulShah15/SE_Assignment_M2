//18. Calculate person's Annual salary

#include <stdio.h>

int main() {
    float monthly_salary, annual_salary;

    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);

    annual_salary = monthly_salary * 12;
    printf("Your annual salary is: %.2f\n", annual_salary);

    return 0;
}

