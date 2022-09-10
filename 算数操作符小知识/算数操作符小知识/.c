#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int b = 6 / 5;//整数除法，商1余1，取商
	float a = 6.0 / 5.0;
	printf("%d\n", b);
	printf("%f\n", a);

	int c = 6 % 5;
	printf("%d\n", c);//两端必为整数，商1余1，取余数

	return 0;
}