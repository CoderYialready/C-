#include <stdio.h>
#include <string.h>

int string(char*arr1,char *arr2,int len)
{
	strncat(arr1,arr1,len);//׷����len���ַ��� 
	char*str = strstr(arr1,arr2);//�ж��Ƿ�Ϊ�Ӵ� 
	return str != NULL;//����NULLʱΪ�淵��1������Ϊ�� 
}

int main()
{
	char arr1[20] = "AABBCD";//����λ��ʹ�����׷�� 
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
