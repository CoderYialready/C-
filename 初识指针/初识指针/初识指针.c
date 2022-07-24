#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 10;//a在内存中要分配空间 4个byte
//	printf("%p\n", &a);//%p 专门打印地址
//	int* pa = &a;//* 说明pa是指针变量 int 说明执行的对象是int类型的
//	//下同	
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
	//32位 32bit 4byte
//64位 64bit 8byte


	return 0;
}






