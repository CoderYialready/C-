#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int count = 0;
	int i = 0;
	for (i = 100; i <= 200; i++)
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
			printf("%d\n", i);
			count++;
		}

	}
	printf("\ncount=%d\n", count);







	return 0;
}












