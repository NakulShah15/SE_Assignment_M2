// 8. Write a program in C to count the total number of vowels or  consonants in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            char ch = str[i] | 32;  // Convert to lowercase
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("\nTotal Vowels: %d", vowels);
    printf("\nTotal Consonants: %d\n", consonants);

    return 0;
}

 
