#include <stdio.h>
int main()
{
	int n = 0, j = 0;
	int sum = 1;
	scanf("%d",&n);
	for(int i = 2; i <= n; i++)
	{
			int flag = 1;
		for(j = 2;j < i;j++)
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)	
		{
			if(n % i == 0)
			{
				if(n == i)
					printf("%d ",n);
				else
					printf("%d ",i);
				sum *= i;
			}
		}
	}
	return 0;
}
 
