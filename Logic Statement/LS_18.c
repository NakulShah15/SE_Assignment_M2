//18. Write a C Program to Print the Multiplication Table of N i. E.g. 5 * 1 = 5 ii. 5 * 2 = 10 1. . 2. . iii. 5 * 10 = 50

#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &n);

    while (i <= 10) {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }

    return 0;
}

