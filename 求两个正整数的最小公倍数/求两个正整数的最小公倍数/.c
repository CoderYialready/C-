#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int min = 0;
	int max = 0;
	
		if (a < b)
		{
		     min = a;
			 max = b;
		}
		else if (a > b)
		{
			 max = a;
			 min = b;
		}
		else
		{
			max = a;
			min = b;
		}

		if (max % min != 0)
	{
		if ((max % min) == 0)
		{
			printf("%d", max);
		}
		else if ((max % min) != 0)
		{
			while (((max % min) != 0))
			{
				max *= 2;
			}
			printf("%d", max);
		}
	}
	else if (max / min == 1 && max % min == 0)
	{
		printf("%d", max);
	}
	else if (max / min != 1 && max % min == 0)
		{
			printf("%d", max);
		}
	return 0;
}