#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[1000000];
	int arr2[26];
	char arr3[26];
	int k = 1;
	gets(arr1);
	int len = strlen(arr1);
	while(1)
	{
		int count = 0;
		for(int i = 0;i < len - 1;i++)
		{
			for(int n = 0;n < len-1;n++)
			{
				if(arr1[i] == arr1[n + 1])
				{
					count++;
				}
			}
			arr2[k] = count;
			arr3[k]	= arr1[i];
			k++;
		}
	} 
	return 0;
}
