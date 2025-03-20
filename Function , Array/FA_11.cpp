//11. WAP to accept 5 numbers from user and display in reverse order using for loop and array

#include <stdio.h>

int main() {
    int arr[5], i;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Numbers in reverse order:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
 
