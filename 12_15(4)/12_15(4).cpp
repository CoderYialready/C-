#include <stdio.h>
void reverse(int*,int);
int main()
{
	int n = 0;
	int len = 0;
	int arr1[100];
	while(1)
	{
		scanf("%d",&arr1[n]);
		if(arr1[n] == EOF)
		break; 
		n++;
	} 
	for(int i = 0;i < n-1;i++)
	{
		for(int j = i;j < n - i -1;j++)
		{
			if(arr1[j]%2 == 0 && arr1[j+1]%2 != 0)
			{
				int temp = arr1[j];
				arr1[j] = arr1[j+1];
				arr1[j+1] = temp;
			}	
		}
	}
	while(arr1[len]%2 != 0)
	len++;
	reverse(arr1,len);
	reverse(&arr1[len],n - len);
	for(int i =0;i < n;i++)
	{
		printf("%d ",arr1[i]);
	} 
	return 0;
}
void reverse(int*arr,int len)
{
	int *start = arr;
	for(int i = 0;i < len;i++)
	{
		int*p = start;
		for(int j = 0;j < len - i -1;j++)
		{
			if(*p > *(p+1))
			{
				int temp = *p;
				*p = *(p+1);
				*(p+1) =temp;
				p++;
			}	
		}
	}
}

