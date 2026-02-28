#include <stdio.h>

int main() {
    int choice;
    float balance = 100.0;   // Initial balance
    float rechargeAmount;

    printf("******** Welcome to Airtel SIM ********\n");
    printf("1. Check Balance\n");
    printf("2. Recharge\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Your current balance is: Rs %.2f\n", balance);
            break;

        case 2:
            printf("Enter recharge amount: ");
            scanf("%f", &rechargeAmount);
            balance = balance + rechargeAmount;
            printf("Recharge successful!\n");
            printf("Updated balance: Rs %.2f\n", balance);
            break;

        case 3:
            printf("Thank you for using Airtel SIM services.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}