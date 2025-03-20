//7. WAP Find out length of string without using inbuilt function 

#include<stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    
    while (str[i] != '\0') {
        i++;
    }
    
    printf("Length of the string: %d", i);
    return 0;
}

