#include<stdio.h>
void max_min(int arr[], int, int *, int *); //Function declaration
int main(){
    //Declaring variables

    int len, max, min;
    printf("Enter the length of the array:");
    scanf("%d", &len);
    int array[len];
    printf("Enter the elements of an array: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &array[i]);
    }
    max_min(array, len, &max, &min);
    printf("Maximum: %d Minimum: %d", max, min);
    return 0;

}//End main
//Function defination
void max_min(int arr[], int size, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }//End for loop
    
} //End function