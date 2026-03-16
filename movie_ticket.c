#include <stdio.h>

int main() {
    int choice, tickets;
    float price, total;

    printf("===== Movie Ticket Booking System =====\n");
    printf("1. Pushpa 2\n");
    printf("2. Kalki\n");
    printf("3. Devara\n");
    printf("4. Salaar\n");

    printf("\nEnter your movie choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter number of tickets: ");
    scanf("%d", &tickets);

    switch(choice) {
        case 1:
            price = 150;
            printf("You selected: Pushpa 2\n");
            break;

        case 2:
            price = 180;
            printf("You selected: Kalki\n");
            break;

        case 3:
            price = 200;
            printf("You selected: Devara\n");
            break;

        case 4:
            price = 220;
            printf("You selected: Salaar\n");
            break;

        default:
            printf("Invalid movie choice!\n");
            return 0;
    }

    total = price * tickets;

    printf("Ticket price: %.2f\n", price);
    printf("Total amount: %.2f\n", total);
    printf("Booking Successful!\n");

    return 0;
}