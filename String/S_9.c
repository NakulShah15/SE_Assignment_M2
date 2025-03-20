//9. Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, max = 0;
    char maxChar;

    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        freq[(int)str[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > max) {
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character: '%c' (%d times)\n", maxChar, max);

    return 0;
}

