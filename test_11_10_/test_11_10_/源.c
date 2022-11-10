#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	/*int max, min;
	int b = 0;
	int c = 100;
	int a;
	printf("请输入成绩:\n");
	while (1)
	{
		scanf("%d",&a);
		if (a < 0 || a > 100)
		{
			break;
		}
		if (a > b)
		{
			max = a;
			b = a;
		}
		if (a < c)
		{
			min = a;
			c = a;
		}
	}
	if (a < 0 )
	{
		printf("max = %d ",max);
		printf("min = %d ",min);
	}
	if (a > 100)
	{
		printf("成绩输入错误，请重新输入。\n");
	}*/

	/*int i = 0;
	for (i = 100; i < 1000; i++)
	{
		int sum = 0;
		int temp = i;
		while (temp)
		{
			sum += pow(temp % 10, 3);
			temp /= 10;
		}
		if (sum == i)
		{
			printf("%d ",i);
		}
	}*/

	int i = 0;

	for (i = 10; i < 101; i++)
	{
		int fal = 1;
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				fal = 0;
				break;
			}
		}
		if (fal == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}