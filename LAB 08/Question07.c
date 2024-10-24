/*Write a C program to generate a diamond shape pattern using nested loops. The program
should take the number of rows for the upper half of the diamond as input from the user.*/
#include<stdio.h>
int main()
{
    //Initializing variables
	int row_num;
	int i, j, k;
	printf("Enter a number: ");
	scanf("%d", &row_num);
	//Using for loop
	for( i = 1; i <= row_num; i++)
	{
		for( j = row_num; j > i; j--)
		{
		printf(" "); 
		} //End for loop
			for( k = 1; k <= 2*i-1; k++)
			{
				printf("*");
			}//End for loop
		
		printf("\n");
	} //End for loop
	

	for( i = row_num-1; i >= 1; i--)
	{
		for( j = row_num; j > i; j--)
		{ 
		printf(" "); 
		}
			for( k = 1; k <= (2*i-1) ; k++)
			{
				printf("*");
			}
		
		printf("\n");
	}


 	return 0;
} //End main
