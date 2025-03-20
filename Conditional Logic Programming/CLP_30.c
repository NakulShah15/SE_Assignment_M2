//30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/- 

#include <stdio.h>

int main() {
    float bill, final_bill;

    printf("Enter the bill amount: ");
    scanf("%f", &bill);

    if (bill > 800) {
        bill += bill * 0.18;  
    }

    final_bill = (bill < 256) ? 256 : bill;

    printf("Final Bill Amount: Rs. %.2f\n", final_bill);

    return 0;
}

