/*Implement a C program to find the transpose of a given m x n matrix. Print the transposed
matrix.*/

#include<stdio.h>
int main(){
    //Declaring variables
    int i,j,m,n;
    printf("Enter the no. of rows of the matrix: ");
    scanf("%d", &m);
    printf("Enter the no. of columns of the matrix: ");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the elements: ");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    printf("Original matrix is: \n");
    for ( i = 0; i < m; i++)//printing original matrix
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is: \n");
    for ( i = 0; i < n; i++)//Printing transposed matrix
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    
    return 0;
} //End main