#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char arr[] = { 1,2,3,4,5,18,7,8,9,10 };
	int Max = arr[1];//相邻两数依次比较
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (Max < arr[i])
			Max = arr[i];
	}
	printf("%d", Max);
	return 0;
}