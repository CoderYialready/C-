#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

void my_strcpy(char* dest, const char* source)//���� const ��Ϊ�˷�ֹ����˳��д��
{
	assert(dest != NULL);//���� ������������������ᱨ��ָ������
	assert(source != NULL);
	while (*dest++ = *source++)//�ȸ�ֵ�������á�0������ٽ����ж�
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