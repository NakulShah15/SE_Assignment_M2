//23. C Program to Reverse a Number Using FOR Loop Series Program:

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num > 0; num /= 10) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}

