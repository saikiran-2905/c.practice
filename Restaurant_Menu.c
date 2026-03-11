#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0;

    printf("====== RESTAURANT MENU ======\n");
    printf("1. Pizza        - Rs.200\n");
    printf("2. Burger       - Rs.100\n");
    printf("3. Sandwich     - Rs.80\n");
    printf("4. Pasta        - Rs.150\n");
    printf("5. Coffee       - Rs.50\n");
    printf("==============================\n");

    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    switch(choice) {
        case 1:
            total = 200 * quantity;
            printf("You ordered Pizza\n");
            break;

        case 2:
            total = 100 * quantity;
            printf("You ordered Burger\n");
            break;

        case 3:
            total = 80 * quantity;
            printf("You ordered Sandwich\n");
            break;

        case 4:
            total = 150 * quantity;
            printf("You ordered Pasta\n");
            break;

        case 5:
            total = 50 * quantity;
            printf("You ordered Coffee\n");
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    printf("Total Bill = Rs. %.2f\n", total);

    return 0;
}