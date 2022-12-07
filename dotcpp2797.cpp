#include <iostream>
#define max(a,b) a>b?a:b
using namespace std;
int main()
{
	int max = 0,a,n ;
    cin>>n;
    printf("\n");
    while(n)
    {
        scanf("%d",&a);
        int ret = a>max?a:max;
        n--;
    }
    cout<<a<<endl;
	
	return 0;
 } 
