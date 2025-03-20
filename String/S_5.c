//5. Write a program in C to compare two strings without using string library functions.

#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; 
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    if (compareStrings(str1, str2)) {
        printf("\nStrings are equal.\n");
    } else {
        printf("\nStrings are not equal.\n");
    }

    return 0;
}
 
