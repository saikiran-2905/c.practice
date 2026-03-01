#include <stdio.h>

int main() {
    int choice, quantity;
    float price = 0, total;

    printf("===== Welcome to Mobile Store =====\n");
    printf("Available Mobiles:\n");
    printf("1. iPhone 15       - Rs. 80000\n");
    printf("2. Samsung S23     - Rs. 70000\n");
    printf("3. OnePlus 12      - Rs. 60000\n");
    printf("4. Redmi Note 13   - Rs. 20000\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            price = 80000;
            printf("You selected iPhone 15\n");
            break;
        case 2:
            price = 70000;
            printf("You selected Samsung S23\n");
            break;
        case 3:
            price = 60000;
            printf("You selected OnePlus 12\n");
            break;
        case 4:
            price = 20000;
            printf("You selected Redmi Note 13\n");
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\n===== BILL DETAILS =====\n");
    printf("Price per mobile: Rs. %.2f\n", price);
    printf("Quantity: %d\n", quantity);
    printf("Total Amount: Rs. %.2f\n", total);

    printf("\nThank you for shopping!\n");

    return 0;
}