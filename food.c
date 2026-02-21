#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0;

    printf("===== Welcome to Food Ordering System =====\n");
    printf("1. Pizza - Rs.200\n");
    printf("2. Burger - Rs.100\n");
    printf("3. Sandwich - Rs.80\n");
    printf("4. Pasta - Rs.150\n");
    printf("5. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (choice) {
            case 1:
                total += 200 * quantity;
                printf("Pizza added to cart!\n");
                break;
            case 2:
                total += 100 * quantity;
                printf("Burger added to cart!\n");
                break;
            case 3:
                total += 80 * quantity;
                printf("Sandwich added to cart!\n");
                break;
            case 4:
                total += 150 * quantity;
                printf("Pasta added to cart!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    printf("\n===== Bill Summary =====\n");
    printf("Total Amount = Rs. %.2f\n", total);
    printf("Thank you! Visit again.\n");

    return 0;
}