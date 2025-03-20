//12. Write a program in C to find the number of times a given word 'is' appears in the given string. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[] = "is";
    int i, j, count = 0, len, wordLen;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);
    wordLen = strlen(word);

    for (i = 0; i <= len - wordLen; i++) {
        for (j = 0; j < wordLen; j++) {
            if (str[i + j] != word[j]) {
                break;
            }
        }
        if (j == wordLen) {
            count++;
        }
    }

    printf("The word '%s' appears %d times in the string.\n", word, count);

    return 0;
}

