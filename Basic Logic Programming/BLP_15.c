//Convert school’s name in abbreviated form.

#include <stdio.h>


void abbreviate(char *name, char *abbreviation) {
    int i = 0, j = 0;

    if (name[0] != ' ') {
        abbreviation[j++] = toupper(name[0]);
    }

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            abbreviation[j++] = toupper(name[i + 1]);
        }
        i++;
    }
    abbreviation[j] = '\0';
}

int main() {
    char schoolName[100], abbreviation[50];

    printf("Enter the school's name: ");
    fgets(schoolName, sizeof(schoolName), stdin);
    for (int i = 0; schoolName[i] != '\0'; i++) {
        if (schoolName[i] == '\n') {
            schoolName[i] = '\0';
            break;
        }
    }

    abbreviate(schoolName, abbreviation);

    printf("Abbreviated form: %s\n", abbreviation);

    return 0;
}
 
