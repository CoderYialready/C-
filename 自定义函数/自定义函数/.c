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
	printf("a=%d b=%d\n", a, b);//��Ҫȡ��ַ��ֻдa bֻ�ᴴ���µ�ַȡ��ֵͬ������ı�ԭ�е�a b��ֵ
	exchange(&a, &b);
	printf("a=%d b=%d\n", a, b);


	return 0;
}