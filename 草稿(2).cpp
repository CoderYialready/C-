#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll binaryPow(ll a, ll b, ll m) {
	if (b == 0) return 1;
	if (b%2 == 1) return a * binaryPow(a, b-1, m) % m;
	else {
		ll mul = binaryPow(a, b/2, m);
		return (mul * mul) % m;
	}
}

int main() {
	ll a = binaryPow(2, 3, 3);
	cout << a;
	
	return 0;
}
