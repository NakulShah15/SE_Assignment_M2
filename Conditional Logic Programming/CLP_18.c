//18. Write a C program to calculate profit and loss on a transaction.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, result;
    printf("Enter the Cost Price (CP): ");
    scanf("%f", &costPrice);
    printf("Enter the Selling Price (SP): ");
    scanf("%f", &sellingPrice);
    if (sellingPrice > costPrice) {
        result = sellingPrice - costPrice;
        printf("Profit: %.2f\n", result);
    } 
    else if (costPrice > sellingPrice) {
        result = costPrice - sellingPrice;
        printf("Loss: %.2f\n", result);
    } 
    else {
        printf("No Profit, No Loss.\n");
    }
    return 0;
}

