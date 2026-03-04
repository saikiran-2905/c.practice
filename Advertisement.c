#include <stdio.h>

int main() {
    int choice;

    printf("=====================================\n");
    printf("        WELCOME TO SUPER SALE       \n");
    printf("=====================================\n");
    printf("🔥 New Smartphone Offer 🔥\n");
    printf("Brand: XYZ Pro Max\n");
    printf("Original Price: Rs. 25,000\n");
    printf("Discount Price: Rs. 19,999\n");
    printf("Limited Time Offer!\n");
    printf("=====================================\n");

    printf("\nDo you want to buy this product?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("\nThank you for purchasing XYZ Pro Max!\n");
        printf("Your order has been placed successfully.\n");
    } 
    else if(choice == 2) {
        printf("\nThank you for visiting. Have a nice day!\n");
    } 
    else {
        printf("\nInvalid choice! Please restart the program.\n");
    }

    return 0;
}