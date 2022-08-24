#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//不创建临时变量实现字符串长度计算
// 
//int my_strlen(char* n）
//{
//	if (*n != '\0')
//	{
//		return 1 + my_strlen(n+1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hui";
//	printf("%d", my_strlen(arr));
//
//
//	return 0;
//}

//函数计算n的阶乘

int fac(int l)
{
	if (l <= 1)
	{
		return 1;
	}
	else if (l >= 2)
	{
		return l * fac(l - 1);
	}
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	int ret = fac(m);
	printf("%d", ret);
	return 0;
}