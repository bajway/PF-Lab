/*Write a C program to multiply two matrices of size 3x3 and display the result matrix.*/

#include<stdio.h>
int main()
{
    //Declaring variables
	int arr1[3][3];
	int arr2[3][3];
    int product[3][3];
	int i, j, a, b, c;
	for( i = 0; i < 3; i++)
	{
		for(  j =0; j < 3; j++)
		{
			printf("Enter elements of first matrix: ");
			scanf("%d", &arr1[i][j]);	
		}
	}
	
	for( i = 0; i < 3; i++)
	{
		for(  j = 0; j < 3; j++)
		{
			printf("Enter elements of second matrix ");
			scanf("%d", &arr2[i][j]);
		}
	}

	printf("1st matrix: \n");
	for( i = 0; i < 3; i++)
	{
		for( j = 0; j < 3; j++)
		{
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}
    
	                                                                                                                                                    
	printf("2nd Matrix: \n");
	for( i = 0; i < 3; i++)
	{
		for( j = 0; j < 3; j++)
		{
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	// Initializing the product matrix to zero
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product[i][j] = 0;
        }
    }
	for( a = 0; a < 3; a++)// Calculating product and storing
		{
			for( b = 0; b < 3; b++)
			{
				for( c =0; c < 3; c++)
				{
				 	 product[a][b] = arr1[a][c] * arr2[c][b];
				}
			}
		}
		
	printf("Product of 1st and 2nd matrix is: \n");
	for( i = 0; i < 3; i++) //Printing product of  matrices
	{
		for( j = 0; j < 3; j++)
		{
			printf("%d\t", product[i][j]);
		}
		printf("\n");
	}

 	return 0;
} //End main