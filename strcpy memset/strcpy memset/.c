#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	/*char arr1[20] = { 0 };
	char arr2[] = "hello bite ";
	strcpy(arr1, arr2);
	printf("%s", arr1);*/
	char arr[] = "hello world";
	memset(arr, 'x', 5);
	printf("%s", arr);






	return 0;
}







