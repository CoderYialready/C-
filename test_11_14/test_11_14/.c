#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double a, sum = 0, n = 1, max = 0, min = 100;
	while (n <= 7)
	{
		scanf("%lf", &a);
		if (a > max)
			max = a;
		if (a < min)
			min = a;
		sum += a;
		n++;
	}
	//printf("%lf", sum);
	printf("%lf\n", max);
	printf("%lf\n", min);
	printf("%lf\n", sum - max - min);
	return 0;
}