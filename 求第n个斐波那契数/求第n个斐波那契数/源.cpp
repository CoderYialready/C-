#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fib(int m)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (m > 2)
	{
		c = a + b;
		a = b;
		b = c;
		m--;//需要--否则死循环
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	return 0;
}