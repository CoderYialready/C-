#include <stdio.h>
#include <string.h>
int main()
{
	int maxnum = 0;
	int num[30] = {0};
	char str[1000000];
	gets(str);
	int len = strlen(str);
	for(int i = 0;i < len;i++)
	{
		num[str[i] - 'A']++;//ÿ���ַ���ȥ��С���ַ��������������������� �����ض�λ�� 
		maxnum = num[str[i] - 'A'] > maxnum?num[str[i] - 'A']:maxnum;     
		//�ĸ��ַ���Ӧ�ĳ��ִ������ 
	}
	for(int j = 0;j <= 26;j++)
	{
		if(maxnum == num[j])//j�൱�����ַ�A--ZΪ�±� 
		{
			printf("%c",'A' + j);//���η���A����Z 
		}
	}
	
	return 0;
}
