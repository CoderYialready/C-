#include <stdio.h>
#include <string.h>
void tj(char* c,int len)
{
	int shu = 0,zm = 0,ot = 0;
	int a=0,b=0,d=0,n;
	for(n = 1;n <= len;n++)
	{
		if(*c >= '0' && *c <= '9' )
			shu++;
		else if((*c >= 'A' && *c <= 'Z')||  (*c >= 'a' && *c <= 'z'))
			zm++;
		else
			ot++;
			c++;
	}
		printf("数字%d个 字母%d个 其他%d个",shu,zm,ot);
}
int main()
{
	char c[100];
	gets(c);
	int len = strlen(c);
	tj(c,len);
	return 0;
 } 
