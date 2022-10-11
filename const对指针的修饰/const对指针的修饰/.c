#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 100;
	int n = 10;
	const int* p = &num;
	//*p = 10;//err
	p = &n;//const修饰*p 表示指针指向的内容不可以通过指针来改变 但改变指针变量可以

	int* const pb = &num;
	//pb = &n;//err
	*pb = 10;//const修饰指针变量 表示指针变量不能被改变 但指针指向的内容可以被改变

	const int* const p = &num;//两者都不能被改变

	return 0;
}