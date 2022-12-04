#include <stdio.h>
#include <string.h>

void reverse(char*left,char*right);

int main()
{
	char arr[20] = {0}; 
	gets(arr);
	int len = strlen(arr);
	reverse(arr,arr + len - 1);
	
	char*start = arr;
	while(*start)
	{
		char*end = start;
		while(*end != ' ' && *end != '\0' )
		{
			end++;
		}
		reverse(start,end-1);
		if(*end == ' ')
			start = end + 1;
		else if(*end == '\0')
			start = end;
	}
	printf("%s",arr);
	return 0;
 } 
 
 void reverse(char*left,char*right)
 {
 	while(left < right)
	{
 		char temp = *left;
	 	*left = *right;
		 *right = temp;
		 left++;
		 right--;
	}
 }
 
 
 
 
 
 
