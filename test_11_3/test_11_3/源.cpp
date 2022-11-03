#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	char ch;
	int c = 1;
	while (c)
	{
		scanf("%d%d", &a, &b);
		getchar();
		scanf("%c", &ch);
		switch (ch)
		{
		case '+':
			printf("a + b = % d", a + b);
			c = 0;
			break;
		case '-':
			printf("a - b = % d", a - b);
			c = 0;
			break;
		case '*':
			if (b != 0)
			{
			printf("a * b = % d", a * b);
			c = 0;
			break;
			}
			else
			{
				printf("Error!!!\n");
				break;
			}
		case '/':
			if (b != 0)
			{
				printf("a / b = % d", a / b);
				c = 0;
				break;
			}
			else
			{
				printf("Error!!!\n");
				break;
			}
		case '%':
			printf("a % b = % d", a % b);
			c = 0;
			break;
		default:
			printf("输入错误，请重新输入。\n");
		}
	}
	return 0;
}