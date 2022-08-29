#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int l = 0;
	int j = 0;
	for (j = 1; j <= 9; j++)
	{
		for (l = 1; l <= j; l++)
		{
			printf("%d*%d=%-2d ", j, l, j * l);//%2d打印两个数字，若为一个数字则前面有一个空格 %-2%d则可以向左对齐
		}
		printf("\n");//会跳出循环l会再赋值为一
	}
	return 0;
}