#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	short s = 5;
	int a = 10;
	printf("%d", sizeof(s = a + 2));
	//a + 2��ֵ����s�У�������Ĵ�С��s��������s��СΪ�����ֽڣ���Ϊ2
	//sizeof�ڱ����������ִ�У������ʽ�ļ��������й�����ִ�У��ʼ���ʱ�ô�����ִ�н��Ϊ2
	printf("%d", s);
	//δ���м����sֵ����
	return 0;
}
//��sizeof�еı��ʽ���������