#include <stdio.h>

int main() {
    int seats = 40;
    int booked;

    printf("---- Bus Ticket Booking System ----\n");
    printf("Total seats available: %d\n", seats);

    printf("Enter number of seats you want to book: ");
    scanf("%d", &booked);

    if(booked <= seats) {
        seats = seats - booked;
        printf("Booking Successful!\n");
        printf("Seats booked: %d\n", booked);
        printf("Seats remaining: %d\n", seats);
    }
    else {
        printf("Sorry! Not enough seats available.\n");
    }

    return 0;
}