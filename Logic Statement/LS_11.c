//11. Accept 5 names from user at run time. Topics Covered Looping Statements Conditional Statements 

#include <stdio.h>

int main() {
    char names[5][50];

    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

