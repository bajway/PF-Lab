/*Write a C Program to find the minimum and maximum number in an array.
Input:{4,1,6,8,10,21,8,9,2,6}*/

#include <stdio.h>
int main() {
    int arr[] = {4, 1, 6, 8, 10, 21, 8, 9, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculating the size of the array
    int min = arr[0], max = arr[0];  // Initialize minimum and maximum

    // Loop to find minimum and maximum
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];  // Updating minimum if element is smaller
        }
        if (arr[i] > max) {
            max = arr[i];  // Updating maximum if element is larger
        }
    }

    // Print the results
    printf("Minimum Number = %d\n", min);
    printf("Maximum Number = %d\n", max);

    return 0;
} //End main
