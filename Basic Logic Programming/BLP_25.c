//25.Accept 5 expense from user and find average of expense 

#include <stdio.h>
#define EXPENSE_COUNT 5

int main() {
    float expenses[EXPENSE_COUNT], total_expense = 0, average_expense;

    for (int i = 0; i < EXPENSE_COUNT; i++) {
        printf("Enter expense %d: ", i + 1);
        scanf("%f", &expenses[i]);

        total_expense += expenses[i];  
    }

    average_expense = total_expense / EXPENSE_COUNT;

    printf("\nTotal Expense: %.2f\n", total_expense);
    printf("Average Expense: %.2f\n", average_expense);

    return 0;
}

