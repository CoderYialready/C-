#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//test1 ����printf���С�ɻ�
int main()
{
	printf("   ***\n");
	printf("**********\n");
	printf("**********\n");
	printf(" **   **\n");
	printf(" **   **\n");
	//test2 �ж�һ�����Ƿ���Ա�5����
	int m = 0;
	scanf("%d", &m);
	if (m % 5 == 0)
		printf("YES");
	else
		printf("NO");





	return 0;
}



