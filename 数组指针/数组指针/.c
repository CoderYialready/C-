#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{

	int arr[5] = { 1,2,3,4,5 };
	int(*parr)[5] = &arr;

	printf("%p\n",parr);
	printf("%p\n", parr +1);

	return 0;
}