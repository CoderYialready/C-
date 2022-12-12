#include<stdio.h>
int bufa(int*,int);
int main()
{
    int bu=0,n=0,count,flag;
    scanf("%d",&n);
    count = n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(1)
    {
        for(int j=0;j<count;j++)
        {
            if(arr[0]!=arr[j])
            {
                flag=1;
                break;
            }
            else
			{
                flag=0;
            }
        }
        if(flag==0)
        {
            break;
        }
        n=count;
        int sum=0;
        int tmp=arr[n-1];
        while (n>1)
        {
            arr[n-1]/=2;
            arr[n-1]+=arr[n-2]/2;
            n--;
        }
        arr[0]/=2;
        arr[0]+=tmp/2;
        bu+=bufa(arr,count);
    }
    printf("%d",bu);
    return 0;
}
int bufa(int *arr,int count)
{
    int k=0;
    while (count>0)
    {
        if(arr[count-1]%2!=0)
        {
            arr[count-1]+=1;
            k++;
        }
        count--;
    }
    return k;
}

