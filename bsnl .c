#include <stdio.h>

int main() {
    int choice;

    printf("===== BSNL SIM SERVICE MENU =====\n");
    printf("1. Check Main Balance\n");
    printf("2. Check Data Balance\n");
    printf("3. Recharge\n");
    printf("4. Customer Care\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Your main balance is Rs. 120\n");
            break;

        case 2:
            printf("Your data balance is 1.5 GB\n");
            break;

        case 3:
            printf("Recharge successful! Rs. 199 plan activated.\n");
            break;

        case 4:
            printf("Calling BSNL Customer Care: 1503\n");
            break;

        case 5:
            printf("Thank you for using BSNL services.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}