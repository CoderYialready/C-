#include <stdio.h>
void bubble_sort(int *arr,int sz)
{
	int i = 0;
	for(i = 0;i < sz - 1;i++)//计算趟数 
	{
		int j = 0;
		for(j = 0;j < sz-1-i;j++)//计算交换次数 
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
int main()
{	//int i = 0;
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	bubble_sort(arr,sz);
	for(int i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
