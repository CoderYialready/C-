#include <iostream>
using namespace std;
int main()
{
	int m,n,i,cnt = 0,arr[100000] = {0};
	scanf("%d%d",&m,&n);
	arr[m] = arr[n] = 1;
	for (i = 0; cnt < 1000; i++)
	if (arr[i]) arr[i+m] = arr[i+n] = 1,cnt++;
	else cnt = 0;
	printf("%d",i - 1000 - 1);
	return 0;
 } 
