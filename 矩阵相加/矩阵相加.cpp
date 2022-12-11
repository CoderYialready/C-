#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Row 3
#define Col 3 

void Add(int arr1[Row][Col],int arr2[Row][Col],int arr3[Row][Col]);

int main()
{
	srand((unsigned)time(NULL));
	int arr1[Row][Col];
	int arr2[Row][Col];
	int arr3[Row][Col];
	for(int i = 0;i < Row;i++)
	{
		for(int j = 0;j < Col;j++)
		{
			arr1[i][j] = rand()%10;
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(int i = 0;i < Row;i++)
	{
		for(int j = 0;j < Col;j++)
		{
			arr2[i][j] = rand()%10;
			printf("%d ",arr2[i][j]);
		}
		printf("\n");	
	}
	Add(arr1,arr2,arr3);
	for(int i = 0;i < Row;i++)
	{
		for(int j = 0;j < Col;j++)
		{
			printf("%d ",arr3[i][j]);
		}
		printf("\n");	
	}
	return 0;
}

void Add(int arr1[Row][Col],int arr2[Row][Col],int arr3[Row][Col])
{
	for(int i = 0;i < Row;i++)
		{
			for(int j = 0;j < Col;j++)
			{
				arr3[i][j] = arr1[i][j] + arr2[i][j];
			}
			printf("\n");	
		}	
}


