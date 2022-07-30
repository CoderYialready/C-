#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*int day = 1;
	switch (day)
	{
	case 1 :
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	default:
		printf("输入错误");
		break;
	}*/
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)//switch可以嵌套使用
		{
		case 1:
			n++;
		case 2:
			m++; n++;
			break;//只是这个switch结束，不是整个程序结束，case 4继续执行
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}


