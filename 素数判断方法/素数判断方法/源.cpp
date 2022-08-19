#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int is_leap_year(int n)
//{
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//is_leap_year(y);
//		if (is_leap_year(y) == 1)
//		{
//			printf(" %d", y);
//		}
//
//
//	}
//
//
//
//	return 0;
//}
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
