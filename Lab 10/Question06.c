/*Design a structure to store information about travel packages, including package name,
destination, duration, cost, and number of seats available. Write a program that allows
users to book a travel package and display available packages.*/

#include <stdio.h>
#include <string.h>
#define MAX_PACKAGE 100
struct  package{
    char name[30];
    char destination[30];
    int duration;
    float cost;
    float seatsAvailable;
};
// Functions declaration
void bookPackage(struct package packages[], int *packageCount);
void displayPackage(struct package packages[], int carCount);

int main() {
    struct package packages[MAX_PACKAGE];
    int packageCount = 0;          
    int choice;

    while (1)
    {
        // Display menu
        printf("\n****Travel packages Menu****\n");
        printf("1. Book a travel package\n");
        printf("2. Display Available packages\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                bookPackage(packages, &packageCount);
                break;
            case 2:
                displayPackage(packages, packageCount);
                break;
            case 3:
                printf("Exiting the program. Have a great day!\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}

// Function to book a travel package
void bookPackage(struct package packages[], int *packageCount) {
    if (*packageCount >= MAX_PACKAGE) {
        printf("Cannot add more packages. Maximum limit reached!\n");
        return;
    }

    struct package newPackage;

    printf("\nEnter package name: ");
    getchar(); // Clear input buffer
    fgets(newPackage.name, sizeof(newPackage.name), stdin);
    newPackage.name[strcspn(newPackage.name, "\n")] = '\0'; // Remove trailing newline

    printf("Enter destination: ");
    fgets(newPackage.destination, sizeof(newPackage.destination), stdin);
    newPackage.destination[strcspn(newPackage.destination, "\n")] = '\0'; // Remove trailing newline

    printf("Enter duration (in days): ");
    scanf("%d", &newPackage.duration);

    printf("Enter cost (in USD): ");
    scanf("%f", &newPackage.cost);

    printf("Enter number of seats available: ");
    scanf("%f", &newPackage.seatsAvailable);

    packages[*packageCount] = newPackage; // Add the new package to the array
    (*packageCount)++; // Increment package count

    printf("\nPackage successfully added!\n");
}

// Function to display all available travel packages
void displayPackage(struct package packages[], int packageCount) {
    if (packageCount == 0) {
        printf("\nNo travel packages available.\n");
        return;
    }

    printf("\n**** Available Travel Packages ****\n");
    for (int i = 0; i < packageCount; i++) {
        printf("\nPackage %d:\n", i + 1);
        printf("Name: %s\n", packages[i].name);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: $%.2f\n", packages[i].cost);
        printf("Seats Available: %.0f\n", packages[i].seatsAvailable);
    }
}

      