/*Create a 3D array representing 2 pages of a 3x3 matrix. Initialize it and find the sum of all the
elements on each page. */

#include<stdio.h>
int main()
{   
    //DECLARING VARIABLES
    int i,j,k;
	int array[2][3][3]= 
	{
		{	{ 2, 3, 4},
			{ 38, 4, 5},
			{ 5, 8, 7}},
        {	{ 8, 9, 10},
			{ 12, 11, 12},
			{ 4, 13, 14}}
    };
	for( i = 0; i < 2; i++)//LOOP FOR PRINTING THE MATRIX
	{
		for( j = 0; j < 3; j++)
		{
			for( k = 0; k < 3; k++)
			{
				printf("%d  ", array[i][j][k]);
			}
			printf("\n");
		}
		printf("\n \n");
    }
	int sum_page1 = 0, sum_page2 = 0;
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			for(int k = 0; k < 3; k++)
			{
				//APPLYING CONDITIONS
				if( i == 0)
				{
					sum_page1 += array[i][j][k];
				}
				else if( i == 1)
				{
					sum_page2 += array[i][j][k];
				}
			}
		}
	}
	printf("The sum of 1st page elements is: %d", sum_page1);
	printf("\nThe sum of 2nd page elements is: %d", sum_page2);
 	return 0;
} //End main