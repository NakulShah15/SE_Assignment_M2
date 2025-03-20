//19. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow : 

#include <stdio.h>

int main() {
    int customerID, units;
    char name[50];
    float totalBill, surcharge = 0, finalBill;

  
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf(" %[^\n]", name); 

    printf("Enter Units Consumed: ");
    scanf("%d", &units);
    
    if (units <= 100) {
        totalBill = units * 1.50;
    } 
    else if (units <= 300) {
        totalBill = (100 * 1.50) + (units - 100) * 2.00;
    } 
    else if (units <= 500) {
        totalBill = (100 * 1.50) + (200 * 2.00) + (units - 300) * 2.50;
    } 
    else {
        totalBill = (100 * 1.50) + (200 * 2.00) + (200 * 2.50) + (units - 500) * 3.00;
    }


    if (totalBill > 300) {
        surcharge = totalBill * 0.15;
    }

    finalBill = totalBill + surcharge;

    if (finalBill < 50) {
        finalBill = 50;
    }

    printf("\nElectricity Bill\n");
    printf("-------------------------------\n");
    printf("Customer ID      : %d\n", customerID);
    printf("Customer Name    : %s\n", name);
    printf("Units Consumed   : %d\n", units);
    printf("Total Bill       : $%.2f\n", totalBill);
    printf("Surcharge (if any): $%.2f\n", surcharge);
    printf("Final Bill Amount: $%.2f\n", finalBill);
    printf("-------------------------------\n");

    return 0;
}

