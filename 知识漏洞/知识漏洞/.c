#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "asdfgh";
	printf("%d %d\n", sizeof(arr), strlen(arr));//���Ȳ�����\0,��С����

	/*int arr1[2][] = {{0,1,2},{3,4,5}};//�в���ʡ
	int arr2[][3] = {{0,1,2},{3,4,5}};//yes
	int arr3[2][3] = {{0,1,2},{1,2,3},{5}};//��������
	int arr4[][3.] = {{1,2,3},{},{2,3}};*/ //����Ϊ��


	return 0;
}