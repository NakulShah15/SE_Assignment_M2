//3. Write a program in C to print individual characters of a string in reverse order 

#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  

    while (str[length] != '\0') {
        length++;
    }

    printf("\nCharacters in reverse order:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}

