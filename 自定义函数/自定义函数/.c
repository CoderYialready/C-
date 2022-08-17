#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void exchange(int* pa, int* pb)
{
	int z = *pb;
	*pb = *pa;
	*pa = z;
}


int main()
{
	int a = 10;
	int b = 20;
	printf("a=%d b=%d\n", a, b);//需要取地址，只写a b只会创建新地址取相同值，不会改变原有的a b的值
	exchange(&a, &b);
	printf("a=%d b=%d\n", a, b);


	return 0;
}