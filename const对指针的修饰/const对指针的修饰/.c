#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 100;
	int n = 10;
	const int* p = &num;
	//*p = 10;//err
	p = &n;//const����*p ��ʾָ��ָ������ݲ�����ͨ��ָ�����ı� ���ı�ָ���������

	int* const pb = &num;
	//pb = &n;//err
	*pb = 10;//const����ָ����� ��ʾָ��������ܱ��ı� ��ָ��ָ������ݿ��Ա��ı�

	const int* const p = &num;//���߶����ܱ��ı�

	return 0;
}