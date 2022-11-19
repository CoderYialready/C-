#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int cmp(const void*e1,const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
struct Stu
{
	char name[20];
	int age;
};
int sort_by_name(const void*e1,const void*e2)
{
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
int main()
{	
//	int i =0;
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
	
	struct Stu s[3] = {{"zhangsan",30},{"lisi",25},{"wangwu",20}};
	int szz = sizeof(s)/sizeof(s[0]);
	qsort(s,szz,sizeof(s[0]),sort_by_name);
//	qsort(arr,sz,sizeof(arr[0]),cmp);
//	for(i = 0;i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
	return 0;
 } 
