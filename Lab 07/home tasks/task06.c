/*6.Given an array arr[] of size N which contains elements from 0 to N-1, you need to find all the
elements occurring more than once in the given array.*/
#include<stdio.h>
#include<stdbool.h>
int main(){
    //Initializing variables
    int size , i , temperature = 0;
    bool change = 0;
    //Prompting the user to enter the size
    printf("Enter the size of array:");
    scanf("%d",&size);
    int array[size], top=size;
    for(i=0 ; i<size ; i++)
    {
        printf("Enter the value you want to store on: ");
        printf("%d",(i+1));
        printf(" index:");
        scanf("%d",&array[i]);
    }
    do //Using do-while loop
    {
        change = 0;
        for(i=0 ; i<top-1 ; i++)
        {
            if(array[i]>array[i+1])
            {
                temperature = array[i];
                array[i] = array[i+1];
                array[i+1] = temperature;
                change = 1;
            }
        }
        top=top-1;
    }
    while(change && top>0);//Ending do while
    for(i=0 ; i<size ; i++)//loop for printing the number that is repeated
    {
        if(array[i]==array[i+1])
        {
            printf("Number:  ");
            printf("%d",array[i]);
            printf(" occurs more than 1 in array\n");
            continue;
        }
    }
    return 0;
}//End main