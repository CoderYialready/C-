#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N_values 5
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	//float values[N_values];
	//float* vp;
	//for (vp = &values[0]; vp < &values[N_values];);//调整部分可以省略
	//{
	//	*vp++ = 0;
	//}

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int* pend = arr + 9;
	while (p <= pend)
	{
		printf("%d ",*p);
		p++;
	}

	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d", &arr1[9] - &arr1[0]);
	printf("\n");
	//指针-指针得到两个指针间的元素个数 且两个指针要指向同一块空间
	//利用这一点可以编写一个my_stlen
	int ret = my_strlen("abc");
	printf("%d\n", ret);

	return 0;
}



