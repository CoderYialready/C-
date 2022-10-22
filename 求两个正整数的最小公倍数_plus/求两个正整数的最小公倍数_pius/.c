#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int max = a > b ? a : b;
	int min = a < b ? a : b;
	int i = 0;
	for (i = 1; ; i++)
	{
		if (max * i % min == 0)
		{
			printf("%d", max * i);
			break;
		}

	}
	return 0;
}