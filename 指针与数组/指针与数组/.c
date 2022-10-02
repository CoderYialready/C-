#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N_values 5
int main()
{
	int values[N_values] = { 1,2,3,4,5 };
	int* vp;
	/*for (vp = &values[N_values]; vp > &values[0];)
	{
		*--vp;
	}*/
	for (vp = &values[N_values - 1]; vp >= &values[0];vp--)
	{
		*vp = 0;
	}
	//第二种编写方法不合标准
	//允许指向数组元素与指向数组最后一个元素后面的那个内存位置的指针比较，
	//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较
	return 0;
}