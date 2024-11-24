/*Write a recursive function that takes an array and its size as input and prints all the
elements.*/

#include<stdio.h>
//Function prototype----Recursive funtion
void recursiveArray(int arr[], int size){
    if (size==0)
        return;
    
    else
        printf("%d ", arr[0]);
    recursiveArray(arr + 1, size - 1);
}
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter elements of the array: ");
    //Input array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Elements are: ");
    recursiveArray(array, size);//Printing array using recursion
}//End main