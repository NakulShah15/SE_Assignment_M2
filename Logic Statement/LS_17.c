//17. Calculate 5 numbers from user and calculate number of even and odd using of while loop 

#include <stdio.h>

int main() {
    int i = 0, num, evenCount = 0, oddCount = 0;

    printf("Enter 5 numbers:\n");

    while (i < 5) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0)
            evenCount++;
        else
            oddCount++;

        i++;
    }

    printf("\nTotal Even Numbers: %d\n", evenCount);
    printf("Total Odd Numbers: %d\n", oddCount);

    return 0;
}

