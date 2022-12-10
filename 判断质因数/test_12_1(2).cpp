#include <stdio.h>

int Su(int n)
{
	for(int i = 2; i < n;i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int Sus(int *arr)
{
	int k = 0;
	int n = 0;
	int j = 0;
	for(n = 1;n < 10;n++)
	{
		for(j = 1;j < 10;j++)
		{
			int a = n*10+j; 
			int b = j*10+n;
			if(Su(a) == 1 && Su(b) == 1)
			{
				arr[k] = a;
				arr[k+1] = b;
				k += 2;
			}
		}
	}
	return k;
}

int main()
{
	int arr[100];
	int len = Sus(arr);
	for(int i = 0;i < len;i+=2)
	{
		printf("%d-%d\n",arr[i],arr[i+1]);
	}
	return 0;
 } 
