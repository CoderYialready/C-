#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int cif(int n, int k)
{
	int o = n;
	int m = 1;
	while (m <= k)
	{
		int p = n;
		o *= p;
		m++
	}
	return o;
}
int main()
{
	int n = 0; .
		int k = 0;
	scanf("%d %d", &n, &k);
	cif(n, k);
	printf("%d\n", cif);
	return 0;
}