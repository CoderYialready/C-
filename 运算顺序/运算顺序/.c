#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	//��VS��linxϵͳ�е���������ͬ,��Ϊ����˳��ͬ
	//VS i = 4 ���ӷ�4 + 4 + 4 = 12
	//linx i = 3 3 + 3 = 6 i = 4 6 + 4 = 10
	//ͬʱҲҪ����д����:a*f + b*c + v*k ֮��Ĵ��룬���ִ�����ڶ�������˳��
	return 0;
}