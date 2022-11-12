#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void test(int** p2)
{
	** p2= 20;
}
int main()
{
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	test(ppa);
	//test(&pa);
	printf("%d",a);
	int* arr[10] = { 0 };
	test(arr);
	printf("%d", a);

	return 0;
}