#include<stdio.h>
#define n 10
int main()
{
	int arr[n][n] = {0};
	int i, j, k;
	for(i = 0;i < n;i++)
	{
		for(j = 0;j <= i;j++)
		{	
			if(j == 0)
			arr[i][j] = 1;
			if(j == i)
			arr[i][j] = 1;
			if(i > 0 && j > 0)
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]; 
			}
	}
	for(i = 0;i < n;i++)
	{ 	
		for(k = 0;k < n-i;k++)
		{
			printf(" ");
		}
		for(j = 0;j <= i;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
 } 
