//4. WAP to print table up to given numbers

#include <stdio.h>

int main() {
    int num, range;

    printf("Enter the number for the table: ");
    scanf("%d", &num);

    printf("Enter the range up to which the table should be printed: ");
    scanf("%d", &range);

    printf("\nMultiplication Table of %d up to %d:\n", num, range);
    for (int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}

