#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void print(int* arr, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ",*arr);
//		arr++;
//	}
//}
int main()
{
	/*int i,a, n;
	int ret = 0;
	int sum = 0;
	scanf("%d%d",&a,&n);
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("sum = %d",sum);*/

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	////int(*parr)[10] = arr;
	//int size = sizeof(arr) / sizeof(0);
	//print(arr,size);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	int* pend = arr + size - 1;
	while (p <= pend)
	{
		printf("%d ",*p);
		p++;
	}
	return 0;
}