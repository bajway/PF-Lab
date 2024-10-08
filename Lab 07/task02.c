/*Write a program in C to read n number of values in an array and display it in reverse order
Input: {1,2,3,4,5,6,7,8,9}
Output: 9 8 7 6 5 4 3 2 1*/

#include<stdio.h>
int main(){
    //Declaring variable
    int i;
    printf("Enter the size of array: ");
    scanf("%d", &i);
    int arr[i];
    //Taking input
    for (int j = 0; j<i ; j++)
    {
     printf("Enter the numbers ");
     scanf("%d", &arr[j]);   
    }
    //Printing the array
    for (int j = 0;j < i; j++)
    {
        printf("%d \t",arr[j]);
    }
    //Reversing the order
    for ( int j=i-1 ; j>=0 ; j--)
    {
        printf("%d \t", arr[j]);
    }
    
    return 0;
} //End main