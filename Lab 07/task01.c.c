/*Write a C Program that takes an user input array and prints the sum of its elements.
Input: {1,2,3,4,5,6,7,8,9}
Output: 45*/

#include<stdio.h>
int main(){
    //Declaring variables
    int i,sum=0;
    printf("Enter the size of array: ");
    scanf("%d", &i);
    int arr[i];
    // Using for loop
    for ( int j = 0; j < i; j++)
    {
        printf("Enter the numbers you want to sum: ");
        scanf("%d", &arr[j]);
        sum=sum+arr[j];
    } //End for loop
    printf("Sum is %d", sum); //Printing the sum
    return 0;
}