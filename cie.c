#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define RATE 20 
//here I define RATE is the parking charge per hour

struct Parking {
    int vehicleNo;
    int entryTime;
    int isOccupied;
};

struct Parking slot[MAX];

// Function to initialize parking slots
void initialize() {
    for (int i = 0; i < MAX; i++) {
        slot[i].isOccupied = 0;
    }
}

// Function to park a vehicle
void parkVehicle() {
    int vehicleNo, time;
    
    for (int i = 0; i < MAX; i++) {
        if (slot[i].isOccupied == 0) {
            printf("Enter vehicle number: ");
            scanf("%d", &vehicleNo);
            printf("Enter entry time (in hours): ");
            scanf("%d", &time);

            slot[i].vehicleNo = vehicleNo;
            slot[i].entryTime = time;
            slot[i].isOccupied = 1;

            printf("Vehicle parked at slot %d\n", i + 1);
            return;
        }
    }
    printf("Parking full! No slots available.\n");
}

// Function to remove a vehicle
void removeVehicle() {
    int vehicleNo, exitTime;
    float bill;

    printf("Enter vehicle number: ");
    scanf("%d", &vehicleNo);

    for (int i = 0; i < MAX; i++) {
        if (slot[i].isOccupied == 1 && slot[i].vehicleNo == vehicleNo) {
            printf("Enter exit time (in hours): ");
            scanf("%d", &exitTime);

            bill = (exitTime - slot[i].entryTime) * RATE;
            if (bill < 0) bill = RATE;

            printf("Vehicle removed from slot %d\n", i + 1);
            printf("Parking Charge = Rs %.2f\n", bill);

            slot[i].isOccupied = 0;
            return;
        }
    }
    printf("Vehicle not found!\n");
}

// Function to display parking status
void displayStatus() {
    printf("\n--- Parking Status ---\n");
    for (int i = 0; i < MAX; i++) {
        if (slot[i].isOccupied)
            printf("Slot %d : Vehicle No %d\n", i + 1, slot[i].vehicleNo);
        else
            printf("Slot %d : Empty\n", i + 1);
    }
}

int main() {
    int choice;
    initialize();

    while (1) {
        printf("\n===== Parking Slot Management System =====\n");
        printf("1. Park Vehicle\n");
        printf("2. Remove Vehicle\n");
        printf("3. Display Parking Status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                parkVehicle();
                break;
            case 2:
                removeVehicle();
                break;
            case 3:
                displayStatus();
                break;
            case 4:
                printf("Thank you!\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
