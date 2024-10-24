/*Write a C program that finds the maximum element in a given m x n matrix and its position (row,
column).*/

#include<stdio.h>
int main()
{
    //initializing variables
	int row, column;
    int i, j, x, y;
    int r_value=1, c_value=1, value;
    //prompting user to input rows and columns
	printf("Enter the no. of rows of matrix: ");
	scanf("%d", &row);
	printf("Enter the no. of columns of matrix: ");
	scanf("%d", &column);
	int matrix[row][column];
	for(int i = 0; i < row; i++)//Input matrix elements
	{
		for(int j = 0; j < column; j++)
		{
			printf("Enter value in %d row %d column: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
    value=matrix[0][0];
	for( x= 0; x < row; x++)
	{
		for( y= 0; y < column; y++)
		{
			if( value < matrix[x][y])
			{
				value= matrix[x][y];
				r_value = x+1;
				c_value = y+1;
			}
		}
	}
    //Displaying final results
	printf("Maximum element is: %d \n", value);
	printf("Row  index Number: %d \n", r_value);
	printf("Column index Number: %d", c_value);
 	return 0;
} //End main