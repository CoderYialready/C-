#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void print(int(*arr)[5], int i, int j)
{
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(*(arr + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print(arr, 3, 5);


	return 0;
}