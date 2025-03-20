//10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    last = num % 10;

    while (num >= 10) {
        num /= 10;
    }

    first = num;

    printf("Sum of first and last digit: %d\n", first + last);

    return 0;
}

