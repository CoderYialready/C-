

//��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��
//ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
#include<stdio.h>

int cow(int n)
{
	if(n <= 4)//��3��Ϊ4����һ��Ƕ�ף���ʡ�˿ռ� 
		return n;
	else
		return cow(n - 1) + cow(n - 3); 
}

int main()
{
	int n = 0;
	while(scanf("%d",&n) && n)
		printf("%d ",cow(n));
	return 0;
 } 
