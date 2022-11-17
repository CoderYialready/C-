#include <stdio.h>
void menu()
{	printf("*********************\n");
	printf("****1.Add   2.Sub****\n");
	printf("****3.Mul   4.Div****\n");
	printf("****0.退出程序*******\n");
	printf("*********************\n");
}
int Add(int x,int y) 
{
	return x + y;
}
int Sub(int x,int y)
{
	return x - y;
}
int Mul(int x,int y)
{
	return x * y;
}
int Div(int x,int y)
{
	return x % y;  
} 
int Calc(int (*prff)(int,int))
{   int x,y;
	printf("请输入两个操作数>:");
	scanf("%d%d", &x, &y);
	printf("%d\n",prff(x, y));
}
int main()
{
	int input = 0; 
	do
	{
		menu();
		int x = 0;
		int y = 0;
		printf("请输入一个数");
		scanf("%d",&input); 
		switch(input)
		{
			case 1:
			{
				Calc(Add);
				break;
			}
			case 2:
			{
				Calc(Sub);
				break;
			}
			case 3:
			{
				Calc(Mul);
				break;
			}
			case 4:
			{
				Calc(Div);
				break;
			}
			case 0:
			{
				printf("退出程序"); 
				break;
			}
			default:
			{
				printf("输入错误，请重新输入\n");	
			} 
		}
	}while(input);
	return 0;
 } 
