//24.Accept 5 employees name and salary and count average and total salary 

#include <stdio.h>

int main() {
    char names[EMP_COUNT][50]; 
    float salaries[EMP_COUNT];  
    float total_salary = 0, average_salary;

    for (int i = 0; i < EMP_COUNT; i++) {
        printf("Enter Employee %d Name: ", i + 1);
        scanf(" %[^\n]", names[i]); 

        printf("Enter Salary for %s: ", names[i]);
        scanf("%f", &salaries[i]);

        total_salary += salaries[i];  
    }

    average_salary = total_salary / EMP_COUNT;

    printf("\nTotal Salary: %.2f\n", total_salary);
    printf("Average Salary: %.2f\n", average_salary);

    return 0;
}

