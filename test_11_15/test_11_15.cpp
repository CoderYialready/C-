#include<stdio.h>
void pl(int arr[],int sz)
{	
	int left = 0;
	int right = sz - 1;
	while(left < right)
	{
		while((left < right) && arr[left]%2 == 1)
		{//����left < right�����жϷ�ֹԽ����� 
			left++;
		}
		while((left < right) && arr[right]%2 == 0)
		{
			right--;
		}
		if(left < right)//����ifʱ�������ٴ�ִ��һ�� 
		{
	 		int temp = arr[left];
	 		arr[left] = arr[right];
	 		arr[right] = temp;
		}
	}
}
int main()
{	int i = 0;
	int arr[] = {1,3,5,7,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	pl(arr,size);
	while(i < size)
	{	
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
 } 
