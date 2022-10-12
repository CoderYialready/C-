#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
size_t my_strlen(const char *arr1)//const 可以防止arr内容被改变
{
	size_t ret = 0;//size_t 代表无符号整形即 unsigned int 避免负数出现
	assert(arr1);//避免arr为空指针的情况
	while (*arr1++ != '\0')
	{
		ret++;
	}
	return ret;
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);
}


