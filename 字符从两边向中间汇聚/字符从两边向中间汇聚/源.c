#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	    char arr1[] = "life is fucking movie!!!!!";
		char arr2[] = "##########################";
		int left = 0;
		int right = strlen(arr1)-1;
		while (left <= right)
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			Sleep(1000);//Ë¯ÃßÒ»Ãë
			system("cls");//Çå¿ÕÆÁÄ»
			left++;
			right--;
		}
		printf("%s\n",arr1);
	return 0;
}




