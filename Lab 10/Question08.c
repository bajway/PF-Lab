/*Write a recursive function linearSearch that takes an array, its size, the target element
to search for, and the current index. It checks if the target is at the current index and
continues searching in the subsequent indices until it either finds the target or exhausts
the array.*/
#include<stdio.h>

int linearSearch(int array[], int s, int t, int cI){
    if (cI==s) //Base condition
        return -1;
    if (array[cI]==t)
        return cI;
    return linearSearch(array, s, t, cI + 1); //Recursive call
}
int main(){
    
    int arr[] = {25, 39, 10, 12, 14, 33, 22};
    int size = (sizeof arr) / sizeof arr[0];
    int targetElement=33;
    int currentIndex = 0;
    int index = linearSearch(arr, size, targetElement, currentIndex); //Function call
    if (index!=-1)
        printf("Element found at %d index", index);
    else
        printf("Element not found");

    return 0;
} //End main
