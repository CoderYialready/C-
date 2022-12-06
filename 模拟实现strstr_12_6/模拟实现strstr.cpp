#include<stdio.h>
#include <assert.h>

char* my_strstr(const char*str1,const char*str2)
{
	assert(str1 && str2);
	const char*s1 = NULL;
	const char*s2 = NULL;
	const char*p = str1;
	while(*p)
	{
		s1 = p;
		s2 = str2;
		while(s1 && s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if(*s2 == '\0')
		{
			return (char*)p;
		}
		p++;	
	}
	return NULL;
}

int main()
{
	char arr1[20] = "abbbcdf";
	char arr2[] = "bbc";
	char*p = my_strstr(arr1,arr2);
	if(p == NULL)
	{
		printf("’“≤ªµΩ");
	}
	else
	{
		printf("%s",p);
	}
	return 0;
 } 
