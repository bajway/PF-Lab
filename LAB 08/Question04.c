/*Generate a pattern of odd numbers in decreasing order starting from a user-specified number
using nested loops.*/

#include<stdio.h>
int main(){
    //Initializing variables
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%2==0)//Making no, Odd
    {
        num-=1;
    }
    printf("Odd numbers are: ");
    for ( i = num; i>= 1; i-=2)//Printing numbers in decreasing order
    {
        printf("%d ",i); 
    }
    return 0;
} //End main