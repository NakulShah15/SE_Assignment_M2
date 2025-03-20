//37. WAP to show i. Monday to Sunday using switch case ii. Vowel or Consonant using switch case

#include <stdio.h>

int main() {
    int choice;

    printf("Select an option:\n");
    printf("1. Display Day of the Week\n");
    printf("2. Check Vowel or Consonant\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            int day;
            printf("Enter the week number (1-7): ");
            scanf("%d", &day);

            switch (day) {
                case 1: printf("Monday\n"); break;
                case 2: printf("Tuesday\n"); break;
                case 3: printf("Wednesday\n"); break;
                case 4: printf("Thursday\n"); break;
                case 5: printf("Friday\n"); break;
                case 6: printf("Saturday\n"); break;
                case 7: printf("Sunday\n"); break;
                default: printf("Invalid input! Please enter a number between 1 and 7.\n");
            }
            break;
        }

        case 2: {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch); 

            switch (ch) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    printf("%c is a Vowel.\n", ch);
                    break;
                default:
                    printf("%c is a Consonant.\n", ch);
            }
            break;
        }

        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}

