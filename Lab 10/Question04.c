/*Create a structure to store details about cars in a dealership, including make, model,
year, price, and mileage. Write a program that allows users to add new cars, display a
list of available cars, and search for cars by make or model.*/

#include <stdio.h>
#include <string.h>
#define MAX_CARS 100
struct Car {
    char make[20];
    char model[20];
    int year;
    float price;
    float mileage;
};
// Functions declaration
void addCar(struct Car cars[], int *carCount);
void displayCars(struct Car cars[], int carCount);
void searchCars(struct Car cars[], int carCount);
int main() {
    struct Car cars[MAX_CARS];
    int carCount = 0;          
    int choice;

    while (1)
    {
        // Display menu
        printf("\n****Car Dealership Menu****\n");
        printf("1. Add a New Car\n");
        printf("2. Display All Cars\n");
        printf("3. Search Cars by Make or Model\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addCar(cars, &carCount);
                break;
            case 2:
                displayCars(cars, carCount);
                break;
            case 3:
                searchCars(cars, carCount);
                break;
            case 4:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
} //..End main
//Function definations or body
// Function to add a new car
void addCar(struct Car cars[], int *carCount){
    if (*carCount >= MAX_CARS) {
        printf("Dealership is full! Cannot add more cars.\n");
        return;
    }
    struct Car newCar;
    printf("Enter car make: ");
    scanf("%s", newCar.make);
    printf("Enter car model: ");
    scanf("%s", newCar.model);
    printf("Enter car year: ");
    scanf("%d", &newCar.year);
    printf("Enter car price: ");
    scanf("%f", &newCar.price);
    printf("Enter car mileage: ");
    scanf("%f", &newCar.mileage);

    // Add the new car to the array and increment the count
    cars[*carCount] = newCar;
    (*carCount)++;

    printf("Car added successfully!\n");
} //End addCar function
// Function for display car
void displayCars(struct Car cars[], int carCount){
    if (carCount == 0)
    {
        printf("No cars available in the dealership.\n");
        return;
    }
    printf("\nAvailable Cars:\n");
    for (int i = 0; i < carCount; i++) 
    {
        printf("Car %d:\n", i + 1);
        printf("Make: %s\n", cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %.2f\n", cars[i].price);
        printf("Mileage: %.2f\n", cars[i].mileage);
    }
} //End function

// Funtion to find car 
void searchCars(struct Car cars[], int carCount){
    if (carCount == 0)
    {
        printf("No cars available to search.\n");
        return;
    }
    char searchTerm[20];
    printf("Enter make or model to search for: ");
    scanf("%s", searchTerm);

    printf("\nSearch Results:\n");
    int found = 0;
    for (int i = 0; i < carCount; i++)
    {
        if (strcmp(cars[i].make, searchTerm) == 0 || strcmp(cars[i].model, searchTerm) == 0)
        {
            printf("Car %d:\n", i + 1);
            printf("  Make: %s\n", cars[i].make);
            printf("  Model: %s\n", cars[i].model);
            printf("  Year: %d\n", cars[i].year);
            printf("  Price: %.2f\n", cars[i].price);
            printf("  Mileage: %.2f\n", cars[i].mileage);
            found = 1;
        }
    }

    if (!found) {
        printf("No cars found matching '%s'\n", searchTerm);
    }
}//End functiom
