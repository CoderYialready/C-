#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int i;
int main()
{
	i--;
	if (i > sizeof(i))//sizeof算出来的是unsigned int类型，比较时int 转化为unsigned int
	{
		printf(">\n");
	}
	else
	{
		printf("<\n");
	}
	return 0;
}