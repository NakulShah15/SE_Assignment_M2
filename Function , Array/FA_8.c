8. WAP to reverse a string and check that the string is palindrome or not Write a program of structure employee that provides the following a. information -print and display empno, empname, address andage 

#include<stdio.h>
#include<string.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    char str[100], rev[100];
    int i, j, len = 0, flag = 1;
    
    printf("Enter a string: ");
    gets(str);
    
    while (str[len] != '\0') {
        len++;
    }
    
    j = len - 1;
    for (i = 0; i < len; i++) {
        rev[i] = str[j];
        j--;
    }
    rev[i] = '\0';
    
    printf("Reversed String: %s\n", rev);
    
    for (i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }
    
    if (flag == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    struct Employee e;
    printf("Enter Employee Number: ");
    scanf("%d", &e.empno);
    printf("Enter Employee Name: ");
    scanf("%s", e.empname);
    printf("Enter Address: ");
    scanf("%s", e.address);
    printf("Enter Age: ");
    scanf("%d", &e.age);
    
    printf("Employee Details:\n");
    printf("Employee Number: %d\n", e.empno);
    printf("Employee Name: %s\n", e.empname);
    printf("Address: %s\n", e.address);
    printf("Age: %d\n", e.age);
    
    return 0;
}

