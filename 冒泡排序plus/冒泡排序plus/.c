#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
	int flag = 0;//加入flag判断，若原数组有序则可避免多次判断
	int j = 0;
	for (j = 0; j < sz - 1; j++)
	{
		int i = 0;
		for (i = 0; i < sz - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tem = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tem;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}

	}
}
int main()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);

	return 0;
}