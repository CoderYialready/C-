#include <stdio.h>
#define N 100
void average(int*arr,int j)
{	
	int s = j;
	int sum = 0;
	while(j)
	{
		sum += arr[j-1];
		j--;
	}
	printf("%d",sum/s);
}
int main()
{
	int n = 0;
	scanf("%d",&n);
	int arr[N];
	int j = n;
	while(n)
	{
		scanf("%d",&arr[n-1]);
		n--;
	}
	//int sz = sizeof(arr)/sizeof(arr[0]);
	average(arr,j);
	return 0;
}
