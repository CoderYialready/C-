#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 9;
	float* pFloat = (float*) & n;
	printf("%d\n",n);
	printf("%f\n", *pFloat);

	*pFloat = 9.0;
	printf("%d\n", n);
	printf("%f\n", *pFloat);
	//浮点数和整数在内存中的存储方式不同

	return 0;
}