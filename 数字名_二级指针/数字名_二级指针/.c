#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//ָ����������

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	//arr[2] <==> *(arr + 2) <==> *(p + 2) <==> *(2 + p) <==> *(2 + arr) == 2{arr]
	//arr[2] <==> 2[arr]
	//" [ ] "��һ����������2��arr�ǲ�������ͬ����2[p] p[2]
	printf("%d\n", arr[2]);
	printf("%d\n", 2[arr]);
	printf("%d\n", p[2]);
	printf("%d\n", 2[p]);
	return 0;

	//����ָ��

	int a = 10;
	int* pa = &a;
	int** ppa = &pa;//paҲ�Ǳ�����&paȡ��pa���ڴ��еĵ�ַ
	//int* *ppa int*˵��pa������int*��*ppa˵��ppa��ָ�����
}