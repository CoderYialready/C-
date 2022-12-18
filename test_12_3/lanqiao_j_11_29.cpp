#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int j = 0;
	int h = 1;
	scanf("%d",&n);
	int arr[n][n]; 
	for(i = 2;i <= n;i++) 
	{
		arr[0][0] = 1;
		arr[0][h] = arr[0][h-1]+i;
		h++;
	}
	for(i = 1;i <= n-1;i++)
	{
		for(j = 0;j < n-i+1;j++)
		{
			arr[i][j] = arr[i-1][j+1] - 1;
		}
	}
	for(i = 0;i < n;i++)
	{
		for(j =0;j < n - i;j++)
		{
			printf("%d",arr[i][j]);
			if(j < n-i-1)
			printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
