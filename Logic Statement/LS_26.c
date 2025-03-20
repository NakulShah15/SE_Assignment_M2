//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) 

#include <stdio.h>

int main() {
    int n, sum = 0, tempSum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        tempSum += i;
        sum += tempSum;
    }

    printf("Sum of the series up to %d: %d\n", n, sum);

    return 0;
}

