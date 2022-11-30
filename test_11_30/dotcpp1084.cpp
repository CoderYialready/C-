#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d",&n);
	for(i = 2; i <= n;i++)
	{
		int flag = 1;
		int j =0;
		for(j = 2;j < i;j++)
		{
			if(i%j==0)	
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
		printf("%d\n",i);
	}
	return 0;
 } 
