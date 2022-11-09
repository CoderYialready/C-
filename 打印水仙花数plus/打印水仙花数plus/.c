#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//求0~100000之间的所有水仙花数
int main()
{
	int i = 1;
	for (i = 0; i <= 100000; i++)
	{
		int n = 0;
		int temp = i;
		while (temp)
		{
			n++;
			temp /= 10;
		}
		temp = i;
		int sum = 0;
		while (temp)
		{
			sum += pow(temp % 10, n);
			temp /= 10;
		}
		if (sum == i)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
