#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N_values 5
int main()
{
	int values[N_values] = { 1,2,3,4,5 };
	int* vp;
	/*for (vp = &values[N_values]; vp > &values[0];)
	{
		*--vp;
	}*/
	for (vp = &values[N_values - 1]; vp >= &values[0];vp--)
	{
		*vp = 0;
	}
	//�ڶ��ֱ�д�������ϱ�׼
	//����ָ������Ԫ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
	//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�
	return 0;
}