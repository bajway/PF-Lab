/*Write a program to take a 2D array input from the user and display its transpose.*/

#include<stdio.h>   
int main(){
    //Declaring varibles
    int i,j, order;
    printf("Enter the order of the matrix: ");
    scanf("%d", &order);
    int arr[order][order];
    printf("Enter the elements: ");
    for ( i = 0; i < order; i++)
    {
        for ( j = 0; j < order; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    printf("Original matrix is: \n");
    for ( i = 0; i < order; i++)//Displaying original matrix
    {
        for ( j = 0; j < order; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is: \n");
    for ( i = 0; i < order; i++) //Printing transpose of the original matrix
    {
        for ( j = 0; j < order; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
} //End main