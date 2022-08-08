#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//比较两个字符串不用 == 用strcmp，比较是比ASCII值
		{
			printf("登录成功");
			break;
		}
		else
		{
			printf("登录失败");
		}
	}
	if (i == 3)
	{
		printf("密码错误三次，退出登录");
	}
	return 0;
}


