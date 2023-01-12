#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");

	while (1)
	{
		printf("注意，您的电脑即将在一分钟后关机，输入我是猪进行撤销");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
	    {
		    system("shutdown -a");
			break;
		}
	}
	return 0;
}





















