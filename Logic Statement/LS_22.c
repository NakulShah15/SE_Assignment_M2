//22. Accept 3 numbers from user using while loop and check each numbers palindrome 

#include <stdio.h>

int main() {
    int num, originalNum, reversed, remainder, count = 0;

    printf("Enter 3 numbers:\n");

    while (count < 3) {
        printf("Number %d: ", count + 1);
        scanf("%d", &num);

        originalNum = num;
        reversed = 0;

        while (num > 0) {
            remainder = num % 10;
            reversed = reversed * 10 + remainder;
            num /= 10;
        }

        if (originalNum == reversed)
            printf("%d is a Palindrome.\n", originalNum);
        else
            printf("%d is not a Palindrome.\n", originalNum);

        count++;
    }

    return 0;
}

