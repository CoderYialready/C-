#include <stdio.h>

int shu_(int ret)
{
	int a = 0;
	int j = 0,k = 0;
		for(k = 1;k < ret;k++)
		{
			if(ret % k == 0 && ret != k)
			{
				j += k;
				a = j;
			}
		}
	return a;
}
void shu()
{
	int sum = 0;
	int n = 0,i = 0;
	for(n = 1;n <= 500;n++)
	{
		sum = 0;
		for(i = 1;i < n;i++)
		{
			if(n % i == 0 && i != n)
			{
				sum += i;
			}
		}
		if(shu_(sum) == n)
		{
			printf("%d--%d ",n,sum);
		}
	}	

}
int main()
{
	shu();	
	return 0;
 } 
