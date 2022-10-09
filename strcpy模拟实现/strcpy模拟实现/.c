#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

void my_strcpy(char* dest, const char* source)//加入 const 是为了防止二者顺序写反
{
	assert(dest != NULL);//断言 若不符合其中条件则会报错并指出错误处
	assert(source != NULL);
	while (*dest++ = *source++)//先赋值，；利用‘0’的真假进行判断
	{
		;
	}
}
int main()
{
	char arr1[] = "xxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}