#include <stdio.h>
void menu()
{	printf("*********************\n");
	printf("****1.Add***2.Sub****\n");
	printf("****3.Mul***4.Div****\n");
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
int main()
{
	int input = 1; 
	do
	{
		menu();
		int (*prff[5])(int,int) = {NULL,Add, Sub, Mul, Div};	
		int input = 0; 
		int x = 0;
		int y = 0;
		printf("请输入一个数");
		scanf("%d",&input); 
		if(input >= 1 && input <= 4)
		{
			printf("请选择两个值:");
			scanf("%d%d", &x, &y);
			int ret = (*prff[input])(x, y);
			printf("%d\n",ret);
		}
		else if(input == 0)
		{
			printf("退出程序\n");		
			break;
		} 
		else
		{
			printf("输入错误请重新输入"); 
		} 
	}while(input); 
	return 0;
}
