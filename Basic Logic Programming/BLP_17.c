//17. Calculate person's insurance premium based on salary 

#include <stdio.h>

int main() {
    float salary, premium;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    if (salary < 50000) {
        premium = salary * 0.05;
    } else if (salary >= 50000 && salary <= 100000) {
        premium = salary * 0.07;
    } else {
        premium = salary * 0.10;
    }

    printf("Your insurance premium is: %.2f\n", premium);

    return 0;
}

