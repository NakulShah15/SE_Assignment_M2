//32. Accept 2 numbers and find out its sum check it size 

#include <stdio.h>

int main() {
    int num1, num2, sum;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    printf("Size of sum in bytes: %lu\n", sizeof(sum));
    return 0;
}

