//10. Write a program in C to extract a substring from a given string

#include <stdio.h>

int main() {
    char str[100], substring[100];
    int start, length, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter starting position: ");
    scanf("%d", &start);
    printf("Enter length of substring: ");
    scanf("%d", &length);

    for (i = 0; i < length && str[start + i] != '\0'; i++) {
        substring[i] = str[start + i];
    }
    substring[i] = '\0';

    printf("Extracted substring: %s\n", substring);

    return 0;
}

