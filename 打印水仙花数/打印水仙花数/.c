#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//求0~100000之间的所有水仙花数
int main()
{
	int i = 1; 
	int n = 0;
	int sum = 0;
	for (i = 0; i <= 100000; i++)
	{
		int ti = i;
		int water = i;
		int temp = i;
		while (ti)
		{
			n++;
			ti /= 10;
		}
		while (temp)
		{
			int ret = pow(temp % 10, n);
			temp /= 10;
			sum += ret;
		}
		if (sum == water)
		{
			printf("%d ", water);
		}
		n = 0;
		sum = 0;
	}
	return 0;
}
