#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Number(int ret)
{
	int count = 0;
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	return count;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
    int ret = a ^ b;
	int num = Number(ret);
	printf("%d\n",num);
}