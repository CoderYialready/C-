#include<stdio.h>
int main()
{
	int d;
	int n=0;
	int j=0;
	int c=0;
	int i=1;
	int count1=0;
	int count2=0;
	scanf("%d %d",&d,&c);
		int a[d];
		int b[d];
	for(i=1;i<=d;i++)
	{
	  	if(i%c==0)
		{
	  	a[n]=i;
	  	count1++;
	  	n++;
		}
	  	else
		{
	  	b[j]=i;
	  	count2++;
	  	j++;
	  }

	}
	int sum1=0;
	int sum2=0;
	int e=0;
	int f=0;
	for(e=0;e<n;e++)
	{
		sum1=sum1+a[e];
	}
	for(f=0;f<j;f++)
		{
			sum2=sum2+b[f];
		}
	double	g=sum1/count1;
	double	h=sum2/(count2*1.0);
		printf("%.1lf %.1lf",g,h);
	return 0;
}

