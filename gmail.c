#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50], lastName[50];
    char username[50];
    char password[50];
    char phone[15];

    printf("===== GMAIL ACCOUNT CREATION =====\n\n");

    printf("Enter First Name: ");
    scanf("%s", firstName);

    printf("Enter Last Name: ");
    scanf("%s", lastName);

    printf("Create Username: ");
    scanf("%s", username);

    printf("Create Password: ");
    scanf("%s", password);

    printf("Enter Phone Number: ");
    scanf("%s", phone);

    printf("\n----- ACCOUNT CREATED SUCCESSFULLY -----\n");
    printf("Name: %s %s\n", firstName, lastName);
    printf("Gmail ID: %s@gmail.com\n", username);
    printf("Phone: %s\n", phone);

    printf("\nThank you for creating a Gmail account!\n");

    return 0;
}