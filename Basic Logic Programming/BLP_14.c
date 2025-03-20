//Find ascii value of given number.

#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The ASCII character for %d is: %c\n", number, number);
    return 0;
}

