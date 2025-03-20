//16. Calculate the Sum of Natural Numbers Using the While Loop 

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive natural number.\n");
    } else {
        while (i <= n) {
            sum += i;
            i++;
        }

        printf("Sum of first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}


