#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 1;
	int n = 1;
	int fal = 0;
	for (n = 1; n <= 3; n++)
	{
		m *= n;//在已计算的阶乘基础上进行运算，使其简便
		fal += m;


	}
	printf("%d\n", fal);//实现1！+2！+3！

	return 0;
}









