#include <stdio.h>
#include <string.h>

int string(char*arr1,char *arr2,int len)
{
	strncat(arr1,arr1,len);//追加字len个字符串 
	char*str = strstr(arr1,arr2);//判断是否为子串 
	return str != NULL;//不是NULL时为真返回1，否则为假 
}

int main()
{
	char arr1[20] = "AABBCD";//留出位置使其可以追加 
	char arr2[20] = "BBCDAA";
	int len = strlen(arr1);
	int ret = string(arr1,arr2,len);
	if(ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}
