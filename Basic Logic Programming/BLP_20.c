//20. Accept monthly salary from the user and deduct 10% insurance premium, 10% loan installment find out of remaining salary.

#include <stdio.h>

int main() {
    float monthly_salary, insurance_deduction, loan_deduction, remaining_salary;

    printf("Enter your monthly salary: ");
    scanf("%f", &monthly_salary);

    insurance_deduction = monthly_salary * 0.10;
    loan_deduction = monthly_salary * 0.10;

    remaining_salary = monthly_salary - (insurance_deduction + loan_deduction);

    printf("Insurance Deduction: %.2f\n", insurance_deduction);
    printf("Loan Installment Deduction: %.2f\n", loan_deduction);
    printf("Remaining Salary: %.2f\n", remaining_salary);

    return 0;
}

