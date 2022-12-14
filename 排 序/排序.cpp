#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Paixu(int*,int); 

int main()
{
	srand((unsigned)time(NULL));
	int arr[10];
	for(int i = 0;i < 10;i++)
	{
		arr[i] = rand()%10;
	}
	Paixu(arr,10);
	for(int j = 0;j < 10;j++)
	{
		printf("%d ",arr[j]);
	}
	return 0;
}

void Paixu(int*arr,int len)
{
	for(int i = 0;i < len - 1;i++)
	{
		int left = 0;
		int right = left + 1;
		for(int j = 0;j < len - i - 1;j++)
		{
			if(arr[left] > arr[right])
			{
				int tmp = arr[left];
				arr[left] = arr[right];
				arr[right] = tmp;
			}
			left++;
			right++;
		}
	}
}

