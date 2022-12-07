#include <stdio.h>
#include <math.h>

void a1(int,int,int,int);
void a2(int,int,int,int);
void a3();

int main()
{
	int a,b,c;
	int ret = 0;
	scanf("%d%d%d",&a,&b,&c);
	ret = sqrt(b*b - 4*a*c);
	if(ret >= 0)
	{
		if(ret > 0)
			a1(ret,a,b,c);
		else
			a2(ret,a,b,c);
	}
	else
		a3();
	return 0;
}

void a1(int ret,int a,int b, int c)
{
	int x1 = (-b + ret)/(2.0*a);
	int x2 = (-b - ret)/(2.0*a);
	printf("x1=%d x2=%d",x1,x2);
}

void a2(int ret,int a,int b, int c)
{
	int x1 = (-b + ret)/(2.0*a);
	printf("x1=x2=%d",x1);
}

void a3()
{
	printf("нч╫Б"); 
}









