//27.Convert days into months 

#include <stdio.h>

int main() {
    int days, months, remaining_days;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    months = days / 30;      
    remaining_days = days % 30; 
    printf("%d days is approximately %d month(s) and %d day(s).\n", days, months, remaining_days);

    return 0;
}


