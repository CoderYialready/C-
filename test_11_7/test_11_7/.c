#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*int a, b,t1;
	scanf("%d%d",&a,&b);
	t1 = a < b ? a : b;
	while (a % t1 != 0 || b % t1 != 0)
	{
		t1--;
	}
	printf("最大公约数是%d", t1);

	return 0;*/
	//int i = 1, n = 0;
	//while(i <= 1000)
	//{
	int i = 1; 
	for (i = 1; i <= 1000; i++)
	{
		int j = 0;
		int fal = 1;
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
			//printf("%d\n", i);
			int n = 0;
			int temp = i;
			int ret = i;
			while (temp)
			{
				n++;
				temp /= 10;
			}
			 temp = i;
			//printf("%d",n);
			if (i >= 11)
			{
				if (n == 2 && ((ret %= 10) == (temp /= 10)))
				{
					printf("%d ", i);
				}
				else if (n == 3 && ((ret %= 10) == (temp /= 100)))
				{
					printf("%d ", i);
				}
			}
		}
	}
	return 0;
}

