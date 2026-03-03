#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account user;
    int choice;
    float amount;
    int isAccountCreated = 0;

    while (1) {
        system("cls");   // Clear screen (Windows)

        printf("=====================================\n");
        printf("        MINI BANK MANAGEMENT         \n");
        printf("=====================================\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("=====================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            system("cls");
            printf("------ Create Account ------\n");
            printf("Enter Account Number: ");
            scanf("%d", &user.accNo);

            printf("Enter Name: ");
            scanf(" %[^\n]", user.name);

            printf("Enter Initial Balance: ");
            scanf("%f", &user.balance);

            isAccountCreated = 1;

            printf("\nAccount Created Successfully!\n");
            system("pause");
            break;

        case 2:
            system("cls");
            if (!isAccountCreated) {
                printf("Please create account first!\n");
            } else {
                printf("------ Deposit Money ------\n");
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if (amount > 0) {
                    user.balance += amount;
                    printf("Amount Deposited Successfully!\n");
                } else {
                    printf("Invalid Amount!\n");
                }
            }
            system("pause");
            break;

        case 3:
            system("cls");
            if (!isAccountCreated) {
                printf("Please create account first!\n");
            } else {
                printf("------ Withdraw Money ------\n");
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= user.balance && amount > 0) {
                    user.balance -= amount;
                    printf("Amount Withdrawn Successfully!\n");
                } else {
                    printf("Insufficient Balance or Invalid Amount!\n");
                }
            }
            system("pause");
            break;

        case 4:
            system("cls");
            if (!isAccountCreated) {
                printf("Please create account first!\n");
            } else {
                printf("------ Account Details ------\n");
                printf("Account Number : %d\n", user.accNo);
                printf("Account Holder : %s\n", user.name);
                printf("Current Balance: %.2f\n", user.balance);
            }
            system("pause");
            break;

        case 5:
            printf("Thank you for using our Bank System!\n");
            exit(0);

        default:
            printf("Invalid Choice! Please try again.\n");
            system("pause");
        }
    }

    return 0;
}