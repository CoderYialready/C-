#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	short* p = (short*)arr;//01 00 00 00 | 02 00 00 00 | 03 00 00 00 | 04 00 00 00 | 05 00 00 00
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;//+1跳过两个字节操作01 00 后面的 00 00 +2 +3以此类推
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}