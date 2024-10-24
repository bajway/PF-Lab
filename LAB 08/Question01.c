/*Write a C program to generate the following pattern:
1
1 2
1 2 3
1 2 3 4*/

#include<stdio.h>
int main(){
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d  ",j);
        } //Ending inner for loop
        printf("\n"); //Print newline
    } //Ending outer for loop
    return 0;
    
}//End main