// An electricity board charges the following rates for the use of electricity: for the first 200 units 80 paise per unit: for the next 100 units 90 paise per unit: beyond 300 units Rs 1 per unit. All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs 400, then an additional surcharge of 15% of total amount is charged. Write a program to read the name of the user, number of units consumed and print out the charges.


#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int units;
    float totalAmount, surcharge = 0.0;

    // Input user's name and number of units consumed
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the charges
    if (units <= 200) {
        totalAmount = 100 + (units * 0.80);
    } else if (units <= 300) {
        totalAmount = 100 + (200 * 0.80) + ((units - 200) * 0.90);
    } else {
        totalAmount = 100 + (200 * 0.80) + (100 * 0.90) + ((units - 300) * 1.0);
    }

    // Check if the total amount exceeds Rs. 400
    if (totalAmount > 400) {
        surcharge = 0.15 * totalAmount;
        totalAmount += surcharge;
    }

    // Print the charges
    printf("\nElectricity Bill for: %s\n", name);
    printf("Units Consumed: %d\n", units);
    printf("Total Amount: Rs. %.2f\n", totalAmount);

    return 0;
}
