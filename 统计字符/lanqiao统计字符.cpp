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
		num[str[i] - 'A']++;//每个字符减去最小的字符后会会在数组中依次排列 ，有特定位置 
		maxnum = num[str[i] - 'A'] > maxnum?num[str[i] - 'A']:maxnum;     
		//哪个字符对应的出现次数最多 
	}
	for(int j = 0;j <= 26;j++)
	{
		if(maxnum == num[j])//j相当于以字符A--Z为下标 
		{
			printf("%c",'A' + j);//依次访问A——Z 
		}
	}
	
	return 0;
}
