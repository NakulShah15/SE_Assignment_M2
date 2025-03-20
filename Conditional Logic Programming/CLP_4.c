//4. WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement 

#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %d + %d = %d\n", num1, num2, result);
    } 
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %d - %d = %d\n", num1, num2, result);
    } 
    else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %d * %d = %d\n", num1, num2, result);
    } 
    else if (operator == '/') {
        if (num2 != 0) {
            float div_result = (float)num1 / num2;
            printf("Result: %d / %d = %.2f\n", num1, num2, div_result);
        } else {
            printf("Error: Division by zero is not allowed!\n");
        }
    } 
    else if (operator == '%') {
        if (num2 != 0) {
            result = num1 % num2;
            printf("Result: %d %% %d = %d\n", num1, num2, result);
        } else {
            printf("Error: Modulo by zero is not allowed!\n");
        }
    } 
    else {
        printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}

