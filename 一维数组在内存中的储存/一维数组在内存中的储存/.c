#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	/*int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("&arr[%d]= %p\n", i, &arr[i]);
	}*/
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",*p);
		p++;
	}

	return 0;
}