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
	//���������������ڴ��еĴ洢��ʽ��ͬ

	return 0;
}