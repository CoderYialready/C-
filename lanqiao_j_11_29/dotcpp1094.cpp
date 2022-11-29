#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	char str[1001];
	scanf("%d",&n);
	getchar();//防止被gets吸收 
	for(i = 0;i < n;i++)
	{
		gets(str);
		puts(str);
		printf("\n");
	}
	while(scanf("%s",&str) != EOF)
	{
		printf("%s\n",str);
		printf("\n");
	}
	//分段处理与输出：先处理n之内的数据 输出，再处理n之外的数据 输出 

	return 0; 
}
