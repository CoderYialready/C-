#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int is_leap_year(int n)
{
	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
}

int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//is_leap_year(y);
		if (is_leap_year(y) == 1)
		{
			printf(" %d", y);
		}


	}



	return 0;
}