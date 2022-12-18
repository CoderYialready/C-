#include <stdio.h>
int main()
{
	int n = 0;
	int arr1[100];
	while(1)
	{
		scanf("%d",&arr1[n]);
		if(arr1[n] == EOF)
		break; 
		n++;
	} 
	for(int i = 0;i < n-1;i++)
	{
		for(int j = i;j < n - i -1;j++)
		{
			if(arr1[j]%2 == 0 && arr1[j+1]%2 != 0)
			{
				int temp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = temp;
			}	
		}
	}
	for(int i =0;i < n;i++)
	{
		printf("%d ",arr1[i]);
	} 
	return 0;
}
