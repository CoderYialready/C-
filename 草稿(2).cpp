#include <bits/stdc++.h>
using namespace std;
bool isprime(int i) {
	if (i == 0 || i == 1) return false;
	for (int j = 2; j <= sqrt(i); j++) {
		if (i%j == 0) return false;
	}
	return true;
}
int main() {
	
		if (isprime(187)) cout << 187 << ' ';
	
	
	
	return 0;
}
