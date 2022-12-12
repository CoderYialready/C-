#include <stdio.h>

int bufa(int*,int);

int main()
{
	int bu = 0;
	int n = 0;
	int count;
	scanf("%d",&n);
	count = n;
	int arr[n];
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&arr[i]);
	} 
	while(1)
	{
		n = count;
		int sum = 0;
		int tmp = arr[n-1];
		while(n > 1)
		{
			arr[n - 1] /= 2;
			arr[n-1] += arr[n-2]/2;
			n--;
		}
		arr[0] /= 2;
		arr[0] += tmp/2;
		bu += bufa(arr,count);
		for(int j = 0;j < count;j++)
		{
			sum += arr[j];
		}
		if(sum == arr[1]*count)
		{
			printf("%d",bu);
			break;
		}
	}
	return 0;
} 

int bufa(int*arr,int count)
{
	int k = 0;
	while(count > 0)
	{
		if(arr[count - 1]%2 != 0)
		{
			arr[count - 1] += 1;
			k++;
		}
		count--;
	}
	return k;
}



