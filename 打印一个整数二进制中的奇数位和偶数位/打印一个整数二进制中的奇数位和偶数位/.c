#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	//00000000000000000000000000000101
	for(i = 31; i >= 1; i -= 2 )
	{
		printf("%d ", (a >> i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (a >> i) & 1);
	}
	//二进制中找到其中一位可以用 移位操作符 使其移到第一位
	return 0;
}