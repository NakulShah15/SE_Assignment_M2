//5. WAP to print factorial of given number

#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; 

    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
            factorial *= i;
        }
        printf("Factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}

