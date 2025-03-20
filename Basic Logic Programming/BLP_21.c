//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable 

#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (using third variable): a = %d, b = %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping (without using third variable): a = %d, b = %d\n", a, b);
    return 0;
}

