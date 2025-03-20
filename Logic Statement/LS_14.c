//14.Accept 5 numbers from user and find those numbers factorials 

#include <stdio.h>

int main() {
    int numbers[5], factorial, i, j;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nFactorials:\n");
    for (i = 0; i < 5; i++) {
        int num = numbers[i];
        if (num < 0) {
            printf("Factorial of %d is not defined.\n", num);
        } else {
            factorial = 1;
            for (j = 1; j <= num; j++) {
                factorial *= j;
            }
            printf("Factorial of %d is: %d\n", num, factorial);
        }
    }

    return 0;
}

