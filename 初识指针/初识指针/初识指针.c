#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;//a���ڴ���Ҫ����ռ� 4��byte
//	printf("%p\n", &a);//%p ר�Ŵ�ӡ��ַ
//	int* pa = &a;//* ˵��pa��ָ����� int ˵��ִ�еĶ�����int���͵�
//	//��ͬ	
//	char ch = 'w';
//    char* pc = &ch;
//    printf("%p\n", pa);
//    printf("%p\n", pc);
//
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(long long*));
	printf("%d\n", sizeof(long*));
	//32λ 32bit 4byte
//64λ 64bit 8byte


	return 0;
}






