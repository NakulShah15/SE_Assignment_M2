//16.Accept 5 numbers from user and perform sum of array

#include <stdio.h>

int main() {
    int arr[5], i, sum = 0;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    printf("\nSum of array elements: %d\n", sum);

    return 0;
}
 
