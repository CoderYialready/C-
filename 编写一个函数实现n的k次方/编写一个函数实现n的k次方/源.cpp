#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int cif(int n, int k)
//{
//	int p = n;
//	int m = 1;
//	while (m <= k)
//	{
//		n *= p;
//		m++;
//	}
//	return n;
//}

//未考虑其他情况
double cif(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	if (k > 0)
	{
		return n * cif(n, k - 1);
	}
	else
	{
		return 1.0 / (cif(n, -k));
	}
}


int main()
{
	int n = 0; 
		int k = 0;
	scanf("%d %d", &n, &k);
	double sum = cif(n, k);
	printf("%lf\n", sum);
	return 0;
}