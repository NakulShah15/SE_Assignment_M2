//16.Convert country's name in abbreviate form 

#include <stdio.h>
#include <ctype.h>

int main() {
    char country_name[100];
    
    printf("Enter the country's name: ");
    fgets(country_name, sizeof(country_name), stdin);

    printf("Abbreviated form: ");

    if (isalpha(country_name[0])) {
        printf("%c", toupper(country_name[0]));
    }
    
    for (int i = 1; country_name[i] != '\0'; i++) {
        if (country_name[i] == ' ' && isalpha(country_name[i + 1])) {
            printf("%c", toupper(country_name[i + 1]));
        }
    }

    printf("\n");

    return 0;
}

