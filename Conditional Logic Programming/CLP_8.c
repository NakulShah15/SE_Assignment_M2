//8. WAP to accept the height of a person in centimeters and categorize the person according to their height. 

#include <stdio.h>

int main() {
    float height;
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);
    if (height < 150) {
        printf("You are categorized as Short.\n");
    } 
    else if (height >= 150 && height <= 180) {
        printf("You are categorized as Average height.\n");
    } 
    else {
        printf("You are categorized as Tall.\n");
    }
    return 0;
}

