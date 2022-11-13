#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
	/*int i = 0;
	int line = 0;
	scanf("%d",&line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i ; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(i +1) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(line - 1- i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
//	return 0;
//}
	//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水, 给20元，可以喝多少汽水(编程实现)。
int main()
{
	int money = 0;
	printf("请输入您的现金:");
	scanf("%d", &money);
	int total = money;
	int empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("可以喝%d瓶汽水", total);
	return 0;
}
