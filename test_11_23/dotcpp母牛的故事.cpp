

//有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，
//每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
#include<stdio.h>

int cow(int n)
{
	if(n <= 4)//由3改为4少了一层嵌套，节省了空间 
		return n;
	else
		return cow(n - 1) + cow(n - 3); 
}

int main()
{
	int n = 0;
	while(scanf("%d",&n) && n)
		printf("%d ",cow(n));
	return 0;
 } 
