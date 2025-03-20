//4. Write a program in C to count the total number of words in a string.

#include <stdio.h>

int countWords(char str[]) {
    int i = 0, wordCount = 0;

    while (str[i] != '\0') {
        if ((str[i] != ' ' && str[i] != '\t') && 
            (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')) {
            wordCount++;
        }
        i++;
    }

    return wordCount;
}

int main() {
    char str[200];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  

    printf("\nTotal number of words: %d\n", countWords(str));

    return 0;
}
 
