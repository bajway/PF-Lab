/*Define a structure to represent a point in 2D space with x and y coordinates. Implement
functions to calculate the distance between two points and to check if a point lies within
a specific rectangular boundary.*/
#include <stdio.h>
#include <math.h> //to use sqrt functipn
struct plane
{
    float x;
    float y;
}p1, p2; //Defining struct 
float distanceCalculate(struct plane p1, struct plane p2){
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
} //End function
int isPointInRectangle(struct plane p, struct plane topLeft, struct plane bottomRight) {
    return (p.x >= topLeft.x && p.x <= bottomRight.x && p.y >= topLeft.y && p.y <= bottomRight.y);
} //End function

int main() {
    //Variable declarration
    struct plane p1, p2, testPoint, topLeft, bottomRight;

    // Input coordinates
    printf("Enter the coordinates of the first point (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter the coordinates of the second point (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    float distance = distanceCalculate(p1, p2); //Functioncall
    printf("The distance between the two points is: %.2f\n", distance);

    printf("Enter the top-left corner of the rectangle (x,y): ");
    scanf("%f %f", &topLeft.x, &topLeft.y);

    printf("Enter the bottom-right corner of the rectangle (x,y): ");
    scanf("%f %f", &bottomRight.x, &bottomRight.y);

    printf("Enter the coordinates of the point to check (x,y): ");
    scanf("%f %f", &testPoint.x, &testPoint.y);
    //Applying conditions for check if the point is in reactangle or not
    if(isPointInRectangle(testPoint, topLeft, bottomRight))
        printf("The point lies within the rectangle.\n");
    else 
        printf("The point does not lie within the rectangle.\n");
    return 0;
} //End main