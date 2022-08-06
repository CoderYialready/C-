#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int f = 7;
	int se = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = se - 1;
	while (left <= right)
	{
		int mid = (left + right)/2;

		if (arr[mid] < f)
		{
			 left = mid + 1;
		}
		else if (arr[mid] > f)
		{
			 right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}


