#include <iostream>
using namespace std;
//typedef long long int ll;
long long int gcd(long long int a,long long int b) {
	return b?gcd(b,a%b):a;
}
int main() {
	long long int n = 0;
	long long int a = 0, b = 0, c = 0, d = 0;
	long long int t = 0;
	scanf("%lld",&n);
	n--;
	scanf("%lld/%lld",&a, &b); 
	while (n--) {
		scanf("%lld/%lld",&c, &d);
		t = b * d / gcd(b,d);
		a = t / b * a + t / d * c;
		b = t;
		t = gcd(a,b);
		a /= t;
		b /= t;
	}
	long long int count  = a / b;
	a %= b;
	if (count == 0) {
		if (a == 0) printf("0");
		else printf("%lld/%lld",a,b);	
	}
	else {
		if (a) {
			printf("%lld ", count);
			printf("%lld/%lld", a, b);
		}
		else printf("%lld", count);
	}
	
	return 0;
} 
