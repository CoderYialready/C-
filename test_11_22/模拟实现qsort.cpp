#include <stdio.h>
#include <string.h>
void bubble_sort(void*,int ,int ,int(*)(const void* ,const void*));
int cmp_int(const void*,const void*);
int sortby_age(const void*,const void*);
void swap(char*,char*,int);
void print(int*,int);

struct stu
{
	char name[20];
	int age;
};

int main()
{
//	int arr[10] = {10,9,8,7,6,5,4,3,2,1};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//	print(arr,sz);

	struct stu s[3] = {{"zhangsan",20},{"lisi",15},{"wangwu",10}};
	int sz = sizeof(s)/sizeof(s[0]);//确定循环次数 
	bubble_sort(s,sz,sizeof(s[0]),sortby_age);
	return 0;
 } 
 
 int cmp_int(const void*e1,const void*e2)
 {
 	return *(int*)e1 - *(int*)e2;
 }
 
 void bubble_sort(void*base,int sz,int width,int(*cmp)(const void*e1,const void*e2))
 {
 	int i = 0;
	for(i = 0; i < sz - 1; i++)//交换趟数 
	{
		int j = 0;
		for(j = 0; j < sz - i -1;j++)//最大交换次数 
		{
			if(cmp((char*)base + j*width,(char*)base + ( j+1)*width)> 0)
			{//判断是否要交换 
				swap((char*)base + j*width,(char*)base + (j+1)*width, width);
			}
		}
	}
 }
 void swap(char*buff1,char*buff2,int width)
 {
 	int i =0;
 	for(i = 0;i < width;i++)//以最小单位字节进行交换，width控制交换字节个数 
 	{
 		char temp = *buff1;
 		*buff1 = *buff2;
 		*buff2 = temp;
 		buff1++;
 		buff2++;
 	}
 }
 void print(int *arr,int sz)
 {
 	int i = 0;
	 for(i = 0;i < sz;i++)
	 {
	 	printf("%d ",arr[i]);
	  } 
 }
 
 int sortby_age(const void*e1,const void*e2)
 {
 	return strcmp(((struct stu*)e1) -> name,((struct stu*)e2)-> name);
 }
 
 
 
