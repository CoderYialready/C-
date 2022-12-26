#include <iostream>
using namespace std;
int main()
{
	long long a,b,m = 0;
	scanf("%lld%lld%lld",&a,&b,&m);
	long long all = 5*a+2*b;
	long long temp = all;
	long long flag = m/all;
	long long count = flag*7;
	long long ll = m%all;
	if(ll != 0) {
		all = 0;
		while (all < 5*a && all < ll) {
			count += 1;
			all += a;
		}
		while (all < temp && all < ll) {
			count += 1;
			all += b;
		}
		printf("%lld",count);
	}
	else if(ll == 0) printf("%lld",count);
	return 0;
}
