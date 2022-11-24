#include <stdio.h>
void reverse(int *arr,int sz)
{
	int*start = arr;
	int*end = arr;
	//while(sz)
	//{
		arr = end;
		while(*arr > *(arr+1) && *(arr+1) != '\0' )
		{
			int temp = *arr;
			*arr = *(arr+1);
			*(arr+1) = temp;
			arr++;
		}	
		//sz--;                   
	//}
}
int main()
{	int i = 0;
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr)/sizeof(arr[0]);
	reverse(arr,sz);
	for(i = 0; i < sz; i++)
	{
		printf("%d ",arr);
	} 
	
	return 0;
 } 
