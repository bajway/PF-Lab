/*Write a C program to find the saddle point(s) in a given 3x3 matrix. A saddle point is an element
that is the smallest in its row and the largest in its column.*/
#include<stdio.h>

int main()
{
    int i, j, x, y, z;
	int arr[3][3];
	
	for( i = 0; i < 3; i++)
	{
		for( j =0; j < 3; j++)
		{
			printf("Enter elements of matrix: ");
			scanf("%d", &arr[i][j]);
			
		}
	}
	
	for(int i = 0; i < 3; i++)
	{
		for( int j =0; j < 3; j++)
		{
		 	printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	for( x = 0; x < 3; x++)
	{
		for( y = 0; y < 3; y++)
		{
			int flag = 1;
			for(z = 0; z < 3; z++)
			{
				if(y != z)
				{
					if ( arr[x][y] > arr[x][z] )
					{
						flag = 1;
						// element is less than the order
						break;
					}
					
					if(flag == 1)
					{
						flag = 0;
						if(arr[x][y] < arr[z][y])
						{
							flag = 1;
							break;
						}
					}
				}
			}
			if (flag) 
				{
                printf("elements which are saddle: %d\n", arr[x][y]);
                flag = 0;
            	}
		}
	}

 	return 0;
} //End main

