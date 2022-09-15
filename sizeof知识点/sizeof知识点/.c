#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	short s = 5;
	int a = 10;
	printf("%d", sizeof(s = a + 2));
	//a + 2的值放在s中，即计算的大小由s决定，而s大小为两个字节，故为2
	//sizeof在编译过程中已执行，而表达式的计算在运行过程中执行，故计算时该代码已执行结果为2
	printf("%d", s);
	//未进行计算故s值不变
	return 0;
}
//即sizeof中的表达式不参与计算