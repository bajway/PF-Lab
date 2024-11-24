#include <stdio.h>
//Function for swapping
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
//Recursive bubble sorting Function
void bubbleSort(int arr[], int n) {
    //Base case
    if (n == 1) 
        return;
    for (int i = 0; i < n - 1; i++) 
    {
        if (arr[i] > arr[i + 1])  // Swapping
            swap(&arr[i], &arr[i + 1]);
    }
    // Recursive call
    bubbleSort(arr, n - 1);
}//End bubbleSort

//to print array
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}//Ennd printArray
int main() {
    int arr[] = {81, 24, 80, 71, 18, 11, 30}; //Dummy array
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array: ");
    printArray(arr, n);
    bubbleSort(arr, n); //bubble sort using recursion
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
} //End main
