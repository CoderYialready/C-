#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*int a = 0;
	scanf("%d", &a);
	int count = 0;
	int b = 1;
	int ret = 0;
	while (count < 32)
	{
		if ((a & b) != 0)
		{
			b = b << 1;
			ret++;
		}
		else
		{
			b = b << 1;
		}
		count++;
	}
	printf("%d�Ķ�������1�ĸ���Ϊ%d\n",a, ret);*/

	//15 - .......01111
//15 % 2 = 1
//15 / 2 = 7 - ..00111
//7 % 2 = 1
// 7 / 2 = 3 - ..00011
//3 % 2 = 1
// 3 / 2 = 1 - ..00001
//1 % 2 = 1 
// 1 / 2 = 0 - ..00000
//ÿȡһ�����൱���������һλ

	int a = 0;
	scanf("%d", &a);
	int count = 0;
	while(a)
	{
		if (a % 2 == 1)
		{
			count++;
		}	
		a /= 2;
	}
	printf("������%d", count);
	return 0;
}



