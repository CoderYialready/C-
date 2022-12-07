#include <stdio.h>
int main()
{
	int count = 0;
	int b =0;
	int i =0;
	int a[10] = {0,1,2,9,4,5,6,7,8,9};
	printf("请输入一个数：");
	scanf("%d",&b);
	for(i = 0;i < 10;i++)
	{
		if(a[i] == b)
		{
			count++;
		}
	}
	printf("有%d个元素相同",count);
	return 0;
}
