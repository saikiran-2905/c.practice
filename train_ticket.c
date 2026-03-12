#include <stdio.h>
#include <string.h>

struct Passenger {
    char name[50];
    int age;
    char gender[10];
    int seat_no;
};

int main() {
    struct Passenger p;
    int train_no;
    char train_name[50];
    char source[50], destination[50];

    printf("----- Train Ticket Reservation System -----\n");

    // Train details
    printf("Enter Train Number: ");
    scanf("%d", &train_no);

    printf("Enter Train Name: ");
    scanf("%s", train_name);

    printf("Enter Source Station: ");
    scanf("%s", source);

    printf("Enter Destination Station: ");
    scanf("%s", destination);

    // Passenger details
    printf("\nEnter Passenger Name: ");
    scanf("%s", p.name);

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Gender: ");
    scanf("%s", p.gender);

    printf("Enter Seat Number: ");
    scanf("%d", &p.seat_no);

    // Ticket details
    printf("\n----- Ticket Reservation Details -----\n");
    printf("Train Number: %d\n", train_no);
    printf("Train Name: %s\n", train_name);
    printf("From: %s\n", source);
    printf("To: %s\n", destination);
    printf("Passenger Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s\n", p.gender);
    printf("Seat Number: %d\n", p.seat_no);

    printf("\nTicket Reserved Successfully!\n");

    return 0;
}