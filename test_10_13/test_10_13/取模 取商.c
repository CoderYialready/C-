#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//15 - .......01111
//15 % 2 = 1
//15 / 2 = 7 - ..00111
//7 % 2 = 1
// 7 / 2 = 3 - ..00011
//3 % 2 = 1
// 3 / 2 = 1 - ..00001
//1 % 2 = 1 
// 1 / 2 = 0 - ..00000
//每取一次商相当于少了一个1
//
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		while (a)
		{
			count++;
		}
		a / 2;
	}
	printf("个数：%d", count);
	return 0;
}
