#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "asdfgh";
	printf("%d %d\n", sizeof(arr), strlen(arr));//长度不计算\0,大小计算

	/*int arr1[2][] = {{0,1,2},{3,4,5}};//行不能省
	int arr2[][3] = {{0,1,2},{3,4,5}};//yes
	int arr3[2][3] = {{0,1,2},{1,2,3},{5}};//行数不够
	int arr4[][3.] = {{1,2,3},{},{2,3}};*/ //不能为空


	return 0;
}