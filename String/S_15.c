//15. Write a program in C to find the largest and smallest words in a string. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[50], smallest[50], largest[50];
    int i = 0, j = 0, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    str[len - 1] = ' ';

    str[len] = '\0';

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j] = str[i];
            j++;
        } else {
            word[j] = '\0';
            if (j != 0) {
                if (strlen(smallest) == 0 || strlen(word) < strlen(smallest)) {
                    strcpy(smallest, word);
                }
                if (strlen(word) > strlen(largest)) {
                    strcpy(largest, word);
                }
                j = 0;
            }
        }
        i++;
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}

