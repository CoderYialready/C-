#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
size_t my_strlen(const char *arr1)//const ���Է�ֹarr���ݱ��ı�
{
	size_t ret = 0;//size_t �����޷������μ� unsigned int ���⸺������
	assert(arr1);//����arrΪ��ָ������
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


