#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int* arr, int sz)
{
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
}
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 6,7,8,9,10 };
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	print(arr1, sz);
	print(arr2, sz);

	return 0;
}