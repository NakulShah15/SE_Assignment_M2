//35. Accept the input month number and print number of days in that month.

#include <stdio.h>

int main() {
    int month_number;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month_number);

    switch (month_number) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("This month has 31 days.\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("This month has 30 days.\n");
            break;
        case 2:
            printf("February has 28 days (29 in a leap year).\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 12.\n");
    }

    return 0;
}

