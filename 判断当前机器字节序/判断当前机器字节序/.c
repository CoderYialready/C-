#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;//返回1为小端，返回2为大端 *p即可表示1 0，无需return1 0
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}