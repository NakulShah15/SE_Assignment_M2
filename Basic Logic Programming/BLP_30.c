//30. WAP to convert years into days and days into years 

#include <stdio.h>

int main() {
    int choice, years, days;

    printf("Choose an option:\n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the number of years: ");
        scanf("%d", &years);
        days = years * 365;  
        printf("%d years is approximately %d days.\n", years, days);
    } 
    else if (choice == 2) {
        printf("Enter the number of days: ");
        scanf("%d", &days);
        years = days / 365;         
        int remaining_days = days % 365; 
        printf("%d days is approximately %d year(s) and %d day(s).\n", days, years, remaining_days);
    } 
    else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}

