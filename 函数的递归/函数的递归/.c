#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//接受一个整形值，按顺序打印它的每一位  %u无符号整形
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%u", &num);
	print(num);
	return 0;
}