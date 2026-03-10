#include <stdio.h>

int main() {
    int choice, qty;
    float price, total;

    printf("=== DIGITAL MARKET ===\n");
    printf("1. Mobile Phone - 15000\n");
    printf("2. Laptop - 50000\n");
    printf("3. Headphones - 2000\n");
    printf("4. Smart Watch - 5000\n");

    printf("\nEnter the product number: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &qty);

    switch(choice) {
        case 1:
            price = 15000;
            break;
        case 2:
            price = 50000;
            break;
        case 3:
            price = 2000;
            break;
        case 4:
            price = 5000;
            break;
        default:
            printf("Invalid product choice\n");
            return 0;
    }

    total = price * qty;

    printf("\nTotal amount = %.2f\n", total);
    printf("Thank you for shopping in Digital Market!\n");

    return 0;
}