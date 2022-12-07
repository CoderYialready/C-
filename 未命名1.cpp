#include<stdio.h>

int ZM(char);
int SZ(char);
int OT(char);

int main()
{
	char str;
	int num1 = 0, num2 = 0, num3 = 0;
	for (; (str = getchar()) != '\n';)
	{
		num1 += ZM(str);
		num2 += SZ(str);
		num3 += OT(str);
	}
	printf("字母有%d个,数字有%d个,其他字符%d个\n", num1, num2, num3);
	return 0;
}
int ZM(char str)
{
	int count = 0;
	if ('A' <= str && str <= 'Z' || 'a' <= str && str <= 'z')
	{
		count += 1;
	}
	return count;
}
int SZ(char str)
{
	int count = 0;
	if ('0' <= str && str <= '9')
	{
		count += 1;
	}
	return count;
} 
int OT(char str)
{
	int count = 0;
	if(str < '0' || '9' < str && str < 'A' || str > 'Z' && str < 'a' || str > 'z')
	{
		count += 1;
    }
	return count;
}
