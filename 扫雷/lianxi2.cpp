#include <stdio.h>
int zy(int i ,int n)
{
	int j = 0;
	while(1)
	{
		int j = 2;
		for(;i <= n; i++)
		{
			int flag = 1;
			for(;j < i;j++)
			{
				if(i % j == 0)
				{
					flag = 0;
					break;
				}
			}
			if(flag == 1)
			{
				return i;
			}
			j++;
		}
	}
}

int main()
{
	int sum = 0,i = 2;
	int n = 0;
	scanf("%d",&n);
	while(sum != n)
	{
		i = zy(i,n);
		sum *= i;
		if(n % i == 0) 
		printf("%d ",i);
		i += 1;
	}
//	i = zy(i,n);
//	printf("%d",i);
//	
	return 0;
}
