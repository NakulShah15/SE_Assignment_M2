//6. Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i, alphabets = 0, digits = 0, specialChars = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            specialChars++;
        }
    }

    printf("\nTotal Alphabets: %d", alphabets);
    printf("\nTotal Digits: %d", digits);
    printf("\nTotal Special Characters: %d\n", specialChars);

    return 0;
}
 
