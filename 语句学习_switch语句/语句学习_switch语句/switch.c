#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	/*int day = 1;
	switch (day)
	{
	case 1 :
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	default:
		printf("�������");
		break;
	}*/
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:
		m++;
	case 2:
		n++;
	case 3:
		switch (n)//switch����Ƕ��ʹ��
		{
		case 1:
			n++;
		case 2:
			m++; n++;
			break;//ֻ�����switch�����������������������case 4����ִ��
		}
	case 4:
		m++;
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n);
	return 0;
}


