#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,c;
	int minnum;
	int i = 1;
	cin >> a >> b>> c;
	int tmp = min(a,b);
	minnum = min(c,tmp);
	int temp = minnum;
	while(1)
	{
		minnum = temp*i;
		if(minnum%a == 0 && minnum%b == 0 && minnum%c ==0)
		{
			break;
		}
		i++;
	}
	cout <<  minnum << endl;


	return 0;
}
