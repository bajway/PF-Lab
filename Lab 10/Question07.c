/* Create a C program that defines a constant for the conversion factor of meters to
kilometers. Use a static variable in a function to count how many times the function is
called */
#include <stdio.h>
#define M 1000
float conversion(float);
int main(){
    float distance;
    while (1) 
    {
        printf("\nEnter distance in meters(-1 to exit): ");
        scanf("%f", &distance);

        if(distance == -1) break;

        float km = conversion(distance);
        //Output
        printf("%.2f meters is equal to %.2f kilometers.\n", distance, km);
    }
    return 0;
}//End main
float conversion(float d)
{
    static int count = 0;  //Static variable for tracking count
    count++;  //Incrementcount each time the function gets called
    printf("function called %d times\n", count);
    return d / M;  // Convert meters to kilometers
} // End conversion