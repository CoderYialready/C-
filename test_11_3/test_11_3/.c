#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b;
	char ch;
	while (1)
	{
		scanf("%d%d%c",&a,&b,&ch);
		switch (ch)
		{
		case '+':
			printf("a + b = %d", a + b);
			break;
		case '-':
			printf("a - b = %d", a - b);
			break; 
		case '*':
			printf("a * b = %d", a * b);
			break; 
		case '/':
			printf("a / b = %d", a / b);
			break; 
		case '%':
			printf("a % b = %d", a % b);
			break;
		default:
			printf("����������������롣");

		}
	}
	return 0;
}