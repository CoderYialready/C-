#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	char str[1001];
	scanf("%d",&n);
	getchar();//��ֹ��gets���� 
	for(i = 0;i < n;i++)
	{
		gets(str);
		puts(str);
		printf("\n");
	}
	while(scanf("%s",&str) != EOF)
	{
		printf("%s\n",str);
		printf("\n");
	}
	//�ֶδ�����������ȴ���n֮�ڵ����� ������ٴ���n֮������� ��� 

	return 0; 
}
