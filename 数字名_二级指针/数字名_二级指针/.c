#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//指针与数组名

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	//arr[2] <==> *(arr + 2) <==> *(p + 2) <==> *(2 + p) <==> *(2 + arr) == 2{arr]
	//arr[2] <==> 2[arr]
	//" [ ] "是一个操作符，2与arr是操作数，同理有2[p] p[2]
	printf("%d\n", arr[2]);
	printf("%d\n", 2[arr]);
	printf("%d\n", p[2]);
	printf("%d\n", 2[p]);
	return 0;

	//二级指针

	int a = 10;
	int* pa = &a;
	int** ppa = &pa;//pa也是变量，&pa取出pa在内存中的地址
	//int* *ppa int*说明pa类型是int*，*ppa说明ppa是指针变量
}