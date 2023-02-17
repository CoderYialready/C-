#include <bits/stdc++.h>
using namespace std;
int main() {
	string s = "AAASSXXDDAA";
	int se = 2;
	string s1 = "AA";
	string v = s.substr(0, se);	
	if (s1 == s.substr(0, se)) cout << 1;
	return 0;
}
