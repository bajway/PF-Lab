/*Write a C program that takes a square matrix as input and prints its diagonal elements.*/

#include<stdio.h>
int main(){
    //Declaring variables
    int i,j;
    int arr[2][2];
    printf("Enter the elements of square matrix:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j< 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    printf("The square matrix you entered is:\n");
    for ( i = 0; i < 2; i++)//Printing the entered matrix elements
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //Printing diagonals
    printf("The diagonals are: %d and %d",arr[0][0], arr[1][1]);
    return 0;
}// End main