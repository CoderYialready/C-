#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	// 位操作符

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
	printf("%d的二进制中1的个数为%d\n",a, ret);*/

	//取模 取商
	
	//15 - .......01111
    //15 % 2 = 1
    //15 / 2 = 7 - ..00111
    //7 % 2 = 1
    // 7 / 2 = 3 - ..00011
    //3 % 2 = 1
    // 3 / 2 = 1 - ..00001
    //1 % 2 = 1 
    // 1 / 2 = 0 - ..00000
    //每取一次商相当于少了最后一位

	//int a = 0;
	//scanf("%d", &a);
	//int count = 0;
	//while (a)
	//{
	//	if (a % 2 == 1)
	//	{
	//		count++;
	//	}
	//	a /= 2;
	//}
	//printf("个数：%d", count);//但是不适用于负数

	//n*(n - 1)

	//15
	//01111 - n
    //01110 - n - 1
	//01110 - n
	//01101 - n - 1
	//01100 - n
	int n = 0;
	int count = 0;
	scanf("%d", &n);

	while(n)
	{
		n = n & (n - 1);
		count++;
	}

	printf("个数:%d", count);
	return 0;
}

