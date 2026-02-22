#include <stdio.h>
#include <string.h>
int main() {
    char userId[50], password[50];
    
    char correctUserId[] = "Manoj";
    char correctPassword[] = "992266";
    
    printf("===== LOGIN PAGE =====\n");
    printf("Enter User ID: ");
    scanf("%s", userId);
    printf("Enter Password: ");
    scanf("%s", password);

    if (strcmp(userId, correctUserId) == 0 && strcmp(password, correctPassword) == 0) {
        printf("\nLogin Successful! Welcome %s\n", userId);
    } else {
        printf("\nInvalid User ID or Password. Login Failed!\n");
    }
    return 0;
}