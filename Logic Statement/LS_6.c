//6. WAP to print Fibonacci series up to given numbers  

#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;

    printf("Enter the upper limit for the Fibonacci series: ");
    scanf("%d", &limit);

    if (limit < 0) {
        printf("Please enter a non-negative number.\n");
    } else {
        printf("Fibonacci Series up to %d: ", limit);
        while (first <= limit) {
            printf("%d ", first);
            next = first + second;  
            first = second;  
            second = next; 
        }
        printf("\n");
    }
    return 0;
}



